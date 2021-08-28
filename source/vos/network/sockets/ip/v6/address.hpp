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
///   File: address.hpp
///
/// Author: $author$
///   Date: 3/20/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_NETWORK_SOCKETS_IP_V6_ADDRESS_HPP
#define VOS_NETWORK_SOCKETS_IP_V6_ADDRESS_HPP

#include "vos/network/sockets/ip/address.hpp"

namespace vos {
namespace network {
namespace sockets {
namespace ip {
namespace v6 {

/// class addresst
template <class TImplements = ip::address>
class exported addresst: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef addresst derives;

    typedef typename implements::family_t family_t;
    enum { family_unspec = implements::family_unspec };
    
    typedef typename implements::version_t version_t;
    enum { version_unspec = implements::version_unspec };

    /// family / version
    virtual family_t family() const {
        return AF_INET6;
    }
    virtual version_t version() const {
        return 6;
    }
}; /// class addresst
typedef addresst<> address;

namespace extended {
/// class addresst
template 
<class TExtends = sockets::ip::extended::address, class TImplements = sockets::ip::v6::address>

class exported addresst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef addresst derives;

    typedef typename implements::family_t family_t;
    enum { family_unspec = implements::family_unspec };
    
    typedef typename implements::version_t version_t;
    enum { version_unspec = implements::version_unspec };

    /// constructor / destructor
    addresst(const addresst& copy): extends(copy) {
    }
    addresst() {
    }
    virtual ~addresst() {
    }
}; /// class addresst
typedef addresst<> address;
} /// namespace extended

} /// namespace v6
} /// namespace ip
} /// namespace sockets
} /// namespace network
} /// namespace vos

#endif /// ndef VOS_NETWORK_SOCKETS_IP_V6_ADDRESS_HPP 
