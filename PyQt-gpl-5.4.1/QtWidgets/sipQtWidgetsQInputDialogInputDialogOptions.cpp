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

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qinputdialog.sip"
#include <qinputdialog.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qinputdialog.sip"
#include <qinputdialog.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"


extern "C" {static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *);}
static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != 0);
#line 51 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != a0->operator QInputDialog::InputDialogOptions::Int());
#line 81 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QInputDialog_InputDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() == a0->operator QInputDialog::InputDialogOptions::Int());
#line 117 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QInputDialog_InputDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QInputDialog::InputDialogOptions*sipRes;

            sipRes = new QInputDialog::InputDialogOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes;

            sipRes = new QInputDialog::InputDialogOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        QInputDialog::InputDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, sipType_QInputDialog_InputDialogOptions, &a1, &a1State))
        {
            QInputDialog::InputDialogOptions*sipRes;

            sipRes = new QInputDialog::InputDialogOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);
            sipReleaseType(a1,sipType_QInputDialog_InputDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QInputDialog::InputDialogOptions(*a0 ^ a1);
#line 220 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        QInputDialog::InputDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, sipType_QInputDialog_InputDialogOptions, &a1, &a1State))
        {
            QInputDialog::InputDialogOptions*sipRes;

            sipRes = new QInputDialog::InputDialogOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);
            sipReleaseType(a1,sipType_QInputDialog_InputDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QInputDialog::InputDialogOptions(*a0 | a1);
#line 270 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            sipCpp->QInputDialog::InputDialogOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            sipCpp->QInputDialog::InputDialogOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QInputDialog::InputDialogOptions::operator&=(a0);

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


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QInputDialog_InputDialogOptions(void *, const sipTypeDef *);}
static void *cast_QInputDialog_InputDialogOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QInputDialog_InputDialogOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputDialog_InputDialogOptions(void *, int);}
static void release_QInputDialog_InputDialogOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QInputDialog::InputDialogOptions *>(sipCppV);
}


extern "C" {static void assign_QInputDialog_InputDialogOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QInputDialog_InputDialogOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QInputDialog::InputDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QInputDialog::InputDialogOptions *>(sipSrc);
}


extern "C" {static void *array_QInputDialog_InputDialogOptions(SIP_SSIZE_T);}
static void *array_QInputDialog_InputDialogOptions(SIP_SSIZE_T sipNrElem)
{
    return new QInputDialog::InputDialogOptions[sipNrElem];
}


extern "C" {static void *copy_QInputDialog_InputDialogOptions(const void *, SIP_SSIZE_T);}
static void *copy_QInputDialog_InputDialogOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QInputDialog::InputDialogOptions(reinterpret_cast<const QInputDialog::InputDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *);}
static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QInputDialog_InputDialogOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QInputDialog::InputDialogOptions *sipCpp = 0;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            sipCpp = new QInputDialog::InputDialogOptions(*a0);
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QInputDialog::InputDialogOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QInputDialog::InputDialogOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QInputDialog_InputDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QInputDialog_InputDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QInputDialog::InputDialogOptions **sipCppPtr = reinterpret_cast<QInputDialog::InputDialogOptions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QInputDialog::InputDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)))
{
    *sipCppPtr = new QInputDialog::InputDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQInputDialogInputDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QInputDialog_InputDialogOptions[] = {
    {(void *)slot_QInputDialog_InputDialogOptions___bool__, bool_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ne__, ne_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___eq__, eq_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___invert__, invert_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___and__, and_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___xor__, xor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___or__, or_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___int__, int_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ior__, ior_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QInputDialog_InputDialogOptions, "\1QInputDialog.InputDialogOptions(QInputDialog.InputDialogOptions)\n"
    "QInputDialog.InputDialogOptions(int)\n"
    "QInputDialog.InputDialogOptions()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QInputDialog_InputDialogOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QInputDialog__InputDialogOptions,
        {0}
    },
    {
        sipNameNr_InputDialogOptions,
        {173, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QInputDialog_InputDialogOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QInputDialog_InputDialogOptions,
    init_type_QInputDialog_InputDialogOptions,
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
    dealloc_QInputDialog_InputDialogOptions,
    assign_QInputDialog_InputDialogOptions,
    array_QInputDialog_InputDialogOptions,
    copy_QInputDialog_InputDialogOptions,
    release_QInputDialog_InputDialogOptions,
    cast_QInputDialog_InputDialogOptions,
    convertTo_QInputDialog_InputDialogOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
