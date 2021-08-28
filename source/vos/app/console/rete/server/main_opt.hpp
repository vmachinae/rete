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
///   Date: 9/9/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPT_HPP

#include "vos/app/console/network/server/main.hpp"

#define VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

namespace vos {
namespace app {
namespace console {
namespace rete {
namespace server {

/// class main_optt
template <class TExtends = network::server::main, class TImplements = typename TExtends::implements>
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
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPT_HPP
