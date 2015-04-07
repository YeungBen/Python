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

#line 331 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

#line 27 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"


PyDoc_STRVAR(doc_QMatrix3x4_data, "QMatrix3x4.data() -> list-of-float");

extern "C" {static PyObject *meth_QMatrix3x4_data(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x4, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 409 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        sipError = qtgui_matrixDataAsList(12, sipCpp->constData(), &sipRes);
#line 53 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_data, doc_QMatrix3x4_data);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x4_copyDataTo, "QMatrix3x4.copyDataTo() -> list-of-float");

extern "C" {static PyObject *meth_QMatrix3x4_copyDataTo(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_copyDataTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x4, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 414 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[12];

        sipCpp->copyDataTo(values);
        sipError = qtgui_matrixDataAsList(12, values, &sipRes);
#line 94 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_copyDataTo, doc_QMatrix3x4_copyDataTo);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x4_isIdentity, "QMatrix3x4.isIdentity() -> bool");

extern "C" {static PyObject *meth_QMatrix3x4_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x4, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isIdentity();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_isIdentity, doc_QMatrix3x4_isIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x4_setToIdentity, "QMatrix3x4.setToIdentity()");

extern "C" {static PyObject *meth_QMatrix3x4_setToIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_setToIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x4, &sipCpp))
        {
            sipCpp->setToIdentity();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_setToIdentity, doc_QMatrix3x4_setToIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x4_fill, "QMatrix3x4.fill(float)");

extern "C" {static PyObject *meth_QMatrix3x4_fill(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMatrix3x4, &sipCpp, &a0))
        {
            sipCpp->fill(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_fill, doc_QMatrix3x4_fill);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x4_transposed, "QMatrix3x4.transposed() -> QMatrix4x3");

extern "C" {static PyObject *meth_QMatrix3x4_transposed(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x4_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x4, &sipCpp))
        {
            QMatrix4x3*sipRes;

            sipRes = new QMatrix4x3(sipCpp->transposed());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName_transposed, doc_QMatrix3x4_transposed);

    return NULL;
}


extern "C" {static PyObject *slot_QMatrix3x4___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QMatrix3x4::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMatrix3x4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x4___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QMatrix3x4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMatrix3x4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x4___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->QMatrix3x4::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x4___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->QMatrix3x4::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x4___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x4, &a0))
        {
            sipCpp->QMatrix3x4::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x4___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x4, &a0))
        {
            sipCpp->QMatrix3x4::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static int slot_QMatrix3x4___setitem__(PyObject *,PyObject *);}
static int slot_QMatrix3x4___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        float a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "P0f", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 436 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 4, &row, &column)) == sipErrorNone)
            sipCpp->operator()(row, column) = a1;
#line 469 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            if (sipError == sipErrorFail)
                return -1;

            if (sipError == sipErrorNone)
            {
            return 0;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_QMatrix3x4___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1P0", &a0))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 422 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 4, &row, &column)) == sipErrorNone)
        {
            sipRes = PyFloat_FromDouble(sipCpp->operator()(row, column));

            if (!sipRes)
                sipError = sipErrorFail;
        }
#line 518 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x4, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QMatrix3x4___repr__(PyObject *);}
static PyObject *slot_QMatrix3x4___repr__(PyObject *sipSelf)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x4));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 360 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        bool bad = false;
        int i;
        PyObject *m[12];
        PYQT_FLOAT data[12];

        // The raw data is in column-major order but we want row-major order.
        sipCpp->copyDataTo(data);

        for (i = 0; i < 12; ++i)
        {
            m[i] = PyFloat_FromDouble(data[i]);

            if (!m[i])
                bad = true;
        }

        if (!bad)
        {
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtGui.QMatrix3x4("
                    "%R, %R, %R, "
                    "%R, %R, %R, "
                    "%R, %R, %R, "
                    "%R, %R, %R)",
                    m[0], m[1], m[2],
                    m[3], m[4], m[5],
                    m[6], m[7], m[8],
                    m[9], m[10], m[11]);
#else
            sipRes = PyString_FromString("PyQt5.QtGui.QMatrix3x4(");

            for (i = 0; i < 12; ++i)
            {
                if (i != 0)
                    PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));

                PyString_ConcatAndDel(&sipRes, PyObject_Repr(m[i]));
            }

            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
#endif
        }

        for (i = 0; i < 12; ++i)
            Py_XDECREF(m[i]);
