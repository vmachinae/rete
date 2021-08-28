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
///   Date: 8/13/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_HPP
#define VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_HPP

#include "vos/app/console/network/client/main_opt.hpp"
/*
#include "vos/network/sockets/ip/v4/endpoint.hpp"
#include "vos/network/sockets/ip/v4/tcp/transport.hpp"
#include "vos/network/sockets/ip/v4/udp/transport.hpp"
#include "vos/network/sockets/ip/v6/endpoint.hpp"
#include "vos/network/sockets/ip/v6/tcp/transport.hpp"
#include "vos/network/sockets/ip/v6/udp/transport.hpp"
#include "vos/network/sockets/os/interface.hpp"
#include "vos/network/sockets/reader.hpp"
#include "vos/network/sockets/writer.hpp"
*/

namespace vos {
namespace app {
namespace console {
namespace network {
namespace client {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    /// ...run
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->all_connect(argc, argv, env);
        return err;
    }
    /*virtual int info_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->all_info(argc, argv, env);
        return err;
    }*/

    /// ...connect / ...info
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
    /*virtual int info(int argc, char_t** argv, char_t**env) {
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
    }*/

    /// ...connect
    virtual int connect(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = all_send_request(cn, argc, argv, env))) {
            err = all_recv_response(cn, argc, argv, env);
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
    }

    /// ...send_request
    virtual int send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int before_send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_send_request(cn, argc, argv, env))) {
            int err2 = 0;
            err = send_request(cn, argc, argv, env);
            if ((err2 = after_send_request(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...recv_response
    virtual int recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int before_recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_recv_response(cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_response(cn, argc, argv, env);
            if ((err2 = after_recv_response(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /*/// ...iface
    virtual vos::network::sockets::interface& connect_iface() const {
        return (vos::network::sockets::interface&)connect_iface_;
    }

    /// ...addr /  ...addrlen
    virtual vos::network::sockets::sockaddr_t& connect_addr() const {
        return (vos::network::sockets::sockaddr_t&)connect_addr_;
    }
    virtual vos::network::sockets::socklen_t& connect_addrlen() const {
        return (vos::network::sockets::socklen_t&)connect_addrlen_;
    }*/

    /// ...ep
    vos::network::sockets::endpoint& (derives::*connect_ep_)() const;
    virtual vos::network::sockets::endpoint& connect_ep() const {
        if ((this->connect_ep_)) {
            return (this->*connect_ep_)();
        }
        return this->default_connect_ep();
    }
    virtual vos::network::sockets::endpoint& default_connect_ep() const {
        return this->connect_ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& connect_ip_v4_ep() const {
        return /*(vos::network::sockets::endpoint&)ip_v4_ep_*/this->ip_v4_ep();
    }
    virtual vos::network::sockets::endpoint& connect_ip_v6_ep() const {
        return /*(vos::network::sockets::endpoint&)ip_v6_ep_*/this->ip_v6_ep();
    }

    /// ...tp
    vos::network::sockets::transport& (derives::*connect_tp_)() const;
    virtual vos::network::sockets::transport& connect_tp() const {
        if ((this->connect_tp_)) {
            return (this->*connect_tp_)();
        }
        return this->default_connect_tp();
    }
    virtual vos::network::sockets::transport& default_connect_tp() const {
        return this->connect_ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& connect_ip_v4_tcp_tp() const {
        return /*(vos::network::sockets::transport&)ip_v4_tcp_tp_*/this->ip_v4_tcp_tp();
    }
    virtual vos::network::sockets::transport& connect_ip_v6_tcp_tp() const {
        return /*(vos::network::sockets::transport&)ip_v6_tcp_tp_*/this->ip_v6_tcp_tp();
    }

protected:
    /*vos::network::sockets::sockaddr_t connect_addr_;
    vos::network::sockets::socklen_t connect_addrlen_;

    vos::network::sockets::ip::v4::endpoint ip_v4_ep_;
    vos::network::sockets::ip::v4::tcp::transport ip_v4_tcp_tp_;
    vos::network::sockets::ip::v4::udp::transport ip_v4_udp_tp_;

    vos::network::sockets::ip::v6::endpoint ip_v6_ep_;
    vos::network::sockets::ip::v6::tcp::transport ip_v6_tcp_tp_;
    vos::network::sockets::ip::v6::udp::transport ip_v6_udp_tp_;
    
    vos::network::sockets::os::interface connect_iface_;*/
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_NETWORK_CLIENT_MAIN_HPP
