/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6
 *
 * Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtTest.h"

#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtestcase.sip"
#include <qtestcase.h>
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtestkeyboard.sip"
#include <qtestkeyboard.h>
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtestmouse.sip"
#include <qtestmouse.h>
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtestsystem.sip"
#include <qtestsystem.h>
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 32 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtTest/qtesttouch.sip"
#include <qtesttouch.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtTest/sipQtTestQTestQTouchEventSequence.cpp"

#line 30 "sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 43 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtTest/sipQtTestQTestQTouchEventSequence.cpp"
#line 30 "sip/QtGui/qtouchdevice.sip"
#include <qtouchdevice.h>
#line 46 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtTest/sipQtTestQTestQTouchEventSequence.cpp"
#line 26 "sip/QtGui/qwindow.sip"
#include <qwindow.h>
#line 49 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtTest/sipQtTestQTestQTouchEventSequence.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 52 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtTest/sipQtTestQTestQTouchEventSequence.cpp"


PyDoc_STRVAR(doc_QTest_QTouchEventSequence_press, "QTest.QTouchEventSequence.press(int, QPoint, QWindow window=None) -> QTest.QTouchEventSequence\n"
    "QTest.QTouchEventSequence.press(int, QPoint, QWidget) -> QTest.QTouchEventSequence");

extern "C" {static PyObject *meth_QTest_QTouchEventSequence_press(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_press(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint* a1;
        QWindow* a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_window,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWindow, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->press(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    {
        int a0;
        const QPoint* a1;
        QWidget* a2;
        QTest::QTouchEventSequence *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BiJ9J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->press(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_press, doc_QTest_QTouchEventSequence_press);

    return NULL;
}


PyDoc_STRVAR(doc_QTest_QTouchEventSequence_move, "QTest.QTouchEventSequence.move(int, QPoint, QWindow window=None) -> QTest.QTouchEventSequence\n"
    "QTest.QTouchEventSequence.move(int, QPoint, QWidget) -> QTest.QTouchEventSequence");

extern "C" {static PyObject *meth_QTest_QTouchEventSequence_move(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_move(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint* a1;
        QWindow* a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_window,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWindow, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->move(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    {
        int a0;
        const QPoint* a1;
        QWidget* a2;
        QTest::QTouchEventSequence *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BiJ9J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->move(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_move, doc_QTest_QTouchEventSequence_move);

    return NULL;
}


PyDoc_STRVAR(doc_QTest_QTouchEventSequence_release, "QTest.QTouchEventSequence.release(int, QPoint, QWindow window=None) -> QTest.QTouchEventSequence\n"
    "QTest.QTouchEventSequence.release(int, QPoint, QWidget) -> QTest.QTouchEventSequence");

extern "C" {static PyObject *meth_QTest_QTouchEventSequence_release(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_release(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPoint* a1;
        QWindow* a2 = 0;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_window,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ9|J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWindow, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->release(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    {
        int a0;
        const QPoint* a1;
        QWidget* a2;
        QTest::QTouchEventSequence *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BiJ9J8", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0, sipType_QPoint, &a1, sipType_QWidget, &a2))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->release(a0,*a1,a2);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_release, doc_QTest_QTouchEventSequence_release);

    return NULL;
}


PyDoc_STRVAR(doc_QTest_QTouchEventSequence_stationary, "QTest.QTouchEventSequence.stationary(int) -> QTest.QTouchEventSequence");

extern "C" {static PyObject *meth_QTest_QTouchEventSequence_stationary(PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_stationary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTest::QTouchEventSequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0))
        {
            QTest::QTouchEventSequence*sipRes;

            sipRes = &sipCpp->stationary(a0);

            return sipConvertFromType(sipRes,sipType_QTest_QTouchEventSequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_stationary, doc_QTest_QTouchEventSequence_stationary);

    return NULL;
}


PyDoc_STRVAR(doc_QTest_QTouchEventSequence_commit, "QTest.QTouchEventSequence.commit(bool processEvents=True)");

extern "C" {static PyObject *meth_QTest_QTouchEventSequence_commit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTest_QTouchEventSequence_commit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 1;
        QTest::QTouchEventSequence *sipCpp;

        static const char *sipKwdList[] = {
            sipName_processEvents,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|b", &sipSelf, sipType_QTest_QTouchEventSequence, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->commit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchEventSequence, sipName_commit, doc_QTest_QTouchEventSequence_commit);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTest_QTouchEventSequence(void *, const sipTypeDef *);}
static void *cast_QTest_QTouchEventSequence(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTest_QTouchEventSequence)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTest_QTouchEventSequence(void *, int);}
static void release_QTest_QTouchEventSequence(void *sipCppV,int)
{
    delete reinterpret_cast<QTest::QTouchEventSequence *>(sipCppV);
}


extern "C" {static void dealloc_QTest_QTouchEventSequence(sipSimpleWrapper *);}
static void dealloc_QTest_QTouchEventSequence(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTest_QTouchEventSequence(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QTest_QTouchEventSequence[] = {
    {SIP_MLNAME_CAST(sipName_commit), (PyCFunction)meth_QTest_QTouchEventSequence_commit, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTest_QTouchEventSequence_commit)},
    {SIP_MLNAME_CAST(sipName_move), (PyCFunction)meth_QTest_QTouchEventSequence_move, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTest_QTouchEventSequence_move)},
    {SIP_MLNAME_CAST(sipName_press), (PyCFunction)meth_QTest_QTouchEventSequence_press, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTest_QTouchEventSequence_press)},
    {SIP_MLNAME_CAST(sipName_release), (PyCFunction)meth_QTest_QTouchEventSequence_release, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTest_QTouchEventSequence_release)},
    {SIP_MLNAME_CAST(sipName_stationary), meth_QTest_QTouchEventSequence_stationary, METH_VARARGS, SIP_MLDOC_CAST(doc_QTest_QTouchEventSequence_stationary)}
};


pyqt5ClassTypeDef sipTypeDef_QtTest_QTest_QTouchEventSequence = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTest__QTouchEventSequence,
        {0}
    },
    {
        sipNameNr_QTouchEventSequence,
        {1, 255, 0},
        5, methods_QTest_QTouchEventSequence,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTest_QTouchEventSequence,
    0,
    0,
    0,
    release_QTest_QTouchEventSequence,
    cast_QTest_QTouchEventSequence,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};