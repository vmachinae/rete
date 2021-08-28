///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 3/4/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP

#include "vos/app/console/network/sockets/base/main.hpp"
#include "vos/app/console/network/server/main_opt.hpp"
#include "vos/app/console/os/sockets/base/main.hpp"

///
/// VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_...
/// 
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS \

///
/// VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_...
/// 
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPT "relay-host"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd }]"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTUSE "Relay hostname or address"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_S "s::"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_C 's'
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTION \
   {VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPT, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG_RESULT, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_C}, \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPT "relay-port"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG_RESULT 0
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG "[{ 0..2^16-1 }]"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTUSE "Relay port number"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_S "t::"
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_C 't'
#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTION \
   {VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPT, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG_REQUIRED, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG_RESULT, \
    VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_C}, \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_S \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_S \
   VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTION \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTION \
   VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_CHARS \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_CHARS_EXTEND \
   VOS_CONSOLE_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_OPTIONS \
   VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_OPTIONS_EXTEND \
   VOS_CONSOLE_MAIN_OPTIONS_OPTIONS \

namespace vos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace server {

/// class main_optt
template 
<class TExtends = network::server::main_optt<os::sockets::base::main>, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt()
    : run_(0), 
      accept_ep_(0), accept_tp_(0),
      relay_ep_(0), relay_tp_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

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

