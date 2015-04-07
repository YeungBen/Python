TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtSql
sip.files = ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqlresult.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/QtSqlmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlError.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSql.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlParamType.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlDriverCreatorBase.cpp
