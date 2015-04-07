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

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qdialogbuttonbox.sip"
#include <qdialogbuttonbox.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qdialogbuttonbox.sip"
#include <qdialogbuttonbox.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"


extern "C" {static int slot_QDialogButtonBox_StandardButtons___bool__(PyObject *);}
static int slot_QDialogButtonBox_StandardButtons___bool__(PyObject *sipSelf)
{
    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDialogButtonBox::StandardButtons::Int() != 0);
#line 51 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDialogButtonBox::StandardButtons::Int() != a0->operator QDialogButtonBox::StandardButtons::Int());
#line 81 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"
            sipReleaseType(const_cast<QDialogButtonBox::StandardButtons *>(a0),sipType_QDialogButtonBox_StandardButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QDialogButtonBox_StandardButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDialogButtonBox::StandardButtons::Int() == a0->operator QDialogButtonBox::StandardButtons::Int());
#line 117 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"
            sipReleaseType(const_cast<QDialogButtonBox::StandardButtons *>(a0),sipType_QDialogButtonBox_StandardButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QDialogButtonBox_StandardButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___invert__(PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___invert__(PyObject *sipSelf)
{
    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;


    {
        {
            QDialogButtonBox::StandardButtons*sipRes;

            sipRes = new QDialogButtonBox::StandardButtons(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___and__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State, &a1))
        {
            QDialogButtonBox::StandardButtons*sipRes;

            sipRes = new QDialogButtonBox::StandardButtons((*a0 & a1));
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;
        QDialogButtonBox::StandardButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State, sipType_QDialogButtonBox_StandardButtons, &a1, &a1State))
        {
            QDialogButtonBox::StandardButtons*sipRes;

            sipRes = new QDialogButtonBox::StandardButtons((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);
            sipReleaseType(a1,sipType_QDialogButtonBox_StandardButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State, &a1))
        {
            QDialogButtonBox::StandardButtons*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QDialogButtonBox::StandardButtons(*a0 ^ a1);
#line 220 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___or__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;
        QDialogButtonBox::StandardButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State, sipType_QDialogButtonBox_StandardButtons, &a1, &a1State))
        {
            QDialogButtonBox::StandardButtons*sipRes;

            sipRes = new QDialogButtonBox::StandardButtons((*a0 | *a1));
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);
            sipReleaseType(a1,sipType_QDialogButtonBox_StandardButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State, &a1))
        {
            QDialogButtonBox::StandardButtons*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QDialogButtonBox::StandardButtons(*a0 | a1);
#line 270 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDialogButtonBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___int__(PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___int__(PyObject *sipSelf)
{
    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

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


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDialogButtonBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State))
        {
            sipCpp->QDialogButtonBox::StandardButtons::operator^=(*a0);
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);

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


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDialogButtonBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State))
        {
            sipCpp->QDialogButtonBox::StandardButtons::operator|=(*a0);
            sipReleaseType(a0,sipType_QDialogButtonBox_StandardButtons,a0State);

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


extern "C" {static PyObject *slot_QDialogButtonBox_StandardButtons___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDialogButtonBox_StandardButtons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDialogButtonBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDialogButtonBox::StandardButtons *sipCpp = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDialogButtonBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDialogButtonBox::StandardButtons::operator&=(a0);

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
extern "C" {static void *cast_QDialogButtonBox_StandardButtons(void *, const sipTypeDef *);}
static void *cast_QDialogButtonBox_StandardButtons(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDialogButtonBox_StandardButtons)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDialogButtonBox_StandardButtons(void *, int);}
static void release_QDialogButtonBox_StandardButtons(void *sipCppV,int)
{
    delete reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipCppV);
}


extern "C" {static void assign_QDialogButtonBox_StandardButtons(void *, SIP_SSIZE_T, const void *);}
static void assign_QDialogButtonBox_StandardButtons(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDialogButtonBox::StandardButtons *>(sipSrc);
}


extern "C" {static void *array_QDialogButtonBox_StandardButtons(SIP_SSIZE_T);}
static void *array_QDialogButtonBox_StandardButtons(SIP_SSIZE_T sipNrElem)
{
    return new QDialogButtonBox::StandardButtons[sipNrElem];
}


extern "C" {static void *copy_QDialogButtonBox_StandardButtons(const void *, SIP_SSIZE_T);}
static void *copy_QDialogButtonBox_StandardButtons(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDialogButtonBox::StandardButtons(reinterpret_cast<const QDialogButtonBox::StandardButtons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDialogButtonBox_StandardButtons(sipSimpleWrapper *);}
static void dealloc_QDialogButtonBox_StandardButtons(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDialogButtonBox_StandardButtons(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDialogButtonBox_StandardButtons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDialogButtonBox_StandardButtons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDialogButtonBox::StandardButtons *sipCpp = 0;

    {
        const QDialogButtonBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDialogButtonBox_StandardButtons, &a0, &a0State))
        {
            sipCpp = new QDialogButtonBox::StandardButtons(*a0);
            sipReleaseType(const_cast<QDialogButtonBox::StandardButtons *>(a0),sipType_QDialogButtonBox_StandardButtons,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDialogButtonBox::StandardButtons(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDialogButtonBox::StandardButtons();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDialogButtonBox_StandardButtons(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDialogButtonBox_StandardButtons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDialogButtonBox::StandardButtons **sipCppPtr = reinterpret_cast<QDialogButtonBox::StandardButtons **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDialogButtonBox::StandardButtons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDialogButtonBox_StandardButton)) ||
            sipCanConvertToType(sipPy, sipType_QDialogButtonBox_StandardButtons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDialogButtonBox_StandardButton)))
{
    *sipCppPtr = new QDialogButtonBox::StandardButtons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDialogButtonBox::StandardButtons *>(sipConvertToType(sipPy, sipType_QDialogButtonBox_StandardButtons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQDialogButtonBoxStandardButtons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDialogButtonBox_StandardButtons[] = {
    {(void *)slot_QDialogButtonBox_StandardButtons___bool__, bool_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___ne__, ne_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___eq__, eq_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___invert__, invert_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___and__, and_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___xor__, xor_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___or__, or_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___int__, int_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___ixor__, ixor_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___ior__, ior_slot},
    {(void *)slot_QDialogButtonBox_StandardButtons___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDialogButtonBox_StandardButtons, "\1QDialogButtonBox.StandardButtons(QDialogButtonBox.StandardButtons)\n"
    "QDialogButtonBox.StandardButtons(int)\n"
    "QDialogButtonBox.StandardButtons()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QDialogButtonBox_StandardButtons = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDialogButtonBox__StandardButtons,
        {0}
    },
    {
        sipNameNr_StandardButtons,
        {62, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDialogButtonBox_StandardButtons,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDialogButtonBox_StandardButtons,
    init_type_QDialogButtonBox_StandardButtons,
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
    dealloc_QDialogButtonBox_StandardButtons,
    assign_QDialogButtonBox_StandardButtons,
    array_QDialogButtonBox_StandardButtons,
    copy_QDialogButtonBox_StandardButtons,
    release_QDialogButtonBox_StandardButtons,
    cast_QDialogButtonBox_StandardButtons,
    convertTo_QDialogButtonBox_StandardButtons,
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
