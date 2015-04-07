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

#line 63 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpicture.sip"
#include <qpicture.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"

#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 42 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpicture.sip"
#include <qpicture.h>
#line 45 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
#line 67 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpicture.sip"
// This defines the mapping between picture formats and the corresponding
// Python i/o handler callables.
struct qtgui_pio {
    const char *format;     // The format.
    PyObject *read;         // The read handler.
    PyObject *write;        // The write handler.
    qtgui_pio *next;        // The next in the list.
};


// The head of the list.
static qtgui_pio *qtgui_pio_head = 0;


// Find the entry for the given picture.
static const qtgui_pio *qtgui_pio_find(QPictureIO *pio)
{
    for (const qtgui_pio *p = qtgui_pio_head; p; p = p->next)
        if (qstrcmp(pio->format(), p->format) == 0)
            return p;

    return 0;
}


// This is the C++ read handler.
static void qtgui_pio_read(QPictureIO *pio)
{
    const qtgui_pio *p = qtgui_pio_find(pio);

    if (p && p->read)
    {
        Py_XDECREF(sipCallMethod(0, p->read, "D", pio, sipType_QPictureIO, NULL));
    }
}


// This is the C++ write handler.
static void qtgui_pio_write(QPictureIO *pio)
{
    const qtgui_pio *p = qtgui_pio_find(pio);

    if (p && p->write)
    {
        Py_XDECREF(sipCallMethod(0, p->write, "D", pio, sipType_QPictureIO, NULL));
    }
}
#line 94 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"


PyDoc_STRVAR(doc_QPictureIO_picture, "QPictureIO.picture() -> QPicture");

