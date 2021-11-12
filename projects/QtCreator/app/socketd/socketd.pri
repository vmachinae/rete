########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: socketd.pri
#
# Author: $author$
#   Date: 11/12/2021
#
# QtCreator .pri file for rete executable socketd
########################################################################

########################################################################
# socketd

# socketd TARGET
#
socketd_TARGET = socketd

# socketd INCLUDEPATH
#
socketd_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# socketd DEFINES
#
socketd_DEFINES += \
$${rete_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# socketd OBJECTIVE_HEADERS
#
#socketd_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/xos/app/console/socketd/main.hh \

# socketd OBJECTIVE_SOURCES
#
#socketd_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/xos/app/console/socketd/main.mm \

########################################################################
# socketd HEADERS
#
socketd_HEADERS += \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \

# socketd SOURCES
#
socketd_SOURCES += \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.cpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.cpp \

########################################################################
# socketd FRAMEWORKS
#
socketd_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# socketd LIBS
#
socketd_LIBS += \
$${rete_LIBS} \

########################################################################
# NO Qt
QT -= gui core


