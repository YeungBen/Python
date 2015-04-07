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

#include "sipAPIQtXml.h"

#line 276 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtXml/sipQtXmlQXmlDeclHandler.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtXml/sipQtXmlQXmlDeclHandler.cpp"


class sipQXmlDeclHandler : public QXmlDeclHandler
{
public:
    sipQXmlDeclHandler();
    sipQXmlDeclHandler(const QXmlDeclHandler&);
    virtual ~sipQXmlDeclHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString errorString() const;
    bool externalEntityDecl(const QString&,const QString&,const QString&);
    bool internalEntityDecl(const QString&,const QString&);
    bool attributeDecl(const QString&,const QString&,const QString&,const QString&,const QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlDeclHandler(const sipQXmlDeclHandler &);
    sipQXmlDeclHandler &operator = (const sipQXmlDeclHandler &);

    char sipPyMethods[4];
};

sipQXmlDeclHandler::sipQXmlDeclHandler(): QXmlDeclHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlDeclHandler::sipQXmlDeclHandler(const QXmlDeclHandler& a0): QXmlDeclHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlDeclHandler::~sipQXmlDeclHandler()
{
    sipCommonDtor(sipPySelf);
}

QString sipQXmlDeclHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlDeclHandler,sipName_errorString);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_16)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtXml_QtCore->em_virthandlers[16]))(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQXmlDeclHandler::externalEntityDecl(const QString& a0,const QString& a1,const QString& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlDeclHandler,sipName_externalEntityDecl);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&);

    return sipVH_QtXml_0(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}

bool sipQXmlDeclHandler::internalEntityDecl(const QString& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QXmlDeclHandler,sipName_internalEntityDecl);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&);

    return sipVH_QtXml_1(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlDeclHandler::attributeDecl(const QString& a0,const QString& a1,const QString& a2,const QString& a3,const QString& a4)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QXmlDeclHandler,sipName_attributeDecl);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&,const QString&,const QString&);

    return sipVH_QtXml_2(sipGILState, sipModuleAPI_QtXml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2, a3, a4);
}


PyDoc_STRVAR(doc_QXmlDeclHandler_attributeDecl, "QXmlDeclHandler.attributeDecl(str, str, str, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlDeclHandler_attributeDecl(PyObject *, PyObject *);}
static PyObject *meth_QXmlDeclHandler_attributeDecl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        const QString* a3;
        int a3State = 0;
        const QString* a4;
        int a4State = 0;
        QXmlDeclHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1J1J1", &sipSelf, sipType_QXmlDeclHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State, sipType_QString,&a4, &a4State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDeclHandler, sipName_attributeDecl);
                return NULL;
            }

            sipRes = sipCpp->attributeDecl(*a0,*a1,*a2,*a3,*a4);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast<QString *>(a4),sipType_QString,a4State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDeclHandler, sipName_attributeDecl, doc_QXmlDeclHandler_attributeDecl);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlDeclHandler_internalEntityDecl, "QXmlDeclHandler.internalEntityDecl(str, str) -> bool");

extern "C" {static PyObject *meth_QXmlDeclHandler_internalEntityDecl(PyObject *, PyObject *);}
static PyObject *meth_QXmlDeclHandler_internalEntityDecl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlDeclHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlDeclHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDeclHandler, sipName_internalEntityDecl);
                return NULL;
            }

            sipRes = sipCpp->internalEntityDecl(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDeclHandler, sipName_internalEntityDecl, doc_QXmlDeclHandler_internalEntityDecl);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlDeclHandler_externalEntityDecl, "QXmlDeclHandler.externalEntityDecl(str, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlDeclHandler_externalEntityDecl(PyObject *, PyObject *);}
static PyObject *meth_QXmlDeclHandler_externalEntityDecl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlDeclHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlDeclHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDeclHandler, sipName_externalEntityDecl);
                return NULL;
            }

            sipRes = sipCpp->externalEntityDecl(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDeclHandler, sipName_externalEntityDecl, doc_QXmlDeclHandler_externalEntityDecl);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlDeclHandler_errorString, "QXmlDeclHandler.errorString() -> str");

extern "C" {static PyObject *meth_QXmlDeclHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlDeclHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlDeclHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlDeclHandler, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDeclHandler, sipName_errorString);
                return NULL;
            }

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDeclHandler, sipName_errorString, doc_QXmlDeclHandler_errorString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlDeclHandler(void *, const sipTypeDef *);}
static void *cast_QXmlDeclHandler(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlDeclHandler)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlDeclHandler(void *, int);}
static void release_QXmlDeclHandler(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlDeclHandler *>(sipCppV);
    else
        delete reinterpret_cast<QXmlDeclHandler *>(sipCppV);
}


extern "C" {static void dealloc_QXmlDeclHandler(sipSimpleWrapper *);}
static void dealloc_QXmlDeclHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlDeclHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlDeclHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlDeclHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlDeclHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlDeclHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlDeclHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlDeclHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlDeclHandler, &a0))
        {
            sipCpp = new sipQXmlDeclHandler(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlDeclHandler[] = {
    {SIP_MLNAME_CAST(sipName_attributeDecl), meth_QXmlDeclHandler_attributeDecl, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDeclHandler_attributeDecl)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlDeclHandler_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDeclHandler_errorString)},
    {SIP_MLNAME_CAST(sipName_externalEntityDecl), meth_QXmlDeclHandler_externalEntityDecl, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDeclHandler_externalEntityDecl)},
    {SIP_MLNAME_CAST(sipName_internalEntityDecl), meth_QXmlDeclHandler_internalEntityDecl, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDeclHandler_internalEntityDecl)}
};

PyDoc_STRVAR(doc_QXmlDeclHandler, "\1QXmlDeclHandler()\n"
    "QXmlDeclHandler(QXmlDeclHandler)");


pyqt5ClassTypeDef sipTypeDef_QtXml_QXmlDeclHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlDeclHandler,
        {0}
    },
    {
        sipNameNr_QXmlDeclHandler,
        {0, 0, 1},
        4, methods_QXmlDeclHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlDeclHandler,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlDeclHandler,
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
    dealloc_QXmlDeclHandler,
    0,
    0,
    0,
    release_QXmlDeclHandler,
    cast_QXmlDeclHandler,
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