extern "C" {static PyObject *meth_QPictureIO_picture(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_picture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            QPicture*sipRes;

            sipRes = new QPicture(sipCpp->picture());

            return sipConvertFromNewType(sipRes,sipType_QPicture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_picture, doc_QPictureIO_picture);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_status, "QPictureIO.status() -> int");

extern "C" {static PyObject *meth_QPictureIO_status(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_status(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->status();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_status, doc_QPictureIO_status);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_format, "QPictureIO.format() -> str");

extern "C" {static PyObject *meth_QPictureIO_format(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->format();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_format, doc_QPictureIO_format);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_ioDevice, "QPictureIO.ioDevice() -> QIODevice");

extern "C" {static PyObject *meth_QPictureIO_ioDevice(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_ioDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            QIODevice*sipRes;

            sipRes = sipCpp->ioDevice();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_ioDevice, doc_QPictureIO_ioDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_fileName, "QPictureIO.fileName() -> str");

extern "C" {static PyObject *meth_QPictureIO_fileName(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_fileName, doc_QPictureIO_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_quality, "QPictureIO.quality() -> int");

extern "C" {static PyObject *meth_QPictureIO_quality(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_quality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->quality();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_quality, doc_QPictureIO_quality);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_description, "QPictureIO.description() -> str");

extern "C" {static PyObject *meth_QPictureIO_description(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_description, doc_QPictureIO_description);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_parameters, "QPictureIO.parameters() -> str");

extern "C" {static PyObject *meth_QPictureIO_parameters(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_parameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->parameters();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_parameters, doc_QPictureIO_parameters);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_gamma, "QPictureIO.gamma() -> float");

extern "C" {static PyObject *meth_QPictureIO_gamma(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_gamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->gamma();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_gamma, doc_QPictureIO_gamma);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setPicture, "QPictureIO.setPicture(QPicture)");

extern "C" {static PyObject *meth_QPictureIO_setPicture(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setPicture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPicture* a0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPictureIO, &sipCpp, sipType_QPicture, &a0))
        {
            sipCpp->setPicture(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setPicture, doc_QPictureIO_setPicture);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setStatus, "QPictureIO.setStatus(int)");

extern "C" {static PyObject *meth_QPictureIO_setStatus(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPictureIO, &sipCpp, &a0))
        {
            sipCpp->setStatus(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setStatus, doc_QPictureIO_setStatus);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setFormat, "QPictureIO.setFormat(str)");

extern "C" {static PyObject *meth_QPictureIO_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QPictureIO, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->setFormat(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setFormat, doc_QPictureIO_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setIODevice, "QPictureIO.setIODevice(QIODevice)");

extern "C" {static PyObject *meth_QPictureIO_setIODevice(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setIODevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QPictureIO, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setIODevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setIODevice, doc_QPictureIO_setIODevice);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setFileName, "QPictureIO.setFileName(str)");

extern "C" {static PyObject *meth_QPictureIO_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPictureIO, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setFileName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setFileName, doc_QPictureIO_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setQuality, "QPictureIO.setQuality(int)");

extern "C" {static PyObject *meth_QPictureIO_setQuality(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setQuality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPictureIO, &sipCpp, &a0))
        {
            sipCpp->setQuality(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setQuality, doc_QPictureIO_setQuality);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setDescription, "QPictureIO.setDescription(str)");

extern "C" {static PyObject *meth_QPictureIO_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPictureIO, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDescription(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setDescription, doc_QPictureIO_setDescription);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setParameters, "QPictureIO.setParameters(str)");

extern "C" {static PyObject *meth_QPictureIO_setParameters(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BAA", &sipSelf, sipType_QPictureIO, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->setParameters(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setParameters, doc_QPictureIO_setParameters);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_setGamma, "QPictureIO.setGamma(float)");

extern "C" {static PyObject *meth_QPictureIO_setGamma(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_setGamma(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QPictureIO, &sipCpp, &a0))
        {
            sipCpp->setGamma(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_setGamma, doc_QPictureIO_setGamma);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_read, "QPictureIO.read() -> bool");

extern "C" {static PyObject *meth_QPictureIO_read(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->read();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_read, doc_QPictureIO_read);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_write, "QPictureIO.write() -> bool");

extern "C" {static PyObject *meth_QPictureIO_write(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPictureIO *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPictureIO, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->write();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_write, doc_QPictureIO_write);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_pictureFormat, "QPictureIO.pictureFormat(str) -> QByteArray\n"
    "QPictureIO.pictureFormat(QIODevice) -> QByteArray");

extern "C" {static PyObject *meth_QPictureIO_pictureFormat(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_pictureFormat(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QPictureIO::pictureFormat(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    {
        QIODevice* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QIODevice, &a0))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QPictureIO::pictureFormat(a0));

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_pictureFormat, doc_QPictureIO_pictureFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_inputFormats, "QPictureIO.inputFormats() -> list-of-QByteArray");

extern "C" {static PyObject *meth_QPictureIO_inputFormats(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_inputFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QPictureIO::inputFormats());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_inputFormats, doc_QPictureIO_inputFormats);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_outputFormats, "QPictureIO.outputFormats() -> list-of-QByteArray");

extern "C" {static PyObject *meth_QPictureIO_outputFormats(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_outputFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QPictureIO::outputFormats());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_outputFormats, doc_QPictureIO_outputFormats);

    return NULL;
}


PyDoc_STRVAR(doc_QPictureIO_defineIOHandler, "QPictureIO.defineIOHandler(str, str, str, callable, callable)");

extern "C" {static PyObject *meth_QPictureIO_defineIOHandler(PyObject *, PyObject *);}
static PyObject *meth_QPictureIO_defineIOHandler(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
        const char* a1;
        PyObject *a1Keep;
        const char* a2;
        PyObject *a2Keep;
        PyObject * a3;
        PyObject * a4;

        if (sipParseArgs(&sipParseErr, sipArgs, "AAAAAAHH", &a0Keep, &a0, &a1Keep, &a1, &a2Keep, &a2, &a3, &a4))
        {
#line 147 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtGui/qpicture.sip"
        // Convert None to NULL.
        if (a3 == Py_None)
            a3 = 0;
        
        if (a4 == Py_None)
            a4 = 0;
        
        // See if we already know about the format.
        qtgui_pio *p;
        
        for (p = qtgui_pio_head; p; p = p->next)
            if (qstrcmp(a0, p->format) == 0)
                break;
        
        if (!p)
        {
            // Handle the new format.
            p = new qtgui_pio;
            p->format = qstrdup(a0);
            p->read = 0;
            p->write = 0;
            p->next = qtgui_pio_head;
        
            qtgui_pio_head = p;
        }
        
        // Replace the old callables with the new ones.
        Py_XDECREF(p->read);
        p->read = a3;
        Py_XINCREF(p->read);
        
        Py_XDECREF(p->write);
        p->write = a4;
        Py_XINCREF(p->write);
        
        // Install the generic handlers.
        QPictureIO::defineIOHandler(a0, a1, a2, qtgui_pio_read, qtgui_pio_write);
#line 811 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtGui/sipQtGuiQPictureIO.cpp"
            Py_DECREF(a0Keep);
            Py_DECREF(a1Keep);
            Py_DECREF(a2Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPictureIO, sipName_defineIOHandler, doc_QPictureIO_defineIOHandler);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPictureIO(void *, const sipTypeDef *);}
static void *cast_QPictureIO(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPictureIO)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPictureIO(void *, int);}
static void release_QPictureIO(void *sipCppV,int)
{
    delete reinterpret_cast<QPictureIO *>(sipCppV);
}


extern "C" {static void dealloc_QPictureIO(sipSimpleWrapper *);}
static void dealloc_QPictureIO(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPictureIO(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPictureIO(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPictureIO(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPictureIO *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPictureIO();

            return sipCpp;
        }
    }

    {
        QIODevice* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8AA", sipType_QIODevice, &a0, &a1Keep, &a1))
        {
            sipCpp = new QPictureIO(a0,a1);
            Py_DECREF(a1Keep);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1AA", sipType_QString,&a0, &a0State, &a1Keep, &a1))
        {
            sipCpp = new QPictureIO(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            Py_DECREF(a1Keep);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPictureIO[] = {
    {SIP_MLNAME_CAST(sipName_defineIOHandler), meth_QPictureIO_defineIOHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_defineIOHandler)},
    {SIP_MLNAME_CAST(sipName_description), meth_QPictureIO_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_description)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QPictureIO_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_fileName)},
    {SIP_MLNAME_CAST(sipName_format), meth_QPictureIO_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_format)},
    {SIP_MLNAME_CAST(sipName_gamma), meth_QPictureIO_gamma, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_gamma)},
    {SIP_MLNAME_CAST(sipName_inputFormats), meth_QPictureIO_inputFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_inputFormats)},
    {SIP_MLNAME_CAST(sipName_ioDevice), meth_QPictureIO_ioDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_ioDevice)},
    {SIP_MLNAME_CAST(sipName_outputFormats), meth_QPictureIO_outputFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_outputFormats)},
    {SIP_MLNAME_CAST(sipName_parameters), meth_QPictureIO_parameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_parameters)},
    {SIP_MLNAME_CAST(sipName_picture), meth_QPictureIO_picture, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_picture)},
    {SIP_MLNAME_CAST(sipName_pictureFormat), meth_QPictureIO_pictureFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_pictureFormat)},
    {SIP_MLNAME_CAST(sipName_quality), meth_QPictureIO_quality, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_quality)},
    {SIP_MLNAME_CAST(sipName_read), meth_QPictureIO_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_read)},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QPictureIO_setDescription, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setDescription)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QPictureIO_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setFileName)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QPictureIO_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setFormat)},
    {SIP_MLNAME_CAST(sipName_setGamma), meth_QPictureIO_setGamma, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setGamma)},
    {SIP_MLNAME_CAST(sipName_setIODevice), meth_QPictureIO_setIODevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setIODevice)},
    {SIP_MLNAME_CAST(sipName_setParameters), meth_QPictureIO_setParameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setParameters)},
    {SIP_MLNAME_CAST(sipName_setPicture), meth_QPictureIO_setPicture, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setPicture)},
    {SIP_MLNAME_CAST(sipName_setQuality), meth_QPictureIO_setQuality, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setQuality)},
    {SIP_MLNAME_CAST(sipName_setStatus), meth_QPictureIO_setStatus, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_setStatus)},
    {SIP_MLNAME_CAST(sipName_status), meth_QPictureIO_status, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_status)},
    {SIP_MLNAME_CAST(sipName_write), meth_QPictureIO_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QPictureIO_write)}
};

PyDoc_STRVAR(doc_QPictureIO, "\1QPictureIO()\n"
    "QPictureIO(QIODevice, str)\n"
    "QPictureIO(str, str)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPictureIO = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPictureIO,
        {0}
    },
    {
        sipNameNr_QPictureIO,
        {0, 0, 1},
        24, methods_QPictureIO,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPictureIO,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPictureIO,
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
    dealloc_QPictureIO,
    0,
    0,
    0,
    release_QPictureIO,
    cast_QPictureIO,
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
