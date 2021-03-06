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
///   File: main.hpp
///
/// Author: $author$
///   Date: 3/25/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_MAIN_HPP
#define VOS_APP_CONSOLE_NETWORK_MAIN_HPP

#include "vos/app/console/network/main_opt.hpp"
/*#include "vos/network/sockets/ip/v4/endpoint.hpp"
#include "vos/network/sockets/ip/v4/tcp/transport.hpp"
#include "vos/network/sockets/ip/v4/udp/transport.hpp"
#include "vos/network/sockets/ip/v6/endpoint.hpp"
#include "vos/network/sockets/ip/v6/tcp/transport.hpp"
#include "vos/network/sockets/ip/v6/udp/transport.hpp"
#include "vos/network/sockets/os/interface.hpp"
#include "vos/network/sockets/reader.hpp"
#include "vos/network/sockets/writer.hpp"*/

namespace vos {
namespace app {
namespace console {
namespace network {

/// class maint
template 
<class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    /*typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };*/

    /// constructor / destructor
    maint()
    /*: accept_ep_(0), accept_host_("localhost"), accept_port_(8080), 
      connect_ep_(0), connect_host_("localhost"), connect_port_(80)*/ {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    /*/// ...run
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
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->all_connect(argc, argv, env);
        return err;
    }
    virtual int info_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->all_info(argc, argv, env);
        return err;
    }

    /// ...accept / ...connect
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
    virtual int connect(int argc, char_t** argv, char_t**env) {
        const vos::network::sockets::sockstring_t& host = this->connect_host();
        const vos::network::sockets::sockport_t& port = this->connect_port();
        vos::network::sockets::endpoint& ep = this->connect_ep();
        vos::network::sockets::transport& tp = this->connect_tp();
        vos::network::sockets::interface &cn = this->connect_iface();
        int err = 0;

        if ((ep.attach(host, port))) {

            if ((cn.open(tp))) {
                
                if ((cn.connect(ep))) {
                    
                    this->all_connect(cn, argc, argv, env);
                }
                cn.close();
            }
            ep.detach();
        }
        return err;
    }
    virtual int before_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect(argc, argv, env))) {
            int err2 = 0;
            err = connect(argc, argv, env);
            if ((err2 = after_connect(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int info(int argc, char_t** argv, char_t**env) {
        const vos::network::sockets::sockstring_t& host = this->connect_host();
        const vos::network::sockets::sockport_t& port = this->connect_port();
        vos::network::sockets::endpoint& ep = this->connect_ep();
        int err = 0;

        if ((ep.attach(host, port))) {
            char host[1024];

            if ((ep.host_name(host, sizeof(host)))) {
                this->outlln("host = \"", host, "\"", null);
            }
            ep.detach();
        }
        return err;
    }
    virtual int before_info(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_info(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_info(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_info(argc, argv, env))) {
            int err2 = 0;
            err = info(argc, argv, env);
            if ((err2 = after_info(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...accept / ...connect
    virtual int accept(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = recv_request(cn, argc, argv, env))) {
            err = send_response(cn, argc, argv, env);
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
    virtual int connect(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = send_request(cn, argc, argv, env))) {
            err = recv_response(cn, argc, argv, env);
        }
        return err;
    }
    virtual int before_connect(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect(cn, argc, argv, env))) {
            int err2 = 0;
            err = connect(cn, argc, argv, env);
            if ((err2 = after_connect(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }*/

    /// send... / recv...
    virtual int send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int send_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int recv_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }

