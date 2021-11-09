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
///   Date: 9/8/2020, 9/22/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPT_HPP

#include "vos/app/console/network/base/main.hpp"

#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPT "accept-one"
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG_RESULT 0
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG VOS_NETWORK_MAIN_ACCEPT_HOST_OPTARG
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTUSE "Accept one"
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_S "1::"
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_C '1'
#define VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTION \
   {VOS_NETWORK_MAIN_ACCEPT_ONCE_OPT, \
    VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG_REQUIRED, \
    VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG_RESULT, \
    VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_C}, \

#define VOS_NETWORK_MAIN_ACCEPT_OPT "accept"
#define VOS_NETWORK_MAIN_ACCEPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_NETWORK_MAIN_ACCEPT_OPTARG_RESULT 0
#define VOS_NETWORK_MAIN_ACCEPT_OPTARG VOS_NETWORK_MAIN_ACCEPT_HOST_OPTARG
#define VOS_NETWORK_MAIN_ACCEPT_OPTUSE "Accept"
#define VOS_NETWORK_MAIN_ACCEPT_OPTVAL_S "a::"
#define VOS_NETWORK_MAIN_ACCEPT_OPTVAL_C 'a'
#define VOS_NETWORK_MAIN_ACCEPT_OPTION \
   {VOS_NETWORK_MAIN_ACCEPT_OPT, \
    VOS_NETWORK_MAIN_ACCEPT_OPTARG_REQUIRED, \
    VOS_NETWORK_MAIN_ACCEPT_OPTARG_RESULT, \
    VOS_NETWORK_MAIN_ACCEPT_OPTVAL_C}, \

#define VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_S \
    VOS_NETWORK_MAIN_ACCEPT_OPTVAL_S \

#define VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTION \
    VOS_NETWORK_MAIN_ACCEPT_OPTION \

#define VOS_NETWORK_SERVER_ENDPOINT_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_CHARS

#define VOS_NETWORK_SERVER_ENDPOINT_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_BASE_ENDPOINT_MAIN_OPTIONS_OPTIONS

#define VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_CHARS

#define VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_OPTIONS

#define VOS_NETWORK_SERVER_MAIN_ARUMENTS_CHARS 0
#define VOS_NETWORK_SERVER_MAIN_ARUMENTS_ARGS 0

///
/// VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPTIONS_...
/// 
#define VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS \

namespace vos {
namespace app {
namespace console {
namespace network {
namespace server {

/// class main_optt
template <class TExtends = network::base::main, class TImplements = typename TExtends::implements>
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
    main_optt(): run_(0), accept_once_(false), accept_done_(false), accept_restart_(false) {
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

    /// ...accept_run
    virtual int accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept_run(argc, argv, env))) {
            int err2 = 0;
            err = accept_run(argc, argv, env);
            if ((err2 = after_accept_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_accept_once_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_accept_once();
        run_ = &derives::all_accept_run;
        return err;
    }
    virtual int set_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_accept_run;
        return err;
    }

    /// network_server...option...
    virtual int network_server_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = derives::on_option(optval, optarg, optname, optind, argc, argv, env);
        return err;
    }
    virtual const char_t* network_server_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        chars = derives::option_usage(optarg, longopt);
        return chars;
    }

    /// ...option...
    virtual int on_accept_once_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_accept_once_run(argc, argv, env);
        return err;
    }
    virtual const char_t* accept_once_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTARG;
        chars = VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTUSE;
        return chars;
    }
    virtual int on_accept_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_accept_run(argc, argv, env);
        return err;
    }
    virtual const char_t* accept_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = VOS_NETWORK_MAIN_ACCEPT_OPTARG;
        chars = VOS_NETWORK_MAIN_ACCEPT_OPTUSE;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_C:
            err = this->on_accept_once_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_NETWORK_MAIN_ACCEPT_OPTVAL_C:
            err = this->on_accept_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_NETWORK_MAIN_ACCEPT_ONCE_OPTVAL_C:
            chars = accept_once_option_usage(optarg, longopt);
            break;
        case VOS_NETWORK_MAIN_ACCEPT_OPTVAL_C:
            chars = accept_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = VOS_NETWORK_SERVER_MAIN_ARUMENTS_ARGS;
        return VOS_NETWORK_SERVER_MAIN_ARUMENTS_CHARS;
    }

    /// ...accept_...
    virtual bool& set_accept_once(bool to = true) {
        accept_once_ = to;
        return (bool&)accept_once_;
    }
    virtual bool& accept_once() const {
        return (bool&)accept_once_;
    }
    virtual bool& set_accept_done(bool to = true) {
        accept_done_ = to;
        return (bool&)accept_done_;
    }
    virtual bool& accept_done() const {
        return (bool&)accept_done_;
    }
    virtual bool& set_accept_restart(bool to = true) {
        accept_restart_ = to;
        return (bool&)accept_restart_;
    }
    virtual bool& accept_restart() const {
        return (bool&)accept_restart_;
    }
    
protected:
    bool accept_once_, accept_done_, accept_restart_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_NETWORK_SERVER_MAIN_OPT_HPP
