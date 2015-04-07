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

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"


extern "C" {static int slot_Qt_MouseButtons___bool__(PyObject *);}
static int slot_Qt_MouseButtons___bool__(PyObject *sipSelf)
{
    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() != 0);
#line 51 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseButtons___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() != a0->operator Qt::MouseButtons::Int());
#line 81 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(const_cast<Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_MouseButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::MouseButtons::Int() == a0->operator Qt::MouseButtons::Int());
#line 117 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(const_cast<Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_MouseButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___invert__(PyObject *);}
static PyObject *slot_Qt_MouseButtons___invert__(PyObject *sipSelf)
{
    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseButtons___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButtons* a0;
        int a0State = 0;
        Qt::MouseButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_MouseButtons, &a0, &a0State, sipType_Qt_MouseButtons, &a1, &a1State))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons((*a0 ^ *a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);
            sipReleaseType(a1,sipType_Qt_MouseButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    {
        Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
            Qt::MouseButtons*sipRes = 0;

#line 103 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
        sipRes = new Qt::MouseButtons(*a0 ^ a1);
#line 220 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButtons* a0;
        int a0State = 0;
        Qt::MouseButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_MouseButtons, &a0, &a0State, sipType_Qt_MouseButtons, &a1, &a1State))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons((*a0 | *a1));
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);
            sipReleaseType(a1,sipType_Qt_MouseButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    {
        Qt::MouseButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseButtons, &a0, &a0State, &a1))
        {
            Qt::MouseButtons*sipRes = 0;

#line 98 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
        sipRes = new Qt::MouseButtons(*a0 | a1);
#line 270 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseButtons___int__(PyObject *);}
static PyObject *slot_Qt_MouseButtons___int__(PyObject *sipSelf)
{
    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

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


extern "C" {static PyObject *slot_Qt_MouseButtons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            sipCpp->Qt::MouseButtons::operator^=(*a0);
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

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


extern "C" {static PyObject *slot_Qt_MouseButtons___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            sipCpp->Qt::MouseButtons::operator|=(*a0);
            sipReleaseType(a0,sipType_Qt_MouseButtons,a0State);

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


extern "C" {static PyObject *slot_Qt_MouseButtons___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseButtons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::MouseButtons *sipCpp = reinterpret_cast<Qt::MouseButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::MouseButtons::operator&=(a0);

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
extern "C" {static void *cast_Qt_MouseButtons(void *, const sipTypeDef *);}
static void *cast_Qt_MouseButtons(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_MouseButtons)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_MouseButtons(void *, int);}
static void release_Qt_MouseButtons(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::MouseButtons *>(sipCppV);
}


extern "C" {static void assign_Qt_MouseButtons(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_MouseButtons(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::MouseButtons *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::MouseButtons *>(sipSrc);
}


extern "C" {static void *array_Qt_MouseButtons(SIP_SSIZE_T);}
static void *array_Qt_MouseButtons(SIP_SSIZE_T sipNrElem)
{
    return new Qt::MouseButtons[sipNrElem];
}


extern "C" {static void *copy_Qt_MouseButtons(const void *, SIP_SSIZE_T);}
static void *copy_Qt_MouseButtons(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::MouseButtons(reinterpret_cast<const Qt::MouseButtons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_MouseButtons(sipSimpleWrapper *);}
static void dealloc_Qt_MouseButtons(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_MouseButtons(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_MouseButtons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_MouseButtons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::MouseButtons *sipCpp = 0;

    {
        const Qt::MouseButtons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_MouseButtons, &a0, &a0State))
        {
            sipCpp = new Qt::MouseButtons(*a0);
            sipReleaseType(const_cast<Qt::MouseButtons *>(a0),sipType_Qt_MouseButtons,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::MouseButtons(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::MouseButtons();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_MouseButtons(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_MouseButtons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::MouseButtons **sipCppPtr = reinterpret_cast<Qt::MouseButtons **>(sipCppPtrV);

#line 124 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::MouseButtons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseButton)) ||
            sipCanConvertToType(sipPy, sipType_Qt_MouseButtons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseButton)))
{
    *sipCppPtr = new Qt::MouseButtons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::MouseButtons *>(sipConvertToType(sipPy, sipType_Qt_MouseButtons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQtMouseButtons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_MouseButtons[] = {
    {(void *)slot_Qt_MouseButtons___bool__, bool_slot},
    {(void *)slot_Qt_MouseButtons___ne__, ne_slot},
    {(void *)slot_Qt_MouseButtons___eq__, eq_slot},
    {(void *)slot_Qt_MouseButtons___invert__, invert_slot},
    {(void *)slot_Qt_MouseButtons___and__, and_slot},
    {(void *)slot_Qt_MouseButtons___xor__, xor_slot},
    {(void *)slot_Qt_MouseButtons___or__, or_slot},
    {(void *)slot_Qt_MouseButtons___int__, int_slot},
    {(void *)slot_Qt_MouseButtons___ixor__, ixor_slot},
    {(void *)slot_Qt_MouseButtons___ior__, ior_slot},
    {(void *)slot_Qt_MouseButtons___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_MouseButtons, "\1Qt.MouseButtons(Qt.MouseButtons)\n"
    "Qt.MouseButtons(int)\n"
    "Qt.MouseButtons()");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_MouseButtons = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__MouseButtons,
        {0}
    },
    {
        sipNameNr_MouseButtons,
        {303, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_MouseButtons,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_MouseButtons,
    init_type_Qt_MouseButtons,
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
    dealloc_Qt_MouseButtons,
    assign_Qt_MouseButtons,
    array_Qt_MouseButtons,
    copy_Qt_MouseButtons,
    release_Qt_MouseButtons,
    cast_Qt_MouseButtons,
    convertTo_Qt_MouseButtons,
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
