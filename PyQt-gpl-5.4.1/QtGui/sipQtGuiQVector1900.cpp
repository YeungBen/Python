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

#include "sipAPIQtGui.h"

#line 25 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQVector1900.cpp"



extern "C" {static void assign_QVector_1900(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<GLuint> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<GLuint> *>(sipSrc);
}


extern "C" {static void *array_QVector_1900(SIP_SSIZE_T);}
static void *array_QVector_1900(SIP_SSIZE_T sipNrElem)
{
    return new QVector<GLuint>[sipNrElem];
}


extern "C" {static void *copy_QVector_1900(const void *, SIP_SSIZE_T);}
static void *copy_QVector_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<GLuint>(reinterpret_cast<const QVector<GLuint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_1900(void *, int);}
static void release_QVector_1900(void *ptr, int)
{
    delete reinterpret_cast<QVector<GLuint> *>(ptr);
}



extern "C" {static int convertTo_QVector_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<GLuint> **sipCppPtr = reinterpret_cast<QVector<GLuint> **>(sipCppPtrV);

#line 54 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpygui_qvector.sip"
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

    QVector<unsigned> *qv = new QVector<unsigned>;

    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        PyErr_Clear();
        unsigned long val = PyLong_AsUnsignedLongMask(itm);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'int' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        qv->append(val);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = qv;

    return sipGetState(sipTransferObj);
#line 137 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQVector1900.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_1900(void *, PyObject *);}
static PyObject *convertFrom_QVector_1900(void *sipCppV, PyObject *)
{
   QVector<GLuint> *sipCpp = reinterpret_cast<QVector<GLuint> *>(sipCppV);

#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpygui_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        // Convert to a Python long to make sure it doesn't get interpreted as
        // a signed value.
        PyObject *pobj = PyLong_FromUnsignedLong(sipCpp->value(i));

        if (!pobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 169 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQVector1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_22622,
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
    assign_QVector_1900,
    array_QVector_1900,
    copy_QVector_1900,
    release_QVector_1900,
    convertTo_QVector_1900,
    convertFrom_QVector_1900
};
