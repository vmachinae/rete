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
///   Date: 3/22/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_RETE_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_RETE_MAIN_OPT_HPP

/*#include "vos/app/console/network/main.hpp"*/
/*#include "vos/app/console/network/client/main.hpp"
#include "vos/app/console/network/server/main.hpp"*/
#include "vos/app/console/rete/client/main.hpp"
#include "vos/app/console/rete/server/main.hpp"

#define VOS_APP_CONSOLE_RETE_MAIN_OPTIONS_CHARS \
    /*VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_MAIN_OPTIONS_CHARS */\
    /*VOS_APP_CONSOLE_NETWORK_MAIN_OPTIONS_CHARS */\
    VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_RETE_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_RETE_MAIN_OPTIONS_OPTIONS \
    /*VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_MAIN_OPTIONS_OPTIONS */\
    /*VOS_APP_CONSOLE_NETWORK_MAIN_OPTIONS_OPTIONS */\
    VOS_APP_CONSOLE_RETE_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_RETE_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_BASE_MAIN_OPTIONS_OPTIONS \

#define VOS_APP_CONSOLE_RETE_MAIN_ARUMENTS_CHARS 0
#define VOS_APP_CONSOLE_RETE_MAIN_ARUMENTS_ARGS 0

namespace vos {
namespace app {
namespace console {
namespace rete {

/// class main_optt
template 
<class TExtends = /*network::server::maint
 <network::server::main_optt<network::client::main> >*/
 /*network::main*/rete::server::maint<rete::server::main_optt
 <network::server::maint<network::server::main_optt<rete::client::main> > > >, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    /*typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };*/

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }
    
protected:
    /// ...options...
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_RETE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_RETE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = VOS_APP_CONSOLE_RETE_MAIN_ARUMENTS_ARGS;
        return VOS_APP_CONSOLE_RETE_MAIN_ARUMENTS_CHARS;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_RETE_MAIN_OPT_HPP 
