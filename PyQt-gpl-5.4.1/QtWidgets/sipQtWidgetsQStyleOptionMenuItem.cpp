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

#line 488 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"

#line 30 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"
#line 30 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 36 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"
#line 30 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/QtWidgets/sipQtWidgetsQStyleOptionMenuItem.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionMenuItem(void *, const sipTypeDef *);}
static void *cast_QStyleOptionMenuItem(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionMenuItem)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionMenuItem *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionMenuItem(void *, int);}
static void release_QStyleOptionMenuItem(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionMenuItem *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionMenuItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionMenuItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionMenuItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionMenuItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionMenuItem(SIP_SSIZE_T);}
static void *array_QStyleOptionMenuItem(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionMenuItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionMenuItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionMenuItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionMenuItem(reinterpret_cast<const QStyleOptionMenuItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionMenuItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionMenuItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionMenuItem(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionMenuItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionMenuItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionMenuItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionMenuItem();

            return sipCpp;
        }
    }

    {
        const QStyleOptionMenuItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionMenuItem, &a0))
        {
            sipCpp = new QStyleOptionMenuItem(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionMenuItem[] = {{307, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionMenuItem[] = {
    {sipName_DefaultItem, static_cast<int>(QStyleOptionMenuItem::DefaultItem), 347},
    {sipName_EmptyArea, static_cast<int>(QStyleOptionMenuItem::EmptyArea), 347},
    {sipName_Exclusive, static_cast<int>(QStyleOptionMenuItem::Exclusive), 346},
    {sipName_Margin, static_cast<int>(QStyleOptionMenuItem::Margin), 347},
    {sipName_NonExclusive, static_cast<int>(QStyleOptionMenuItem::NonExclusive), 346},
    {sipName_Normal, static_cast<int>(QStyleOptionMenuItem::Normal), 347},
    {sipName_NotCheckable, static_cast<int>(QStyleOptionMenuItem::NotCheckable), 346},
    {sipName_Scroller, static_cast<int>(QStyleOptionMenuItem::Scroller), 347},
    {sipName_Separator, static_cast<int>(QStyleOptionMenuItem::Separator), 347},
    {sipName_SubMenu, static_cast<int>(QStyleOptionMenuItem::SubMenu), 347},
    {sipName_TearOff, static_cast<int>(QStyleOptionMenuItem::TearOff), 347},
    {sipName_Type, static_cast<int>(QStyleOptionMenuItem::Type), 348},
    {sipName_Version, static_cast<int>(QStyleOptionMenuItem::Version), 349},
};


extern "C" {static PyObject *varget_QStyleOptionMenuItem_checkType(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_checkType(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionMenuItem::CheckType sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->checkType;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionMenuItem_CheckType);
}


extern "C" {static int varset_QStyleOptionMenuItem_checkType(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_checkType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionMenuItem::CheckType sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (QStyleOptionMenuItem::CheckType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checkType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_checked(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_checked(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->checked;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionMenuItem_checked(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_checked(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checked = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_font(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QFont*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = &sipCpp->font;

    sipPy = sipConvertFromType(sipVal, sipType_QFont, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionMenuItem_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionMenuItem_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_maxIconWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_maxIconWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->maxIconWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionMenuItem_maxIconWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_maxIconWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->maxIconWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_menuHasCheckableItems(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_menuHasCheckableItems(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->menuHasCheckableItems;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionMenuItem_menuHasCheckableItems(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_menuHasCheckableItems(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->menuHasCheckableItems = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_menuItemType(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_menuItemType(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionMenuItem::MenuItemType sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->menuItemType;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionMenuItem_MenuItemType);
}


extern "C" {static int varset_QStyleOptionMenuItem_menuItemType(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_menuItemType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionMenuItem::MenuItemType sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (QStyleOptionMenuItem::MenuItemType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->menuItemType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_menuRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_menuRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRect*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = &sipCpp->menuRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionMenuItem_menuRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_menuRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->menuRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_tabWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_tabWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = sipCpp->tabWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionMenuItem_tabWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_tabWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->tabWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionMenuItem_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionMenuItem_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionMenuItem_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionMenuItem_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionMenuItem *sipCpp = reinterpret_cast<QStyleOptionMenuItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionMenuItem[] = {
    {InstanceVariable, sipName_checkType, (PyMethodDef *)varget_QStyleOptionMenuItem_checkType, (PyMethodDef *)varset_QStyleOptionMenuItem_checkType, NULL, NULL},
    {InstanceVariable, sipName_checked, (PyMethodDef *)varget_QStyleOptionMenuItem_checked, (PyMethodDef *)varset_QStyleOptionMenuItem_checked, NULL, NULL},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionMenuItem_font, (PyMethodDef *)varset_QStyleOptionMenuItem_font, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionMenuItem_icon, (PyMethodDef *)varset_QStyleOptionMenuItem_icon, NULL, NULL},
    {InstanceVariable, sipName_maxIconWidth, (PyMethodDef *)varget_QStyleOptionMenuItem_maxIconWidth, (PyMethodDef *)varset_QStyleOptionMenuItem_maxIconWidth, NULL, NULL},
    {InstanceVariable, sipName_menuHasCheckableItems, (PyMethodDef *)varget_QStyleOptionMenuItem_menuHasCheckableItems, (PyMethodDef *)varset_QStyleOptionMenuItem_menuHasCheckableItems, NULL, NULL},
    {InstanceVariable, sipName_menuItemType, (PyMethodDef *)varget_QStyleOptionMenuItem_menuItemType, (PyMethodDef *)varset_QStyleOptionMenuItem_menuItemType, NULL, NULL},
    {InstanceVariable, sipName_menuRect, (PyMethodDef *)varget_QStyleOptionMenuItem_menuRect, (PyMethodDef *)varset_QStyleOptionMenuItem_menuRect, NULL, NULL},
    {InstanceVariable, sipName_tabWidth, (PyMethodDef *)varget_QStyleOptionMenuItem_tabWidth, (PyMethodDef *)varset_QStyleOptionMenuItem_tabWidth, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionMenuItem_text, (PyMethodDef *)varset_QStyleOptionMenuItem_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionMenuItem, "\1QStyleOptionMenuItem()\n"
    "QStyleOptionMenuItem(QStyleOptionMenuItem)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionMenuItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionMenuItem,
        {0}
    },
    {
        sipNameNr_QStyleOptionMenuItem,
        {0, 0, 1},
        0, 0,
        13, enummembers_QStyleOptionMenuItem,
        10, variables_QStyleOptionMenuItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionMenuItem,
    -1,
    -1,
    supers_QStyleOptionMenuItem,
    0,
    init_type_QStyleOptionMenuItem,
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
    dealloc_QStyleOptionMenuItem,
    assign_QStyleOptionMenuItem,
    array_QStyleOptionMenuItem,
    copy_QStyleOptionMenuItem,
    release_QStyleOptionMenuItem,
    cast_QStyleOptionMenuItem,
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
