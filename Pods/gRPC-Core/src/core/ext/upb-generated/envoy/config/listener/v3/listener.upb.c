/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/listener/v3/listener.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/listener/v3/listener.upb.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/socket_option.upb.h"
#include "envoy/config/listener/v3/api_listener.upb.h"
#include "envoy/config/listener/v3/listener_components.upb.h"
#include "envoy/config/listener/v3/udp_listener_config.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "xds/core/v3/collection_entry.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_config_listener_v3_ListenerCollection_submsgs[1] = {
  {.submsg = &xds_core_v3_CollectionEntry_msginit},
};

static const upb_msglayout_field envoy_config_listener_v3_ListenerCollection__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_listener_v3_ListenerCollection_msginit = {
  &envoy_config_listener_v3_ListenerCollection_submsgs[0],
  &envoy_config_listener_v3_ListenerCollection__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_listener_v3_Listener_submsgs[14] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLog_msginit},
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_Metadata_msginit},
  {.submsg = &envoy_config_core_v3_SocketOption_msginit},
  {.submsg = &envoy_config_listener_v3_ApiListener_msginit},
  {.submsg = &envoy_config_listener_v3_FilterChain_msginit},
  {.submsg = &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msginit},
  {.submsg = &envoy_config_listener_v3_Listener_DeprecatedV1_msginit},
  {.submsg = &envoy_config_listener_v3_Listener_InternalListenerConfig_msginit},
  {.submsg = &envoy_config_listener_v3_ListenerFilter_msginit},
  {.submsg = &envoy_config_listener_v3_UdpListenerConfig_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_config_listener_v3_Listener__fields[27] = {
  {1, UPB_SIZE(16, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(32, 48), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(96, 176), 0, 5, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(36, 56), 2, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(40, 64), 3, 13, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(44, 72), 4, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(48, 80), 5, 7, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(100, 184), 0, 9, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {10, UPB_SIZE(52, 88), 6, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {11, UPB_SIZE(56, 96), 7, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {12, UPB_SIZE(60, 104), 8, 13, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {13, UPB_SIZE(104, 192), 0, 3, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {15, UPB_SIZE(64, 112), 9, 12, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {16, UPB_SIZE(8, 8), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {17, UPB_SIZE(12, 12), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {18, UPB_SIZE(68, 120), 10, 10, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {19, UPB_SIZE(72, 128), 11, 4, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {20, UPB_SIZE(76, 136), 12, 6, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {21, UPB_SIZE(13, 13), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {22, UPB_SIZE(108, 200), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {24, UPB_SIZE(80, 144), 13, 13, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {25, UPB_SIZE(84, 152), 14, 5, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {26, UPB_SIZE(88, 160), 15, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {27, UPB_SIZE(112, 208), UPB_SIZE(-117, -217), 8, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {28, UPB_SIZE(24, 32), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {29, UPB_SIZE(92, 168), 16, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_listener_v3_Listener_msginit = {
  &envoy_config_listener_v3_Listener_submsgs[0],
  &envoy_config_listener_v3_Listener__fields[0],
  UPB_SIZE(120, 224), 27, _UPB_MSGEXT_NONE, 13, 255,
};

static const upb_msglayout_sub envoy_config_listener_v3_Listener_DeprecatedV1_submsgs[1] = {
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_config_listener_v3_Listener_DeprecatedV1__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_listener_v3_Listener_DeprecatedV1_msginit = {
  &envoy_config_listener_v3_Listener_DeprecatedV1_submsgs[0],
  &envoy_config_listener_v3_Listener_DeprecatedV1__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_listener_v3_Listener_ConnectionBalanceConfig_submsgs[1] = {
  {.submsg = &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msginit},
};

static const upb_msglayout_field envoy_config_listener_v3_Listener_ConnectionBalanceConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msginit = {
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_submsgs[0],
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

const upb_msglayout envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, _UPB_MSGEXT_NONE, 0, 255,
};

const upb_msglayout envoy_config_listener_v3_Listener_InternalListenerConfig_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, _UPB_MSGEXT_NONE, 0, 255,
};

static const upb_msglayout *messages_layout[6] = {
  &envoy_config_listener_v3_ListenerCollection_msginit,
  &envoy_config_listener_v3_Listener_msginit,
  &envoy_config_listener_v3_Listener_DeprecatedV1_msginit,
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_msginit,
  &envoy_config_listener_v3_Listener_ConnectionBalanceConfig_ExactBalance_msginit,
  &envoy_config_listener_v3_Listener_InternalListenerConfig_msginit,
};

const upb_msglayout_file envoy_config_listener_v3_listener_proto_upb_file_layout = {
  messages_layout,
  NULL,
  6,
  0,
};

#include "upb/port_undef.inc"

