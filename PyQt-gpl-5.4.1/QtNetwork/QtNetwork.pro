TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtNetwork
sip.files = ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qpynetwork_qhash.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qpynetwork_qmap.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQSslError.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQSsl.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkcmodule.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQNetworkSession.cpp
