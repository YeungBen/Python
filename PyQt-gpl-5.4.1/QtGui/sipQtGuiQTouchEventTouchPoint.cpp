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

#line 686 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 693 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 31 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"

#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 35 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 38 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 686 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 693 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 43 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qvector2d.sip"
#include <qvector2d.h>
#line 46 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 49 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_id, "QTouchEvent.TouchPoint.id() -> int");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->id();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_id, doc_QTouchEvent_TouchPoint_id);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_state, "QTouchEvent.TouchPoint.state() -> Qt.TouchPointState");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            Qt::TouchPointState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(sipRes,sipType_Qt_TouchPointState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_state, doc_QTouchEvent_TouchPoint_state);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pos, "QTouchEvent.TouchPoint.pos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pos, doc_QTouchEvent_TouchPoint_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startPos, "QTouchEvent.TouchPoint.startPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->startPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startPos, doc_QTouchEvent_TouchPoint_startPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastPos, "QTouchEvent.TouchPoint.lastPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastPos, doc_QTouchEvent_TouchPoint_lastPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_scenePos, "QTouchEvent.TouchPoint.scenePos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_scenePos, doc_QTouchEvent_TouchPoint_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScenePos, "QTouchEvent.TouchPoint.startScenePos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->startScenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScenePos, doc_QTouchEvent_TouchPoint_startScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScenePos, "QTouchEvent.TouchPoint.lastScenePos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastScenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScenePos, doc_QTouchEvent_TouchPoint_lastScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenPos, "QTouchEvent.TouchPoint.screenPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenPos, doc_QTouchEvent_TouchPoint_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScreenPos, "QTouchEvent.TouchPoint.startScreenPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->startScreenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScreenPos, doc_QTouchEvent_TouchPoint_startScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScreenPos, "QTouchEvent.TouchPoint.lastScreenPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastScreenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScreenPos, doc_QTouchEvent_TouchPoint_lastScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_normalizedPos, "QTouchEvent.TouchPoint.normalizedPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->normalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_normalizedPos, doc_QTouchEvent_TouchPoint_normalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startNormalizedPos, "QTouchEvent.TouchPoint.startNormalizedPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->startNormalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startNormalizedPos, doc_QTouchEvent_TouchPoint_startNormalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastNormalizedPos, "QTouchEvent.TouchPoint.lastNormalizedPos() -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastNormalizedPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastNormalizedPos, doc_QTouchEvent_TouchPoint_lastNormalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rect, "QTouchEvent.TouchPoint.rect() -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->rect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rect, doc_QTouchEvent_TouchPoint_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_sceneRect, "QTouchEvent.TouchPoint.sceneRect() -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->sceneRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_sceneRect, doc_QTouchEvent_TouchPoint_sceneRect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenRect, "QTouchEvent.TouchPoint.screenRect() -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->screenRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenRect, doc_QTouchEvent_TouchPoint_screenRect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pressure, "QTouchEvent.TouchPoint.pressure() -> float");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->pressure();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pressure, doc_QTouchEvent_TouchPoint_pressure);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_velocity, "QTouchEvent.TouchPoint.velocity() -> QVector2D");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_velocity(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_velocity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QVector2D*sipRes;

            sipRes = new QVector2D(sipCpp->velocity());

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_velocity, doc_QTouchEvent_TouchPoint_velocity);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_flags, "QTouchEvent.TouchPoint.flags() -> QTouchEvent.TouchPoint.InfoFlags");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_flags(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QTouchEvent::TouchPoint::InfoFlags*sipRes;

            sipRes = new QTouchEvent::TouchPoint::InfoFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_QTouchEvent_TouchPoint_InfoFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_flags, doc_QTouchEvent_TouchPoint_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rawScreenPositions, "QTouchEvent.TouchPoint.rawScreenPositions() -> list-of-QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rawScreenPositions(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rawScreenPositions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QVector<QPointF>*sipRes;

            sipRes = new QVector<QPointF>(sipCpp->rawScreenPositions());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rawScreenPositions, doc_QTouchEvent_TouchPoint_rawScreenPositions);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTouchEvent_TouchPoint(void *, const sipTypeDef *);}
static void *cast_QTouchEvent_TouchPoint(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTouchEvent_TouchPoint)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTouchEvent_TouchPoint(void *, int);}
static void release_QTouchEvent_TouchPoint(void *sipCppV,int)
{
    delete reinterpret_cast<QTouchEvent::TouchPoint *>(sipCppV);
}


extern "C" {static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *);}
static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTouchEvent_TouchPoint(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QTouchEvent_TouchPoint[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QTouchEvent_TouchPoint_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_flags)},
    {SIP_MLNAME_CAST(sipName_id), meth_QTouchEvent_TouchPoint_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_id)},
    {SIP_MLNAME_CAST(sipName_lastNormalizedPos), meth_QTouchEvent_TouchPoint_lastNormalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastNormalizedPos)},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QTouchEvent_TouchPoint_lastPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastPos)},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QTouchEvent_TouchPoint_lastScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastScenePos)},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QTouchEvent_TouchPoint_lastScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastScreenPos)},
    {SIP_MLNAME_CAST(sipName_normalizedPos), meth_QTouchEvent_TouchPoint_normalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_normalizedPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QTouchEvent_TouchPoint_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_pos)},
    {SIP_MLNAME_CAST(sipName_pressure), meth_QTouchEvent_TouchPoint_pressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_pressure)},
    {SIP_MLNAME_CAST(sipName_rawScreenPositions), meth_QTouchEvent_TouchPoint_rawScreenPositions, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_rawScreenPositions)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QTouchEvent_TouchPoint_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_rect)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QTouchEvent_TouchPoint_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_scenePos)},
    {SIP_MLNAME_CAST(sipName_sceneRect), meth_QTouchEvent_TouchPoint_sceneRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_sceneRect)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QTouchEvent_TouchPoint_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_screenPos)},
    {SIP_MLNAME_CAST(sipName_screenRect), meth_QTouchEvent_TouchPoint_screenRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_screenRect)},
    {SIP_MLNAME_CAST(sipName_startNormalizedPos), meth_QTouchEvent_TouchPoint_startNormalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startNormalizedPos)},
    {SIP_MLNAME_CAST(sipName_startPos), meth_QTouchEvent_TouchPoint_startPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startPos)},
    {SIP_MLNAME_CAST(sipName_startScenePos), meth_QTouchEvent_TouchPoint_startScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startScenePos)},
    {SIP_MLNAME_CAST(sipName_startScreenPos), meth_QTouchEvent_TouchPoint_startScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startScreenPos)},
    {SIP_MLNAME_CAST(sipName_state), meth_QTouchEvent_TouchPoint_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_state)},
    {SIP_MLNAME_CAST(sipName_velocity), meth_QTouchEvent_TouchPoint_velocity, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_velocity)}
};

static sipEnumMemberDef enummembers_QTouchEvent_TouchPoint[] = {
    {sipName_Pen, static_cast<int>(QTouchEvent::TouchPoint::Pen), 313},
};


pyqt5ClassTypeDef sipTypeDef_QtGui_QTouchEvent_TouchPoint = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTouchEvent__TouchPoint,
        {0}
    },
    {
        sipNameNr_TouchPoint,
        {311, 255, 0},
        21, methods_QTouchEvent_TouchPoint,
        1, enummembers_QTouchEvent_TouchPoint,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QTouchEvent_TouchPoint,
    0,
    0,
    0,
    release_QTouchEvent_TouchPoint,
    cast_QTouchEvent_TouchPoint,
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
