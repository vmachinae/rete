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
///   Date: 3/22/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_RETE_MAIN_HPP
#define VOS_APP_CONSOLE_RETE_MAIN_HPP

#include "vos/app/console/rete/main_opt.hpp"

namespace vos {
namespace app {
namespace console {
namespace rete {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
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
    /*: request_("GET / HTTP/1.0\r\n\r\n"), 
      response_("HTTP/1.0 200 Ok\r\n\r\nOk\r\n")*/ {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    /*/// accept / connect
    using extends::accept;
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
                    
                    if ((ac.accept(cn, &ad, al))) {
                        
                        this->accept(cn, argc, argv, env);
                        cn.close();
                    }
                }
                ac.close();
            }
            ep.detach();
        }
        return err;
    }
    using extends::connect;
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
                    this->connect(cn, argc, argv, env);
                }
                cn.close();
            }
            ep.detach();
        }
        return err;
    }*/
    
    /*/// send... / recv...
    virtual int send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::sockstring_t &rq = this->request();
        int err = 0;
        err = send(rq, cn, argc, argv, env);
        return err;
    }
    virtual int send_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::sockstring_t &rs = this->response();
        int err = 0;
        err = send(rs, cn, argc, argv, env);
        return err;
    }
    virtual int recv_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::sockstring_t &rq = this->request();
        int err = 0;
        err = recv(rq, cn, argc, argv, env);
        return err;
    }
    virtual int recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::sockstring_t &rs = this->response();
        int err = 0;
        err = recv(rs, cn, argc, argv, env);
        return err;
    }

    /// recv / send
    virtual int recv(vos::network::sockets::sockstring_t &r, vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::reader reader(cn);
        vos::network::sockets::sockchar_t c = 0;
        unsigned cr = 0, lf = 0;
        ssize_t count = 0, amount = 0;
        int err = 0;

        while (0 < (amount = reader.read(&c, 1))) {
            if (0 < (amount)) {
                count += amount;
                if (c == '\r') {
                    ++cr;
                } else {
                    if (c == '\n') {
                        if (cr) {
                            ++lf;
                        }
                    } else {
                        cr = lf = 0;
                    }
                }
                this->out(&c, 1);
                if (1 < lf) {
                    break;
                }
            }
        }
        return err;
    }
    virtual int send(vos::network::sockets::sockstring_t &s, vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        vos::network::sockets::writer writer(cn);
        const vos::network::sockets::sockchar_t* chars = 0;
        size_t length = 0;
        ssize_t count = 0;
        int err = 0;
        
        if ((chars = s.has_chars(length))) {
            count = writer.write(chars, length);
        }
        return err;
    }

    virtual vos::network::sockets::sockstring_t& request() const {
        return (vos::network::sockets::sockstring_t&)request_;
    }
    virtual vos::network::sockets::sockstring_t& response() const {
        return (vos::network::sockets::sockstring_t&)response_;
    }*/

protected:
    /*vos::network::sockets::sockstring_t request_, response_;*/
}; /// class maint
typedef maint<> main;

} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_RETE_MAIN_HPP 
