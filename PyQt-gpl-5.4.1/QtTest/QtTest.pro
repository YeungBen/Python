TEMPLATE = lib
CONFIG += warn_on plugin
QT += testlib widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtTest.pyd
    target.files = QtTest.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtTest.so
    target.files = QtTest.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtTest
sip.files = ../sip/QtTest/qtestcase.sip ../sip/QtTest/qtestsystem.sip ../sip/QtTest/qtestkeyboard.sip ../sip/QtTest/QtTestmod.sip ../sip/QtTest/qtestmouse.sip ../sip/QtTest/qsignalspy.sip ../sip/QtTest/qtesttouch.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtTest.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtTest
HEADERS = sipAPIQtTest.h
SOURCES = sipQtTestcmodule.cpp sipQtTestQSignalSpy.cpp sipQtTestQTest.cpp sipQtTestQTestQTouchEventSequence.cpp
