///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 11/17/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPT_HPP

#include "vos/app/console/network/client/main.hpp"

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ACCEPT_PORT 2323
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_CONNECT_PORT 23

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPT "up"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTUSE "Volume up ( VUP )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_S "u"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_C 'u'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPT "down"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTUSE "Volume down ( VDN )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_S "d"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C 'd'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPT "volume"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG "[ 0..100 ]"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTUSE "Volume level ( { QVL | SVL 0..10 } )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_S "v::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_C 'v'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPT "next"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTUSE "Skip to next ( NXT )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_S "x"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_C 'x'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPT "previous"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTUSE "Skip to previous ( PRE )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_S "e"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_C 'e'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPT "track"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTUSE "Track number / of ( QTK )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_S "k::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_C 'k'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPT "start"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTUSE "Start play ( PLA )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_S "s"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_C 's'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPT "stop"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTUSE "Stop play ( STP )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_S "t"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_C 't'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPT "replay-all"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG "[ { [ALL] | SHF | RND } ]"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTUSE "Replay ( SRP [ { [ALL] | SHF | RND } ] )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_S "a::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_C 'a'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPT "replay-random"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG "[ { ALL | SHF | [RND] } ]"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTUSE "Replay ( SRP [ { ALL | SHF | [RND] } ] )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_S "r::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_C 'r'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPT "replay"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG "[ { ALL | SHF | RND } ]"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTUSE "Replay ( SRP [ { ALL | SHF | RND } ] )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_S "y::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_C 'y'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPT "bray"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTUSE "Blu-ray input (SIS 0)"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_S "b"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_C 'b'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPT "hdmi"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTUSE "HDMI input (SIS 1)"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_S "m"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_C 'm'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPT "eject"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTUSE "Eject open / close (EJT [{ OPEN | CLOSE }])"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_S "j::"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_C 'j'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPT "on"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTUSE "Power on ( PWR ON )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_S "n"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_C 'n'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPT "off"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTUSE "Power off ( PWR OFF )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_S "f"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'f'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPT "power"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG ""
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTUSE "Power ( PWR )"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_S "w"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_C 'w'
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTION \
   {VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG_RESULT, \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_C}, \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_S \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_S \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTION \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTION \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS \

#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ARGS "[<command>[<sp><arguments>]]"
#define VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ARGV "[<command>[<sp><arguments>]] command string",

namespace vos {
namespace app {
namespace console {
namespace oppo {
namespace client {

/// class main_optt
template <class TExtends = network::client::maint<>, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    main_optt()
    : accept_port_(VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ACCEPT_PORT),
      connect_port_(VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_CONNECT_PORT) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy): extends(copy) {
    }

protected:
    /// ...options...
    virtual int on_next_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* next_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTUSE;
        return chars;
    }
    virtual int on_prev_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* prev_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTUSE;
        return chars;
    }
    virtual int on_track_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* track_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTUSE;
        return chars;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* stop_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTUSE;
        return chars;
    }
    virtual int on_start_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* start_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTUSE;
        return chars;
    }

    virtual int on_volume_up_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* volume_up_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTUSE;
        return chars;
    }
    virtual int on_volume_down_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* volume_down_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTUSE;
        return chars;
    }
    virtual int on_volume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* volume_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTUSE;
        return chars;
    }

    virtual int on_replay_all_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* replay_option_all_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTUSE;
        return chars;
    }

    virtual int on_replay_random_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* replay_option_random_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTUSE;
        return chars;
    }

    virtual int on_replay_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* replay_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTUSE;
        return chars;
    }

    virtual int on_bray_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* bray_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTUSE;
        return chars;
    }
    virtual int on_hdmi_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* hdmi_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTUSE;
        return chars;
    }

    virtual int on_eject_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* eject_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTUSE;
        return chars;
    }

    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTUSE;
        return chars;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTUSE;
        return chars;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* power_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTARG;
        chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTUSE;
        return chars;
    }

    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_C:
            err = this->on_next_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_C:
            err = this->on_prev_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_C:
            err = this->on_track_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_C:
            err = this->on_start_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_C:
            err = this->on_stop_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_C:
            err = this->on_volume_up_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C:
            err = this->on_volume_down_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_C:
            err = this->on_volume_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_C:
            err = this->on_replay_all_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_C:
            err = this->on_replay_random_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_C:
            err = this->on_replay_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_C:
            err = this->on_bray_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_C:
            err = this->on_hdmi_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_C:
            err = this->on_eject_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_C:
            err = this->on_power_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_NEXT_OPTVAL_C:
            chars = next_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_PREV_OPTVAL_C:
            chars = prev_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_TRACK_OPTVAL_C:
            chars = track_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_START_OPTVAL_C:
            chars = start_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_STOP_OPTVAL_C:
            chars = stop_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_UP_OPTVAL_C:
            chars = volume_up_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C:
            chars = volume_down_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_VOLUME_OPTVAL_C:
            chars = volume_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_ALL_OPTVAL_C:
            chars = replay_option_all_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_RANDOM_OPTVAL_C:
            chars = replay_option_random_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_REPLAY_OPTVAL_C:
            chars = replay_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_BRAY_OPTVAL_C:
            chars = bray_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_HDMI_OPTVAL_C:
            chars = hdmi_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_EJECT_OPTVAL_C:
            chars = eject_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            chars = power_on_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            chars = power_off_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_POWER_OPTVAL_C:
            chars = power_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// accept_port / connect_port
    virtual short& accept_port() const {
        return (short&)accept_port_;
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }

protected:
    short accept_port_, connect_port_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace oppo
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_OPPO_CLIENT_MAIN_OPT_HPP
