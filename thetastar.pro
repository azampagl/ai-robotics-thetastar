#
# Qt project file for build configurations
#
# @package    Compress
# @author     azampagl
# @license    MIT
# @copyright  (c) 2013 - Present - Aaron Zampaglione <azampagl@azampagl.com>
#

#
# Global defines.
#

DEFINES += THETASTAR_LIBRARY

#
# Qt settings.
#

QT       -= gui

#
# Set the output file name and type.
#

TARGET = thetastar
TEMPLATE = lib

#
# Set the include directory.
#

INCLUDEPATH += "./"

#
# Set headers and cpp files.
#

HEADERS += \
    include/coordinate.h \
    include/global.h \
    include/map.h \
    include/planner.h \
    include/vertex.h

SOURCES += \
   lib/map.cpp \
   lib/planner.cpp \
   lib/vertex.cpp

#
# Set the build path.
#

RCC_DIR = "$$PWD/bin/tmp/rcc"
UI_DIR = "$$PWD/bin/tmp/ui"
MOC_DIR = "$$PWD/bin/tmp/moc"
OBJECTS_DIR = "$$PWD/bin/tmp/obj"

CONFIG(debug, debug|release) {
   DESTDIR = "$$PWD/bin/debug"
}
CONFIG(release, debug|release) {
   DEFINES += QT_NO_DEBUG_OUTPUT
   DESTDIR = "$$PWD/bin/release"
}

#
# Determine target paths.
#

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