#line 598 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMatrix3x4(void *, const sipTypeDef *);}
static void *cast_QMatrix3x4(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMatrix3x4)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix3x4(void *, int);}
static void release_QMatrix3x4(void *sipCppV,int)
{
    delete reinterpret_cast<QMatrix3x4 *>(sipCppV);
}


extern "C" {static PyObject *pickle_QMatrix3x4(void *);}
static PyObject *pickle_QMatrix3x4(void *sipCppV)
{
    QMatrix3x4 *sipCpp = reinterpret_cast<QMatrix3x4 *>(sipCppV);
    PyObject *sipRes;

#line 335 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT data[12];

        // We want the data in row-major order.
        sipCpp->copyDataTo(data);

        sipRes = Py_BuildValue((char *)"dddddddddddd",
                (double)data[0], (double)data[1], (double)data[2],
                (double)data[3], (double)data[4], (double)data[5],
                (double)data[6], (double)data[7], (double)data[8],
                (double)data[9], (double)data[10], (double)data[11]);
#line 644 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

    return sipRes;
}


extern "C" {static void assign_QMatrix3x4(void *, SIP_SSIZE_T, const void *);}
static void assign_QMatrix3x4(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMatrix3x4 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMatrix3x4 *>(sipSrc);
}


extern "C" {static void *array_QMatrix3x4(SIP_SSIZE_T);}
static void *array_QMatrix3x4(SIP_SSIZE_T sipNrElem)
{
    return new QMatrix3x4[sipNrElem];
}


extern "C" {static void *copy_QMatrix3x4(const void *, SIP_SSIZE_T);}
static void *copy_QMatrix3x4(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMatrix3x4(reinterpret_cast<const QMatrix3x4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix3x4(sipSimpleWrapper *);}
static void dealloc_QMatrix3x4(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMatrix3x4(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMatrix3x4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMatrix3x4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMatrix3x4 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMatrix3x4();

            return sipCpp;
        }
    }

    {
        const QMatrix3x4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMatrix3x4, &a0))
        {
            sipCpp = new QMatrix3x4(*a0);

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "P0", &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 352 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[12];

        if ((sipError = qtgui_matrixDataFromSequence(a0, 12, values)) == sipErrorNone)
            sipCpp = new QMatrix3x4(values);
#line 718 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQMatrix3x4.cpp"

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix3x4[] = {
    {(void *)slot_QMatrix3x4___ne__, ne_slot},
    {(void *)slot_QMatrix3x4___eq__, eq_slot},
    {(void *)slot_QMatrix3x4___idiv__, idiv_slot},
    {(void *)slot_QMatrix3x4___imul__, imul_slot},
    {(void *)slot_QMatrix3x4___isub__, isub_slot},
    {(void *)slot_QMatrix3x4___iadd__, iadd_slot},
    {(void *)slot_QMatrix3x4___setitem__, setitem_slot},
    {(void *)slot_QMatrix3x4___getitem__, getitem_slot},
    {(void *)slot_QMatrix3x4___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix3x4[] = {
    {SIP_MLNAME_CAST(sipName_copyDataTo), meth_QMatrix3x4_copyDataTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_copyDataTo)},
    {SIP_MLNAME_CAST(sipName_data), meth_QMatrix3x4_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_data)},
    {SIP_MLNAME_CAST(sipName_fill), meth_QMatrix3x4_fill, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_fill)},
    {SIP_MLNAME_CAST(sipName_isIdentity), meth_QMatrix3x4_isIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_isIdentity)},
    {SIP_MLNAME_CAST(sipName_setToIdentity), meth_QMatrix3x4_setToIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_setToIdentity)},
    {SIP_MLNAME_CAST(sipName_transposed), meth_QMatrix3x4_transposed, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x4_transposed)}
};

PyDoc_STRVAR(doc_QMatrix3x4, "\1QMatrix3x4()\n"
    "QMatrix3x4(QMatrix3x4)\n"
    "QMatrix3x4(sequence-of-float)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QMatrix3x4 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMatrix3x4,
        {0}
    },
    {
        sipNameNr_QMatrix3x4,
        {0, 0, 1},
        6, methods_QMatrix3x4,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMatrix3x4,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMatrix3x4,
    init_type_QMatrix3x4,
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
    dealloc_QMatrix3x4,
    assign_QMatrix3x4,
    array_QMatrix3x4,
    copy_QMatrix3x4,
    release_QMatrix3x4,
    cast_QMatrix3x4,
    0,
    0,
    0,
    pickle_QMatrix3x4,
    0,
    0
},
    0,
    0,
    0,
    0
};