    /// ...run
    virtual int accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool accept_restart = false;
        do {
            this->set_accept_done(false);
            if (!(err = this->all_accept(argc, argv, env))) {
                if (!(this->accept_once())) {
                    accept_restart = this->accept_restart();
                }
                this->set_accept_restart(false);
            }
        } while (accept_restart);
        return err;
    }

    /// ...accept
    virtual int accept(int argc, char_t** argv, char_t**env) {
        const vos::network::sockets::sockstring_t& host = this->accept_host();
        const vos::network::sockets::sockport_t& port = this->accept_port();
        vos::network::sockets::endpoint& ep = this->accept_ep();
        vos::network::sockets::transport& tp = this->accept_tp();
        vos::network::sockets::interface &ac = this->accept_iface(), 
                                         &cn = this->connect_iface();
        vos::network::sockets::sockaddr_t& ad = this->connect_addr();
        vos::network::sockets::socklen_t& al = this->connect_addrlen();
        int err = 0;

        if ((ep.attach(host, port))) {

            if ((ac.open(tp))) {
                
                if ((ac.listen(ep))) {
                    
                    do {
                        if ((ac.accept(cn, &ad, al))) {
                            
                            this->all_accept(cn, argc, argv, env);
                            cn.close();
                        }
                    } while (!(this->accept_once() || this->accept_done() || this->accept_restart()));
                }
                ac.close();
            }
            ep.detach();
        }
        return err;
    }
    virtual int before_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept(argc, argv, env))) {
            int err2 = 0;
            err = accept(argc, argv, env);
            if ((err2 = after_accept(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...accept
    virtual int accept(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = this->all_recv_request(cn, argc, argv, env))) {
            err = this->all_send_response(cn, argc, argv, env);
        }
        return err;
    }
    virtual int before_accept(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept(cn, argc, argv, env))) {
            int err2 = 0;
            err = accept(cn, argc, argv, env);
            if ((err2 = after_accept(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay
    virtual int relay(int argc, char_t** argv, char_t** env) {
        const vos::network::sockets::sockstring_t& host = this->relay_host();
        const vos::network::sockets::sockport_t& port = this->relay_port();
        vos::network::sockets::endpoint& ep = this->relay_ep();
        vos::network::sockets::transport& tp = this->relay_tp();
        vos::network::sockets::interface &cn = this->relay_iface();
        int err = 0;
        if ((ep.attach(host, port))) {

            if ((cn.open(tp))) {
                
                if ((cn.connect(ep))) {
                    
                    this->all_relay(cn, argc, argv, env);
                }
                cn.close();
            }
            ep.detach();
        }
        return err;
    }
    virtual int before_relay(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay(argc, argv, env))) {
            int err2 = 0;
            err = relay(argc, argv, env);
            if ((err2 = after_relay(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay
    virtual int relay(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_relay_request(cn, argc, argv, env))) {
            err = this->all_relay_response(cn, argc, argv, env);
        }
        return err;
    }
    virtual int before_relay(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay(cn, argc, argv, env))) {
            int err2 = 0;
            err = relay(cn, argc, argv, env);
            if ((err2 = after_relay(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay_request
    virtual int relay_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_relay_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay_request(cn, argc, argv, env))) {
            int err2 = 0;
            err = relay_request(cn, argc, argv, env);
            if ((err2 = after_relay_request(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay_response
    virtual int relay_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_relay_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay_response(cn, argc, argv, env))) {
            int err2 = 0;
            err = relay_response(cn, argc, argv, env);
            if ((err2 = after_relay_response(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay_host_run
    virtual int relay_host_run(int argc, char_t** argv, char_t** env) {
        const string_t& relay_host = this->relay_host();
        const char_t* chars = 0; size_t length = 0;
        int err = 0;
        if ((chars = relay_host.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int before_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay_host_run(argc, argv, env))) {
            int err2 = 0;
            err = relay_host_run(argc, argv, env);
            if ((err2 = after_relay_host_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_relay_host_run;
        return err;
    }
    virtual int before_set_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_relay_host_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_relay_host_run(argc, argv, env))) {
            int err2 = 0;
            err = set_relay_host_run(argc, argv, env);
            if ((err2 = after_set_relay_host_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay_port_run
    virtual int relay_port_run(int argc, char_t** argv, char_t** env) {
        const short& relay_port = this->get_relay_port();
        int err = 0;
        if (0 < (relay_port)) {
            this->outln(unsigned_to_string(relay_port).chars());
        }
        return err;
    }
    virtual int before_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_relay_port_run(argc, argv, env))) {
            int err2 = 0;
            err = relay_port_run(argc, argv, env);
            if ((err2 = after_relay_port_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_relay_port_run;
        return err;
    }
    virtual int before_set_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_relay_port_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_relay_port_run(argc, argv, env))) {
            int err2 = 0;
            err = set_relay_port_run(argc, argv, env);
            if ((err2 = after_set_relay_port_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...relay_host
    virtual string_t& set_relay_host(const string_t& to) {
        string_t& relay_host = this->relay_host();
        const char_t* chars = to.has_chars();
        if ((chars)) relay_host.assign(to);
        else relay_host.clear();
        return relay_host;
    }
    virtual string_t& relay_host() const {
        static string_t relay_host(VOS_APP_CONSOLE_NETWORK_SOCKETS_CONNECT_HOST);
        return relay_host;
    }

    /// ...relay_port
    virtual short& set_relay_port(short to) {
        short& relay_port = this->relay_port();
        relay_port = to;
        return relay_port;
    }
    virtual const short& get_relay_port() const {
        const short& relay_port = this->relay_port();
        return relay_port;
    }
    virtual short& relay_port() const {
        static short relay_port = VOS_APP_CONSOLE_NETWORK_SOCKETS_CONNECT_PORT;
        return relay_port;
    }

    /// ...port
    virtual const short& get_port() const {
        return this->accept_port();
    }

    /// ...relay_option...
    virtual int on_relay_host_set(int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_relay_host_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_relay_host(optarg);
            err = this->on_relay_host_set(argc, argv, env);
        } else {
            err = this->all_set_relay_host_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* relay_host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTUSE;
        optarg = VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTARG;
        return chars;
    }
    virtual int on_relay_port_set(int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_relay_port_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned relay_port = arg.to_unsigned();
            if ((0 < relay_port)) {
                this->set_relay_port(relay_port);
                err = this->on_relay_port_set(argc, argv, env);
            }
        } else {
            err = this->all_set_relay_port_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* relay_port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTUSE;
        optarg = VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTARG;
        return chars;
    }
    virtual int on_relay_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_C:
            err = this->on_relay_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_C:
            err = this->on_relay_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* relay_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_HOST_OPTVAL_C:
            chars = relay_host_option_usage(optarg, longopt);
            break;
        case VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_RELAY_PORT_OPTVAL_C:
            chars = relay_port_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* relay_options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_NETWORK_SOCKETS_RELAY_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...ep
    vos::network::sockets::endpoint& (derives::*accept_ep_)() const;
    virtual vos::network::sockets::endpoint& accept_ep() const {
        if ((this->accept_ep_)) {
            return (this->*accept_ep_)();
        }
        return this->default_accept_ep();
    }
    virtual vos::network::sockets::endpoint& default_accept_ep() const {
        return this->accept_ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& accept_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual vos::network::sockets::endpoint& accept_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...tp
    vos::network::sockets::transport& (derives::*accept_tp_)() const;
    virtual vos::network::sockets::transport& accept_tp() const {
        if ((this->accept_tp_)) {
            return (this->*accept_tp_)();
        }
        return this->default_accept_tp();
    }
    virtual vos::network::sockets::transport& default_accept_tp() const {
        return this->accept_ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& accept_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual vos::network::sockets::transport& accept_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...ep
    vos::network::sockets::endpoint& (derives::*relay_ep_)() const;
    virtual vos::network::sockets::endpoint& relay_ep() const {
        if ((this->relay_ep_)) {
            return (this->*relay_ep_)();
        }
        return this->default_relay_ep();
    }
    virtual vos::network::sockets::endpoint& default_relay_ep() const {
        return this->relay_ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& relay_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual vos::network::sockets::endpoint& relay_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

    /// ...tp
    vos::network::sockets::transport& (derives::*relay_tp_)() const;
    virtual vos::network::sockets::transport& relay_tp() const {
        if ((this->relay_tp_)) {
            return (this->*relay_tp_)();
        }
        return this->default_relay_tp();
    }
    virtual vos::network::sockets::transport& default_relay_tp() const {
        return this->relay_ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& relay_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual vos::network::sockets::transport& relay_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

#if !defined(WINSOCK_1)
#else /// !defined(WINSOCK_1)
#endif /// !defined(WINSOCK_1)

}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP
