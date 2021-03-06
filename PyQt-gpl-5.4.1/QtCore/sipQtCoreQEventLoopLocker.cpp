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

#include "sipAPIQtCore.h"

#line 69 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQEventLoopLocker.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQEventLoopLocker.cpp"
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQEventLoopLocker.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QEventLoopLocker(void *, const sipTypeDef *);}
static void *cast_QEventLoopLocker(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QEventLoopLocker)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEventLoopLocker(void *, int);}
static void release_QEventLoopLocker(void *sipCppV,int)
{
    delete reinterpret_cast<QEventLoopLocker *>(sipCppV);
}


extern "C" {static void dealloc_QEventLoopLocker(sipSimpleWrapper *);}
static void dealloc_QEventLoopLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QEventLoopLocker(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QEventLoopLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEventLoopLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QEventLoopLocker *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoopLocker();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QEventLoop* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QEventLoop, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoopLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QThread* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QThread, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoopLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QEventLoopLocker, "\1QEventLoopLocker()\n"
    "QEventLoopLocker(QEventLoop)\n"
    "QEventLoopLocker(QThread)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QEventLoopLocker = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QEventLoopLocker,
        {0}
    },
    {
        sipNameNr_QEventLoopLocker,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEventLoopLocker,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QEventLoopLocker,
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
    dealloc_QEventLoopLocker,
    0,
    0,
    0,
    release_QEventLoopLocker,
    cast_QEventLoopLocker,
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
