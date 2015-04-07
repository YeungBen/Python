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

#include "sipAPIQtWidgets.h"

#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qstylefactory.sip"
#include <qstylefactory.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleFactory.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleFactory.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleFactory.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleFactory.cpp"


PyDoc_STRVAR(doc_QStyleFactory_keys, "QStyleFactory.keys() -> list-of-str");

extern "C" {static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_keys(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStringList*sipRes;

            sipRes = new QStringList(QStyleFactory::keys());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStyleFactory, sipName_keys, doc_QStyleFactory_keys);

    return NULL;
}


PyDoc_STRVAR(doc_QStyleFactory_create, "QStyleFactory.create(str) -> QStyle");

extern "C" {static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *);}
static PyObject *meth_QStyleFactory_create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QStyle*sipRes;

            sipRes = QStyleFactory::create(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStyleFactory, sipName_create, doc_QStyleFactory_create);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleFactory(void *, const sipTypeDef *);}
static void *cast_QStyleFactory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleFactory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleFactory(void *, int);}
static void release_QStyleFactory(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleFactory *>(sipCppV);
}


extern "C" {static void assign_QStyleFactory(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleFactory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleFactory *>(sipSrc);
}


extern "C" {static void *array_QStyleFactory(SIP_SSIZE_T);}
static void *array_QStyleFactory(SIP_SSIZE_T sipNrElem)
{
    return new QStyleFactory[sipNrElem];
}


extern "C" {static void *copy_QStyleFactory(const void *, SIP_SSIZE_T);}
static void *copy_QStyleFactory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleFactory(reinterpret_cast<const QStyleFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleFactory(sipSimpleWrapper *);}
static void dealloc_QStyleFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleFactory(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleFactory(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleFactory();

            return sipCpp;
        }
    }

    {
        const QStyleFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleFactory, &a0))
        {
            sipCpp = new QStyleFactory(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QStyleFactory[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QStyleFactory_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QStyleFactory_create)},
    {SIP_MLNAME_CAST(sipName_keys), meth_QStyleFactory_keys, METH_VARARGS, SIP_MLDOC_CAST(doc_QStyleFactory_keys)}
};

PyDoc_STRVAR(doc_QStyleFactory, "\1QStyleFactory()\n"
    "QStyleFactory(QStyleFactory)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleFactory,
        {0}
    },
    {
        sipNameNr_QStyleFactory,
        {0, 0, 1},
        2, methods_QStyleFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleFactory,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QStyleFactory,
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
    dealloc_QStyleFactory,
    assign_QStyleFactory,
    array_QStyleFactory,
    copy_QStyleFactory,
    release_QStyleFactory,
    cast_QStyleFactory,
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