    /*/// ...iface
    virtual vos::network::sockets::interface& accept_iface() const {
        return (vos::network::sockets::interface&)accept_iface_;
    }
    virtual vos::network::sockets::interface& connect_iface() const {
        return (vos::network::sockets::interface&)connect_iface_;
    }

    /// ...ep
    vos::network::sockets::endpoint& (derives::*accept_ep_)() const;
    virtual vos::network::sockets::endpoint& accept_ep() const {
        if ((this->accept_ep_)) {
            return (this->*accept_ep_)();
        }
        return default_accept_ep();
    }
    virtual vos::network::sockets::endpoint& default_accept_ep() const {
        return accept_ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& accept_ip_v4_ep() const {
        return (vos::network::sockets::endpoint&)ip_v4_ep_;
    }
    virtual vos::network::sockets::endpoint& accept_ip_v6_ep() const {
        return (vos::network::sockets::endpoint&)ip_v6_ep_;
    }
    vos::network::sockets::endpoint& (derives::*connect_ep_)() const;
    virtual vos::network::sockets::endpoint& connect_ep() const {
        if ((this->connect_ep_)) {
            return (this->*connect_ep_)();
        }
        return default_connect_ep();
    }
    virtual vos::network::sockets::endpoint& default_connect_ep() const {
        return connect_ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& connect_ip_v4_ep() const {
        return (vos::network::sockets::endpoint&)ip_v4_ep_;
    }
    virtual vos::network::sockets::endpoint& connect_ip_v6_ep() const {
        return (vos::network::sockets::endpoint&)ip_v6_ep_;
    }

    /// ...tp
    vos::network::sockets::transport& (derives::*accept_tp_)() const;
    virtual vos::network::sockets::transport& accept_tp() const {
        if ((this->accept_tp_)) {
            return (this->*accept_tp_)();
        }
        return default_accept_tp();
    }
    virtual vos::network::sockets::transport& default_accept_tp() const {
        return accept_ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& accept_ip_v4_tcp_tp() const {
        return (vos::network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual vos::network::sockets::transport& accept_ip_v6_tcp_tp() const {
        return (vos::network::sockets::transport&)ip_v6_tcp_tp_;
    }
    vos::network::sockets::transport& (derives::*connect_tp_)() const;
    virtual vos::network::sockets::transport& connect_tp() const {
        if ((this->connect_tp_)) {
            return (this->*connect_tp_)();
        }
        return default_connect_tp();
    }
    virtual vos::network::sockets::transport& default_connect_tp() const {
        return connect_ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& connect_ip_v4_tcp_tp() const {
        return (vos::network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual vos::network::sockets::transport& connect_ip_v6_tcp_tp() const {
        return (vos::network::sockets::transport&)ip_v6_tcp_tp_;
    }

    /// ...host / ...port
    virtual const vos::network::sockets::sockstring_t& accept_host() const {
        return accept_host_;
    }
    virtual const vos::network::sockets::sockport_t& accept_port() const {
        return accept_port_;
    }
    virtual const vos::network::sockets::sockstring_t& connect_host() const {
        return connect_host_;
    }
    virtual const vos::network::sockets::sockport_t& connect_port() const {
        return connect_port_;
    }
    
    /// ...addr /  ...addrlen
    virtual vos::network::sockets::sockaddr_t& connect_addr() const {
        return (vos::network::sockets::sockaddr_t&)connect_addr_;
    }
    virtual vos::network::sockets::socklen_t& connect_addrlen() const {
        return (vos::network::sockets::socklen_t&)connect_addrlen_;
    }

protected:
    typedef typename extends::out_writer_t out_writer_t;

protected:
    vos::network::sockets::sockstring_t accept_host_, connect_host_;
    vos::network::sockets::sockport_t accept_port_, connect_port_;
    vos::network::sockets::sockaddr_t connect_addr_;
    vos::network::sockets::socklen_t connect_addrlen_;

    vos::network::sockets::ip::v4::endpoint ip_v4_ep_;
    vos::network::sockets::ip::v4::tcp::transport ip_v4_tcp_tp_;
    vos::network::sockets::ip::v4::udp::transport ip_v4_udp_tp_;

    vos::network::sockets::ip::v6::endpoint ip_v6_ep_;
    vos::network::sockets::ip::v6::tcp::transport ip_v6_tcp_tp_;
    vos::network::sockets::ip::v6::udp::transport ip_v6_udp_tp_;
    
    vos::network::sockets::os::interface accept_iface_, connect_iface_;*/
}; /// class maint
typedef maint<> main;

} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_NETWORK_MAIN_HPP 
