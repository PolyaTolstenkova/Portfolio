//
//  WeatherModel.swift
//  Clima
//
//  Created by Полина Толстенкова on 03.08.2022.
//

import Foundation


struct WeatherModel {
    let conditionId: Int
    let cityName: String
    var temperature: Double
    
    var temperatureString: String {
        return String(Int(temperature))
    }
    
    var conditionName: String {
        switch conditionId  {
        case 200...232:
            return "cloud.bolt"
        case 300...321:
            return "cloud.drizzle"
        case 500...504:
            return "cloud.sun.rain"
        case 511:
            return "cloud.sleet"
        case 520...531:
            return "cloud.rain"
        case 600...622:
            return "cloud.snow"
        case 701...781:
            return "cloud.fog"
        case 800:
            return "sun.max"
        case 801...802:
            return "cloud.sun"
        case 803...804:
            return "cloud"
        default:
            return "cloud"
        }
    }
}

