TEMPLATE = lib
CONFIG += warn_on plugin
QT += printsupport
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtPrintSupport.pyd
    target.files = QtPrintSupport.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtPrintSupport.so
    target.files = QtPrintSupport.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtPrintSupport
sip.files = ../sip/QtPrintSupport/QtPrintSupportmod.sip ../sip/QtPrintSupport/qpagesetupdialog.sip ../sip/QtPrintSupport/qprintengine.sip ../sip/QtPrintSupport/qprintdialog.sip ../sip/QtPrintSupport/qabstractprintdialog.sip ../sip/QtPrintSupport/qprintpreviewwidget.sip ../sip/QtPrintSupport/qprintpreviewdialog.sip ../sip/QtPrintSupport/qprinterinfo.sip ../sip/QtPrintSupport/qpyprintsupport_qlist.sip ../sip/QtPrintSupport/qprinter.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtPrintSupport.exp
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

TARGET = QtPrintSupport
HEADERS = sipAPIQtPrintSupport.h
SOURCES = sipQtPrintSupportQPrintDialog.cpp sipQtPrintSupportQList0600QPair0100QString0100QSizeF.cpp sipQtPrintSupportQPrinter.cpp sipQtPrintSupportQList0100QPrinterInfo.cpp sipQtPrintSupportQPageSetupDialog.cpp sipQtPrintSupportQPrintPreviewDialog.cpp sipQtPrintSupportQPrinterInfo.cpp sipQtPrintSupportQAbstractPrintDialog.cpp sipQtPrintSupportQPrintPreviewWidget.cpp sipQtPrintSupportcmodule.cpp sipQtPrintSupportQPrintEngine.cpp sipQtPrintSupportQAbstractPrintDialogPrintDialogOptions.cpp sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp
