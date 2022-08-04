//
//  CoinManager.swift
//  ByteCoin
//
//
//

import Foundation

protocol CoinManagerDelegate {
    func didUpdateUI(_ price: String)
    func didFailWithError(_ error: Error)
}

struct CoinManager {
    
    var delegate: CoinManagerDelegate?
    
    let baseURL = "https://rest.coinapi.io/v1/exchangerate/BTC"
    let apiKey = "4D130D1E-3D53-418F-A3F6-BF90B2294CB0"
    
    let currencyArray = ["UAH","AUD", "BRL","CAD","CNY","EUR","GBP","HKD","IDR","ILS","INR","JPY","MXN","NOK","NZD","PLN","RON","SEK","SGD","USD","ZAR"]

    
    func getCoinPrice(for currency: String) {
        print(currency)
    }
    
    func fetchCoin(_ currency: String) {
        let URLString = "https://rest.coinapi.io/v1/exchangerate/BTC/\(currency)?apikey=\(apiKey)"
        performRequest(URLString)
    }
    
    func performRequest(_ URLString: String) {
        if let url = URL(string: URLString) {
            let session = URLSession(configuration: .default)
            let task = session.dataTask(with: url) { data, response, error in
                if error != nil {
                    self.delegate?.didFailWithError(error!)
                }
                if let safeData = data {
                    if let coinPrice = parseJSON(safeData) {
                        let coinPriceString = String(format: "%.2f", coinPrice)
                        self.delegate?.didUpdateUI(coinPriceString)
                    }
                }
            }
            task.resume()
        }
    }
    
    func parseJSON(_ data: Data) -> Double? {
        let decoder = JSONDecoder()

        do{
            let decodedData = try decoder.decode(CoinData.self, from: data)
            return decodedData.rate
        }catch{
            return nil
        }
    }
    
}
