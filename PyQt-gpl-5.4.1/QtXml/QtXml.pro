TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtXml
sip.files = ../sip/QtXml/qdom.sip ../sip/QtXml/qxml.sip ../sip/QtXml/QtXmlmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlErrorHandler.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomText.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQXmlReader.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomNotation.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQDomDocument.cpp sipQtXmlQDomAttr.cpp sipQtXmlQDomNode.cpp sipQtXmlcmodule.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQDomComment.cpp sipQtXmlQDomElement.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQDomEntity.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQXmlDeclHandler.cpp
