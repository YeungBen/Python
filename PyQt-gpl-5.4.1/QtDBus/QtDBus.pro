TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtDBus
sip.files = ../sip/QtDBus/qpydbuspendingreply.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qpydbusreply.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtDBus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbusreply.h
SOURCES = sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusSignature.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusAbstractAdaptor.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbusreply.cpp ../qpy/QtDBus/qpydbus_post_init.cpp
