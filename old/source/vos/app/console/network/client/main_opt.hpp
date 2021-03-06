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
///   Date: 8/13/2020, 9/22/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_OPT_HPP

#include "vos/app/console/network/base/main.hpp"

#define VOS_NETWORK_MAIN_CONNECT_OPT "connect"
#define VOS_NETWORK_MAIN_CONNECT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_NETWORK_MAIN_CONNECT_OPTARG_RESULT 0
#define VOS_NETWORK_MAIN_CONNECT_OPTARG VOS_NETWORK_MAIN_CONNECT_HOST_OPTARG
#define VOS_NETWORK_MAIN_CONNECT_OPTUSE "Connect"
#define VOS_NETWORK_MAIN_CONNECT_OPTVAL_S "c::"
#define VOS_NETWORK_MAIN_CONNECT_OPTVAL_C 'c'
#define VOS_NETWORK_MAIN_CONNECT_OPTION \
   {VOS_NETWORK_MAIN_CONNECT_OPT, \
    VOS_NETWORK_MAIN_CONNECT_OPTARG_REQUIRED, \
    VOS_NETWORK_MAIN_CONNECT_OPTARG_RESULT, \
    VOS_NETWORK_MAIN_CONNECT_OPTVAL_C}, \

#define VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_MAIN_CONNECT_OPTVAL_S \

#define VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_MAIN_CONNECT_OPTION \

#define VOS_NETWORK_CLIENT_ENDPOINT_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_CHARS

#define VOS_NETWORK_CLIENT_ENDPOINT_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_OPTIONS

#define VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_CHARS

#define VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_OPTIONS

#define VOS_NETWORK_CLIENT_MAIN_ARUMENTS_CHARS 0
#define VOS_NETWORK_CLIENT_MAIN_ARUMENTS_ARGS 0

namespace vos {
namespace app {
namespace console {
namespace network {
namespace client {

/// class main_optt
template <class TExtends = /*console::main*/network::base::main, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    main_optt()
    : run_(0)/*, connect_port_(VOS_NETWORK_MAIN_CONNECT_PORT), 
      connect_host_(VOS_NETWORK_MAIN_CONNECT_HOST)*/ {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...connect_run
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect_run(argc, argv, env))) {
            int err2 = 0;
            err = connect_run(argc, argv, env);
            if ((err2 = after_connect_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_connect_run;
        return err;
    }
    virtual int unset_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }

    /*/// ...info_run
    virtual int info_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_info_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_info_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_info_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_info_run(argc, argv, env))) {
            int err2 = 0;
            err = info_run(argc, argv, env);
            if ((err2 = after_info_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_info_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_info_run;
        return err;
    }

    /// ...connect_host / ...connect_port
    virtual string_t& set_connect_host(const string_t& to) {
        const char_t* chars = to.has_chars();
        if ((chars)) connect_host_.assign(to);
        else connect_host_.clear();
        return connect_host();
    }
    virtual string_t& set_connect_host(const char_t* to) {
        if ((to)) connect_host_.assign(to);
        else connect_host_.clear();
        return connect_host();
    }
    virtual string_t& connect_host() const {
        return (string_t&)connect_host_;
    }
    virtual short& set_connect_port(short to) {
        connect_port_ = to;
        return connect_port();
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }

    /// ...host / ...port
    virtual string_t& set_host(const string_t& to) {
        return set_connect_host(to);
    }
    virtual string_t& set_host(const char_t* to) {
        return set_connect_host(to);
    }
    virtual string_t& host() const {
        return connect_host();
    }
    virtual short& set_port(short to) {
        return set_connect_port(to);
    }
    virtual short& port() const {
        return connect_port();
    }*/

    /// ...options...
    virtual int on_connect_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_connect_run(argc, argv, env);
        return err;
    }
    virtual const char_t* connect_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_CONNECT_OPTARG;
        chars = VOS_NETWORK_MAIN_CONNECT_OPTUSE;
        return chars;
    }
    /*virtual int on_info_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::all_info_run;
        return err;
    }
    virtual const char_t* info_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_INFO_OPTARG;
        chars = VOS_NETWORK_MAIN_INFO_OPTUSE;
        return chars;
    }
    virtual int on_host_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_host(optarg);
        }
        return err;
    }
    virtual const char_t* host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_HOST_OPTARG;
        chars = VOS_NETWORK_MAIN_HOST_OPTUSE;
        return chars;
    }
    virtual int on_port_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned port = arg.to_unsigned();
            if ((0 < port)) {
                this->set_port(port);
            }
        }
        return err;
    }
    virtual const char_t* port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_PORT_OPTARG;
        chars = VOS_NETWORK_MAIN_PORT_OPTUSE;
        return chars;
    }*/
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_NETWORK_MAIN_CONNECT_OPTVAL_C:
            err = this->on_connect_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        /*case VOS_NETWORK_MAIN_INFO_OPTVAL_C:
            err = this->on_info_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_NETWORK_MAIN_HOST_OPTVAL_C:
            err = this->on_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_NETWORK_MAIN_PORT_OPTVAL_C:
            err = this->on_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;*/
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_NETWORK_MAIN_CONNECT_OPTVAL_C:
            chars = connect_option_usage(optarg, longopt);
            break;
        /*case VOS_NETWORK_MAIN_INFO_OPTVAL_C:
            chars = host_option_usage(optarg, longopt);
            break;
        case VOS_NETWORK_MAIN_HOST_OPTVAL_C:
            chars = host_option_usage(optarg, longopt);
            break;
        case VOS_NETWORK_MAIN_PORT_OPTVAL_C:
            chars = port_option_usage(optarg, longopt);
            break;*/
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = VOS_NETWORK_CLIENT_MAIN_ARUMENTS_ARGS;
        return VOS_NETWORK_CLIENT_MAIN_ARUMENTS_CHARS;
    }

protected:
    /*short connect_port_;
    string_t connect_host_;*/
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_OPT_HPP
