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
///   Date: 9/9/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_RETE_CLIENT_MAIN_HPP
#define VOS_APP_CONSOLE_RETE_CLIENT_MAIN_HPP

#include "vos/app/console/rete/client/main_opt.hpp"

namespace vos {
namespace app {
namespace console {
namespace rete {
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
    maint(): connect_request_("GET / HTTP/1.0\r\n\r\n") {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }
    
protected:
    /// ...send_request
    virtual int send_request(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        if ((chars = connect_request_.has_chars(length))) {
            cn.send(chars, length, 0);
        }
        return err;
    }

    /// ...recv_response
    virtual int recv_response(vos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        char_t c = 0;
        if (!(err = this->recv_crlf2(connect_response_, c, cn, argc, argv, env))) {
            size_t length = 0;
            const char_t* chars = 0;
            if ((chars = connect_response_.has_chars(length))) {
                this->out(chars, length);
            }
        }
        return err;
    }

protected:
    string_t connect_request_, connect_response_;
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_RETE_CLIENT_MAIN_HPP
