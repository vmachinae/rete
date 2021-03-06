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
///   Date: 5/4/2020, 8/24/2021
///////////////////////////////////////////////////////////////////////
#ifndef VOS_APP_CONSOLE_UUID_MAIN_HPP
#define VOS_APP_CONSOLE_UUID_MAIN_HPP

#include "vos/app/console/uuid/main_opt.hpp"
#include "vos/network/universal/unique/os/identifier.hpp"

#if !defined(DEBUG_ERRLLN)
#if defined(DEBUG_BUILD)
#define DEBUG_ERRLLN(__message__,...) this->errlln(__message__, ##__VA_ARGS__)
#else /// defined(DEBUG_BUILD)
#define DEBUG_ERRLLN(__message__,...)
#endif /// defined(DEBUG_BUILD)
#endif /// !defined(DEBUG_ERRLLN)

namespace vos {
namespace app {
namespace console {
namespace uuid {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef network::ethernet::os::address ethernet_t;
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
    maint(const maint& copy): extends(copy) {
    }
public:

protected:
    /// default_run
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = 0, optind = 0, &index = this->index();
        network::universal::unique::identifier &uuid = this->uuid();

        if (argc > (optind = ::optind)) {
            const char_t* arg = 0;
            if ((argv) && (arg = argv[optind]) && (arg[0])) {
                index = ::atoi(arg);
            }
        }
        LOGGER_IS_LOGGED_DEBUG("uuid.generate(index = " << signed_to_string(index) << ")...");
        if ((uuid.generate(index))) {
            LOGGER_IS_LOGGED_DEBUG("...uuid.generate(index = " << signed_to_string(index) << ")");
            this->outln(uuid.string().chars());
        } else {
            LOGGER_IS_LOGGED_ERROR("...failed on uuid.generate(index = " << signed_to_string(index) << ")");
        }
        return err;
    }
    
    /// uuid / index
    virtual network::universal::unique::identifier &uuid() const {
        static network::universal::unique::os::identifier uuid;
        return uuid;
    }
    virtual int& index() const {
        static int index = 0;
        return index;
    }
}; /// class maint
typedef maint<> main;

} /// namespace uuid
} /// namespace console
} /// namespace app
} /// namespace vos

#endif /// ndef VOS_APP_CONSOLE_UUID_MAIN_HPP 
