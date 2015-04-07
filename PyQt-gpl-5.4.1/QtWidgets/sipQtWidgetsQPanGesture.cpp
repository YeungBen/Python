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

#line 52 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 241 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 229 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 57 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQPanGesture.cpp"


class sipQPanGesture : public QPanGesture
{
public:
    sipQPanGesture(QObject*);
    virtual ~sipQPanGesture();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPanGesture(const sipQPanGesture &);
    sipQPanGesture &operator = (const sipQPanGesture &);

    char sipPyMethods[7];
};

sipQPanGesture::sipQPanGesture(QObject*a0): QPanGesture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPanGesture::~sipQPanGesture()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPanGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QPanGesture);
}

int sipQPanGesture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPanGesture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QPanGesture,_c,_id,_a);

    return _id;
}

void *sipQPanGesture::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QPanGesture, _clname, &sipCpp) ? sipCpp : QPanGesture::qt_metacast(_clname));
}

void sipQPanGesture::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPanGesture::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPanGesture::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPanGesture::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPanGesture::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPanGesture::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPanGesture::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPanGesture::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPanGesture::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPanGesture::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQPanGesture::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPanGesture::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPanGesture::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPanGesture::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QPanGesture_lastOffset, "QPanGesture.lastOffset() -> QPointF");

extern "C" {static PyObject *meth_QPanGesture_lastOffset(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_lastOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPanGesture, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastOffset());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_lastOffset, doc_QPanGesture_lastOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_offset, "QPanGesture.offset() -> QPointF");

extern "C" {static PyObject *meth_QPanGesture_offset(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_offset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPanGesture, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->offset());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_offset, doc_QPanGesture_offset);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_delta, "QPanGesture.delta() -> QPointF");

extern "C" {static PyObject *meth_QPanGesture_delta(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_delta(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPanGesture, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->delta());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_delta, doc_QPanGesture_delta);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_acceleration, "QPanGesture.acceleration() -> float");

extern "C" {static PyObject *meth_QPanGesture_acceleration(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_acceleration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPanGesture, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->acceleration();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_acceleration, doc_QPanGesture_acceleration);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_setLastOffset, "QPanGesture.setLastOffset(QPointF)");

extern "C" {static PyObject *meth_QPanGesture_setLastOffset(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_setLastOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPanGesture, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setLastOffset(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_setLastOffset, doc_QPanGesture_setLastOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_setOffset, "QPanGesture.setOffset(QPointF)");

extern "C" {static PyObject *meth_QPanGesture_setOffset(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_setOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPanGesture, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setOffset(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_setOffset, doc_QPanGesture_setOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QPanGesture_setAcceleration, "QPanGesture.setAcceleration(float)");

extern "C" {static PyObject *meth_QPanGesture_setAcceleration(PyObject *, PyObject *);}
static PyObject *meth_QPanGesture_setAcceleration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPanGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPanGesture, &sipCpp, &a0))
        {
            sipCpp->setAcceleration(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPanGesture, sipName_setAcceleration, doc_QPanGesture_setAcceleration);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPanGesture(void *, const sipTypeDef *);}
static void *cast_QPanGesture(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPanGesture)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGesture)->ctd_cast((QGesture *)(QPanGesture *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPanGesture(void *, int);}
static void release_QPanGesture(void *sipCppV,int)
{
    QPanGesture *sipCpp = reinterpret_cast<QPanGesture *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPanGesture(sipSimpleWrapper *);}
static void dealloc_QPanGesture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPanGesture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPanGesture(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPanGesture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPanGesture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPanGesture *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPanGesture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPanGesture[] = {{102, 255, 1}};


static PyMethodDef methods_QPanGesture[] = {
    {SIP_MLNAME_CAST(sipName_acceleration), meth_QPanGesture_acceleration, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_acceleration)},
    {SIP_MLNAME_CAST(sipName_delta), meth_QPanGesture_delta, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_delta)},
    {SIP_MLNAME_CAST(sipName_lastOffset), meth_QPanGesture_lastOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_lastOffset)},
    {SIP_MLNAME_CAST(sipName_offset), meth_QPanGesture_offset, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_offset)},
    {SIP_MLNAME_CAST(sipName_setAcceleration), meth_QPanGesture_setAcceleration, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_setAcceleration)},
    {SIP_MLNAME_CAST(sipName_setLastOffset), meth_QPanGesture_setLastOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_setLastOffset)},
    {SIP_MLNAME_CAST(sipName_setOffset), meth_QPanGesture_setOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QPanGesture_setOffset)}
};

PyDoc_STRVAR(doc_QPanGesture, "\1QPanGesture(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QPanGesture = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPanGesture,
        {0}
    },
    {
        sipNameNr_QPanGesture,
        {0, 0, 1},
        7, methods_QPanGesture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPanGesture,
    -1,
    -1,
    supers_QPanGesture,
    0,
    init_type_QPanGesture,
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
    dealloc_QPanGesture,
    0,
    0,
    0,
    release_QPanGesture,
    cast_QPanGesture,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPanGesture::staticMetaObject,
    0,
    0,
    0
};
