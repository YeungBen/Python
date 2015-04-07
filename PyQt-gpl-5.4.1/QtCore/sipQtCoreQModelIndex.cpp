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

#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"

#line 70 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"
#line 105 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"
#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"
#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"


PyDoc_STRVAR(doc_QModelIndex_child, "QModelIndex.child(int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_child(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->child(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_child, doc_QModelIndex_child);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_row, "QModelIndex.row() -> int");

extern "C" {static PyObject *meth_QModelIndex_row(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->row();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_row, doc_QModelIndex_row);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_column, "QModelIndex.column() -> int");

extern "C" {static PyObject *meth_QModelIndex_column(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_column, doc_QModelIndex_column);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_data, "QModelIndex.data(int role=Qt.DisplayRole) -> QVariant");

extern "C" {static PyObject *meth_QModelIndex_data(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_data(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = Qt::DisplayRole;
        const QModelIndex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_role,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QModelIndex, &sipCpp, &a0))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->data(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_data, doc_QModelIndex_data);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_flags, "QModelIndex.flags() -> Qt.ItemFlags");

extern "C" {static PyObject *meth_QModelIndex_flags(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            Qt::ItemFlags*sipRes;

            sipRes = new Qt::ItemFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_flags, doc_QModelIndex_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_internalPointer, "QModelIndex.internalPointer() -> object");

extern "C" {static PyObject *meth_QModelIndex_internalPointer(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_internalPointer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 38 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
        sipRes = reinterpret_cast<PyObject *>(sipCpp->internalPointer());
        
        if (!sipRes)
            sipRes = Py_None;
        
        Py_INCREF(sipRes);
#line 208 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_internalPointer, doc_QModelIndex_internalPointer);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_internalId, "QModelIndex.internalId() -> int");

extern "C" {static PyObject *meth_QModelIndex_internalId(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_internalId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 48 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
        // Python needs to treat the result as an unsigned value (which may not happen
        // on 64 bit systems).  Instead we get the real value as it is stored (as a
        // void *) and let Python convert that.
        sipRes = PyLong_FromVoidPtr(sipCpp->internalPointer());
#line 240 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_internalId, doc_QModelIndex_internalId);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_model, "QModelIndex.model() -> QAbstractItemModel");

extern "C" {static PyObject *meth_QModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            const QAbstractItemModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast<QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_model, doc_QModelIndex_model);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_isValid, "QModelIndex.isValid() -> bool");

extern "C" {static PyObject *meth_QModelIndex_isValid(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_isValid, doc_QModelIndex_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_parent, "QModelIndex.parent() -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_parent(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QModelIndex, &sipCpp))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->parent());

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_parent, doc_QModelIndex_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QModelIndex_sibling, "QModelIndex.sibling(int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QModelIndex_sibling(PyObject *, PyObject *);}
static PyObject *meth_QModelIndex_sibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        const QModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex*sipRes;

            sipRes = new QModelIndex(sipCpp->sibling(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QModelIndex, sipName_sibling, doc_QModelIndex_sibling);

    return NULL;
}


extern "C" {static PyObject *slot_QModelIndex___ge__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QModelIndex *sipCpp = reinterpret_cast<QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QModelIndex,sipSelf,sipArg);
}


extern "C" {static long slot_QModelIndex___hash__(PyObject *);}
static long slot_QModelIndex___hash__(PyObject *sipSelf)
{
    QModelIndex *sipCpp = reinterpret_cast<QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 63 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractitemmodel.sip"
        sipRes = qHash(*sipCpp);
#line 410 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQModelIndex.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QModelIndex___ne__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QModelIndex *sipCpp = reinterpret_cast<QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QModelIndex::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QModelIndex___lt__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QModelIndex *sipCpp = reinterpret_cast<QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QModelIndex::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QModelIndex___eq__(PyObject *,PyObject *);}
static PyObject *slot_QModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QModelIndex *sipCpp = reinterpret_cast<QModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QModelIndex* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QModelIndex::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QModelIndex,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QModelIndex(void *, const sipTypeDef *);}
static void *cast_QModelIndex(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QModelIndex)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QModelIndex(void *, int);}
static void release_QModelIndex(void *sipCppV,int)
{
    delete reinterpret_cast<QModelIndex *>(sipCppV);
}


extern "C" {static void assign_QModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QModelIndex *>(sipSrc);
}


extern "C" {static void *array_QModelIndex(SIP_SSIZE_T);}
static void *array_QModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QModelIndex[sipNrElem];
}


extern "C" {static void *copy_QModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QModelIndex(reinterpret_cast<const QModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QModelIndex(sipSimpleWrapper *);}
static void dealloc_QModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QModelIndex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QModelIndex *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QModelIndex();

            return sipCpp;
        }
    }

    {
        const QModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            sipCpp = new QModelIndex(*a0);

            return sipCpp;
        }
    }

    {
        const QPersistentModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPersistentModelIndex, &a0))
        {
            sipCpp = new QModelIndex(a0->operator const QModelIndex&());

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QModelIndex[] = {
    {(void *)slot_QModelIndex___ge__, ge_slot},
    {(void *)slot_QModelIndex___hash__, hash_slot},
    {(void *)slot_QModelIndex___ne__, ne_slot},
    {(void *)slot_QModelIndex___lt__, lt_slot},
    {(void *)slot_QModelIndex___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QModelIndex[] = {
    {SIP_MLNAME_CAST(sipName_child), meth_QModelIndex_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_child)},
    {SIP_MLNAME_CAST(sipName_column), meth_QModelIndex_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_column)},
    {SIP_MLNAME_CAST(sipName_data), (PyCFunction)meth_QModelIndex_data, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QModelIndex_data)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QModelIndex_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_flags)},
    {SIP_MLNAME_CAST(sipName_internalId), meth_QModelIndex_internalId, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_internalId)},
    {SIP_MLNAME_CAST(sipName_internalPointer), meth_QModelIndex_internalPointer, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_internalPointer)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QModelIndex_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_isValid)},
    {SIP_MLNAME_CAST(sipName_model), meth_QModelIndex_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_model)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QModelIndex_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_parent)},
    {SIP_MLNAME_CAST(sipName_row), meth_QModelIndex_row, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_row)},
    {SIP_MLNAME_CAST(sipName_sibling), meth_QModelIndex_sibling, METH_VARARGS, SIP_MLDOC_CAST(doc_QModelIndex_sibling)}
};

PyDoc_STRVAR(doc_QModelIndex, "\1QModelIndex()\n"
    "QModelIndex(QModelIndex)\n"
    "QModelIndex(QPersistentModelIndex)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QModelIndex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QModelIndex,
        {0}
    },
    {
        sipNameNr_QModelIndex,
        {0, 0, 1},
        11, methods_QModelIndex,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QModelIndex,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QModelIndex,
    init_type_QModelIndex,
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
    dealloc_QModelIndex,
    assign_QModelIndex,
    array_QModelIndex,
    copy_QModelIndex,
    release_QModelIndex,
    cast_QModelIndex,
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
