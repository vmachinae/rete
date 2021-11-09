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
///   Date: 3/3/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_KASA_MAIN_OPT_HPP
#define VOS_APP_CONSOLE_KASA_MAIN_OPT_HPP

#include "vos/app/console/network/sockets/main.hpp"
#include "vos/app/console/kasa/client/main.hpp"
#include "vos/app/console/kasa/server/main.hpp"

#define VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \

#define VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \

#define VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_CHARS \
    VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_CHARS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_CHARS \

#define VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_OPTIONS \
    VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_OPTIONS_EXTEND \
    VOS_NETWORK_SERVER_MAIN_OPTIONS_OPTIONS \

namespace vos {
namespace app {
namespace console {
namespace kasa {

/// class main_optt
template 
<class TExtends = kasa::client::maint<kasa::client::main_optt
 <kasa::server::maint<kasa::server::main_optt
   <kasa::base::maint<kasa::base::main_optt<network::sockets::maint<> > > > > > >, 
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
    main_optt() {
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

    /// ...option...
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VOS_APP_CONSOLE_KASA_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace kasa
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_KASA_MAIN_OPT_HPP
