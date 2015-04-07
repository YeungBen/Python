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

#line 26 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qabstractnativeeventfilter.sip"
#include <qabstractnativeeventfilter.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQAbstractNativeEventFilter.cpp"

#line 32 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtCore/sipQtCoreQAbstractNativeEventFilter.cpp"


class sipQAbstractNativeEventFilter : public QAbstractNativeEventFilter
{
public:
    sipQAbstractNativeEventFilter();
    virtual ~sipQAbstractNativeEventFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool nativeEventFilter(const QByteArray&,void*,long*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractNativeEventFilter(const sipQAbstractNativeEventFilter &);
    sipQAbstractNativeEventFilter &operator = (const sipQAbstractNativeEventFilter &);

    char sipPyMethods[1];
};

sipQAbstractNativeEventFilter::sipQAbstractNativeEventFilter(): QAbstractNativeEventFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractNativeEventFilter::~sipQAbstractNativeEventFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQAbstractNativeEventFilter::nativeEventFilter(const QByteArray& a0,void*a1,long*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractNativeEventFilter,sipName_nativeEventFilter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtCore_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QByteArray&,void*,long*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_58(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QAbstractNativeEventFilter_nativeEventFilter, "QAbstractNativeEventFilter.nativeEventFilter(QByteArray, sip.voidptr) -> (bool, int)");

extern "C" {static PyObject *meth_QAbstractNativeEventFilter_nativeEventFilter(PyObject *, PyObject *);}
static PyObject *meth_QAbstractNativeEventFilter_nativeEventFilter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QByteArray* a0;
        int a0State = 0;
        void* a1;
        long a2;
        QAbstractNativeEventFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1v", &sipSelf, sipType_QAbstractNativeEventFilter, &sipCpp, sipType_QByteArray, &a0, &a0State, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter);
                return NULL;
            }

            sipRes = sipCpp->nativeEventFilter(*a0,a1,&a2);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipBuildResult(0,"(bl)",sipRes,a2);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractNativeEventFilter, sipName_nativeEventFilter, doc_QAbstractNativeEventFilter_nativeEventFilter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractNativeEventFilter(void *, const sipTypeDef *);}
static void *cast_QAbstractNativeEventFilter(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractNativeEventFilter)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractNativeEventFilter(void *, int);}
static void release_QAbstractNativeEventFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractNativeEventFilter *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractNativeEventFilter *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractNativeEventFilter(sipSimpleWrapper *);}
static void dealloc_QAbstractNativeEventFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractNativeEventFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractNativeEventFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractNativeEventFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractNativeEventFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractNativeEventFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQAbstractNativeEventFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractNativeEventFilter[] = {
    {SIP_MLNAME_CAST(sipName_nativeEventFilter), meth_QAbstractNativeEventFilter_nativeEventFilter, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractNativeEventFilter_nativeEventFilter)}
};

PyDoc_STRVAR(doc_QAbstractNativeEventFilter, "\1QAbstractNativeEventFilter()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QAbstractNativeEventFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractNativeEventFilter,
        {0}
    },
    {
        sipNameNr_QAbstractNativeEventFilter,
        {0, 0, 1},
        1, methods_QAbstractNativeEventFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractNativeEventFilter,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractNativeEventFilter,
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
    dealloc_QAbstractNativeEventFilter,
    0,
    0,
    0,
    release_QAbstractNativeEventFilter,
    cast_QAbstractNativeEventFilter,
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
