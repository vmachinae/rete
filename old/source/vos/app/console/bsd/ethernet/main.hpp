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
///   Date: 3/6/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_BSD_ETHERNET_MAIN_HPP
#define VOS_APP_CONSOLE_BSD_ETHERNET_MAIN_HPP

#include "vos/app/console/bsd/ethernet/main_opt.hpp"
#include "vos/network/ethernet/bsd/address.hpp"

namespace vos {
namespace app {
namespace console {
namespace bsd {
namespace ethernet {

/// class maint
template 
<class TExtends = console::ethernet::maint<network::ethernet::bsd::address, main_opt>, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }
}; /// class maint
typedef maint<> main;

} /// namespace ethernet
} /// namespace bsd
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_BSD_ETHERNET_MAIN_HPP 
