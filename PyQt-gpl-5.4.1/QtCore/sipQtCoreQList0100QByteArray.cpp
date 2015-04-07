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

#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQList0100QByteArray.cpp"

#line 32 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQList0100QByteArray.cpp"


extern "C" {static void assign_QList_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QByteArray(SIP_SSIZE_T);}
static void *array_QList_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QList<QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QByteArray>(reinterpret_cast<const QList<QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QByteArray(void *, int);}
static void release_QList_0100QByteArray(void *ptr, int)
{
    delete reinterpret_cast<QList<QByteArray> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QByteArray> **sipCppPtr = reinterpret_cast<QList<QByteArray> **>(sipCppPtrV);

#line 66 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QByteArray> *ql = new QList<QByteArray>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QByteArray *t = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(itm, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QByteArray' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QByteArray, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQList0100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QByteArray(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QByteArray> *sipCpp = reinterpret_cast<QList<QByteArray> *>(sipCppV);

#line 40 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QByteArray *t = new QByteArray(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QByteArray,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQList0100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16731,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QByteArray,
    array_QList_0100QByteArray,
    copy_QList_0100QByteArray,
    release_QList_0100QByteArray,
    convertTo_QList_0100QByteArray,
    convertFrom_QList_0100QByteArray
};
