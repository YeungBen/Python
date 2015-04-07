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

#include "sipAPIQtNetwork.h"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"

#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"


extern "C" {static int slot_QAbstractSocket_PauseModes___bool__(PyObject *);}
static int slot_QAbstractSocket_PauseModes___bool__(PyObject *sipSelf)
{
    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::PauseModes::Int() != 0);
#line 51 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSocket::PauseModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::PauseModes::Int() != a0->operator QAbstractSocket::PauseModes::Int());
#line 81 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"
            sipReleaseType(const_cast<QAbstractSocket::PauseModes *>(a0),sipType_QAbstractSocket_PauseModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QAbstractSocket_PauseModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSocket::PauseModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSocket::PauseModes::Int() == a0->operator QAbstractSocket::PauseModes::Int());
#line 117 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"
            sipReleaseType(const_cast<QAbstractSocket::PauseModes *>(a0),sipType_QAbstractSocket_PauseModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QAbstractSocket_PauseModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___invert__(PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___invert__(PyObject *sipSelf)
{
    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;


    {
        {
            QAbstractSocket::PauseModes*sipRes;

            sipRes = new QAbstractSocket::PauseModes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_PauseModes, &a0, &a0State, &a1))
        {
            QAbstractSocket::PauseModes*sipRes;

            sipRes = new QAbstractSocket::PauseModes((*a0 & a1));
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;
        QAbstractSocket::PauseModes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State, sipType_QAbstractSocket_PauseModes, &a1, &a1State))
        {
            QAbstractSocket::PauseModes*sipRes;

            sipRes = new QAbstractSocket::PauseModes((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);
            sipReleaseType(a1,sipType_QAbstractSocket_PauseModes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_PauseModes, &a0, &a0State, &a1))
        {
            QAbstractSocket::PauseModes*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSocket::PauseModes(*a0 ^ a1);
#line 220 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;
        QAbstractSocket::PauseModes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State, sipType_QAbstractSocket_PauseModes, &a1, &a1State))
        {
            QAbstractSocket::PauseModes*sipRes;

            sipRes = new QAbstractSocket::PauseModes((*a0 | *a1));
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);
            sipReleaseType(a1,sipType_QAbstractSocket_PauseModes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSocket_PauseModes, &a0, &a0State, &a1))
        {
            QAbstractSocket::PauseModes*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSocket::PauseModes(*a0 | a1);
#line 270 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSocket_PauseModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___int__(PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___int__(PyObject *sipSelf)
{
    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

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


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_PauseModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State))
        {
            sipCpp->QAbstractSocket::PauseModes::operator^=(*a0);
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);

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


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_PauseModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSocket::PauseModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State))
        {
            sipCpp->QAbstractSocket::PauseModes::operator|=(*a0);
            sipReleaseType(a0,sipType_QAbstractSocket_PauseModes,a0State);

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


extern "C" {static PyObject *slot_QAbstractSocket_PauseModes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSocket_PauseModes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSocket_PauseModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSocket::PauseModes *sipCpp = reinterpret_cast<QAbstractSocket::PauseModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSocket_PauseModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QAbstractSocket::PauseModes::operator&=(a0);

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
extern "C" {static void *cast_QAbstractSocket_PauseModes(void *, const sipTypeDef *);}
static void *cast_QAbstractSocket_PauseModes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractSocket_PauseModes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractSocket_PauseModes(void *, int);}
static void release_QAbstractSocket_PauseModes(void *sipCppV,int)
{
    delete reinterpret_cast<QAbstractSocket::PauseModes *>(sipCppV);
}


extern "C" {static void assign_QAbstractSocket_PauseModes(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractSocket_PauseModes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractSocket::PauseModes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractSocket::PauseModes *>(sipSrc);
}


extern "C" {static void *array_QAbstractSocket_PauseModes(SIP_SSIZE_T);}
static void *array_QAbstractSocket_PauseModes(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractSocket::PauseModes[sipNrElem];
}


extern "C" {static void *copy_QAbstractSocket_PauseModes(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractSocket_PauseModes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractSocket::PauseModes(reinterpret_cast<const QAbstractSocket::PauseModes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractSocket_PauseModes(sipSimpleWrapper *);}
static void dealloc_QAbstractSocket_PauseModes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractSocket_PauseModes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractSocket_PauseModes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractSocket_PauseModes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractSocket::PauseModes *sipCpp = 0;

    {
        const QAbstractSocket::PauseModes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractSocket_PauseModes, &a0, &a0State))
        {
            sipCpp = new QAbstractSocket::PauseModes(*a0);
            sipReleaseType(const_cast<QAbstractSocket::PauseModes *>(a0),sipType_QAbstractSocket_PauseModes,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QAbstractSocket::PauseModes(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAbstractSocket::PauseModes();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractSocket_PauseModes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractSocket_PauseModes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QAbstractSocket::PauseModes **sipCppPtr = reinterpret_cast<QAbstractSocket::PauseModes **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractSocket::PauseModes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSocket_PauseMode)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractSocket_PauseModes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSocket_PauseMode)))
{
    *sipCppPtr = new QAbstractSocket::PauseModes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractSocket::PauseModes *>(sipConvertToType(sipPy, sipType_QAbstractSocket_PauseModes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtNetwork/sipQtNetworkQAbstractSocketPauseModes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractSocket_PauseModes[] = {
    {(void *)slot_QAbstractSocket_PauseModes___bool__, bool_slot},
    {(void *)slot_QAbstractSocket_PauseModes___ne__, ne_slot},
    {(void *)slot_QAbstractSocket_PauseModes___eq__, eq_slot},
    {(void *)slot_QAbstractSocket_PauseModes___invert__, invert_slot},
    {(void *)slot_QAbstractSocket_PauseModes___and__, and_slot},
    {(void *)slot_QAbstractSocket_PauseModes___xor__, xor_slot},
    {(void *)slot_QAbstractSocket_PauseModes___or__, or_slot},
    {(void *)slot_QAbstractSocket_PauseModes___int__, int_slot},
    {(void *)slot_QAbstractSocket_PauseModes___ixor__, ixor_slot},
    {(void *)slot_QAbstractSocket_PauseModes___ior__, ior_slot},
    {(void *)slot_QAbstractSocket_PauseModes___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractSocket_PauseModes, "\1QAbstractSocket.PauseModes(QAbstractSocket.PauseModes)\n"
    "QAbstractSocket.PauseModes(int)\n"
    "QAbstractSocket.PauseModes()");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QAbstractSocket_PauseModes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractSocket__PauseModes,
        {0}
    },
    {
        sipNameNr_PauseModes,
        {1, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractSocket_PauseModes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractSocket_PauseModes,
    init_type_QAbstractSocket_PauseModes,
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
    dealloc_QAbstractSocket_PauseModes,
    assign_QAbstractSocket_PauseModes,
    array_QAbstractSocket_PauseModes,
    copy_QAbstractSocket_PauseModes,
    release_QAbstractSocket_PauseModes,
    cast_QAbstractSocket_PauseModes,
    convertTo_QAbstractSocket_PauseModes,
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
