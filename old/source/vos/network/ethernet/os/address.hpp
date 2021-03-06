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
///   Date: 3/8/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_NETWORK_ETHERNET_OS_ADDRESS_HPP
#define VOS_NETWORK_ETHERNET_OS_ADDRESS_HPP

#include "vos/network/ethernet/os/os.hpp"

#if defined(BSD)
#include "vos/network/ethernet/bsd/address.hpp"
#elif defined(SYSTEMV)
#include "vos/network/ethernet/systemv/address.hpp"
#else /// defined(BSD)
#error only supported on BSD or SystemV operating systems
#endif /// defined(BSD)

namespace vos {
namespace network {
namespace ethernet {
namespace os {

typedef os::address address;

} /// namespace os
} /// namespace ethernet
} /// namespace network
} /// namespace vos

#endif /// ndef VOS_NETWORK_ETHERNET_OS_ADDRESS_HPP 
