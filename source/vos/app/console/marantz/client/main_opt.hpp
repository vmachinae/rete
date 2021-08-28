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
///   Date: 11/16/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPT_HPP

#include "vos/app/console/network/client/main.hpp"

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ACCEPT_PORT 2323
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_CONNECT_PORT 23

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPT "up"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTUSE "Volume up ( MVUP )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_S "u"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_C 'u'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPT "down"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTUSE "Volume down ( MVDOWN )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_S "d"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C 'd'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPT "volume"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG "[{ ? | UP | DOWN | 0..n }]"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTUSE "Volume level ( MV[{ ? | UP | DOWN | 0..n }] )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_S "v::"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_C 'v'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPT "stereo"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTUSE "Stereo mode ( MSSTERO )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_S "e"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_C 'e'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPT "surround"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTUSE "Surround mode ( MSDOLBY DIGITAL )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_S "r"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_C 'r'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPT "sound"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG "[{ ? | STEREO | DOLBY DIGITAL | ... }]"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTUSE "Sound mode ( MS[{ ? | STEREO | DOLBY DIGITAL | ... }] )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_S "s::"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_C 's'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPT "input"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG "[{ CD | DVD | BD | ... }]"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTUSE "Input ( SI[{ CD | DVD | BD | ... }] )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_S "t::"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_C 't'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPT "on"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTUSE "Power on ( PWON )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_S "n"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_C 'n'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPT "off"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTUSE "Power off ( PWSTANDBY )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_S "f"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'f'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPT "power"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG "[{ ? | ON | STANDBY }]"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTUSE "Power status ( PW[{ ? | ON | STANDBY }] )"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_S "w::"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_C 'w'
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTION \
   {VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG_RESULT, \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_C}, \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_S \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_S \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTION \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTION \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS \

#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ARGS "[command]"
#define VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ARGV "[command] command string",

namespace vos {
namespace app {
namespace console {
namespace marantz {
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
    : accept_port_(VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ACCEPT_PORT),
      connect_port_(VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_CONNECT_PORT) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    /// ...options...
    virtual int on_volume_up_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* volume_up_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTUSE;
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
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTUSE;
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
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTUSE;
        return chars;
    }

    virtual int on_stereo_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* stereo_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTUSE;
        return chars;
    }
    virtual int on_surround_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* surround_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTUSE;
        return chars;
    }
    virtual int on_sound_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* sound_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTUSE;
        return chars;
    }

    virtual int on_input_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual const char_t* input_option_usage(const char_t*& optarg, const struct option* longopt) {
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTARG;
        const char_t* chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTUSE;
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
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTUSE;
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
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTUSE;
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
        optarg = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTARG;
        chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTUSE;
        return chars;
    }

    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_C:
            err = this->on_volume_up_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C:
            err = this->on_volume_down_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_C:
            err = this->on_volume_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_C:
            err = this->on_stereo_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_C:
            err = this->on_surround_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_C:
            err = this->on_sound_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_C:
            err = this->on_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_C:
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
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_UP_OPTVAL_C:
            chars = volume_up_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_DOWN_OPTVAL_C:
            chars = volume_down_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_VOLUME_OPTVAL_C:
            chars = volume_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_STEREO_OPTVAL_C:
            chars = stereo_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SURROUND_OPTVAL_C:
            chars = surround_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_SOUND_OPTVAL_C:
            chars = sound_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INPUT_OPTVAL_C:
            chars = input_option_usage(optarg, longopt);
            break;

        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            chars = power_on_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            chars = power_off_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_POWER_OPTVAL_C:
            chars = power_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_ARGV
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
} /// namespace marantz
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_OPT_HPP
