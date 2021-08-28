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
///   File: identifier.hpp
///
/// Author: $author$
///   Date: 5/3/2020
///////////////////////////////////////////////////////////////////////
#ifndef VOS_NETWORK_UNIVERSAL_UNIQUE_OS_IDENTIFIER_HPP
#define VOS_NETWORK_UNIVERSAL_UNIQUE_OS_IDENTIFIER_HPP

#include "vos/network/universal/unique/identifier.hpp"

#if defined(WINDOWS)
#include "vos/network/universal/unique/microsoft/windows/identifier.hpp"
#else /// defined(WINDOWS)
#include "vos/network/universal/unique/posix/identifier.hpp"
#endif /// defined(WINDOWS)

namespace vos {
namespace network {
namespace universal {
namespace unique {
namespace os {

#if defined(WINDOWS)
typedef microsoft::windows::identifier identifier;
#else /// defined(WINDOWS)
typedef posix::identifier identifier;
#endif /// defined(WINDOWS)

} /// namespace os
} /// namespace unique
} /// namespace universal
} /// namespace network
} /// namespace vos

#endif /// ndef VOS_NETWORK_UNIVERSAL_UNIQUE_OS_IDENTIFIER_HPP 
