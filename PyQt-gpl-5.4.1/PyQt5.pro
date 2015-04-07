TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS = QtCore QtGui QtNetwork QtOpenGL QtPrintSupport QtSql QtTest QtWidgets QtXml QtDBus _QOpenGLFunctions_2_0 _QOpenGLFunctions_2_1 _QOpenGLFunctions_4_1_Core Qt pylupdate pyrcc

init_py.files = /home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/__init__.py
init_py.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += init_py

uic_package.files = /home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/pyuic/uic
uic_package.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += uic_package

pyuic5.files = pyuic5
pyuic5.path = /usr/bin
INSTALLS += pyuic5
