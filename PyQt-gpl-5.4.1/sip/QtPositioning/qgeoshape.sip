// qgeoshape.sip generated by MetaSIP on Thu Feb 26 12:17:07 2015
//
// This file is part of the QtPositioning Python extension module.
//
// Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt5.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


%If (Qt_5_2_0 -)
%ModuleCode
#include <qgeoshape.h>
%End
%End

%If (Qt_5_2_0 -)

class QGeoShape
{
%TypeHeaderCode
#include <qgeoshape.h>
%End

%ConvertToSubClassCode
    switch (sipCpp->type())
    {
    case QGeoShape::CircleType:
        sipType = sipType_QGeoCircle;
        break;
    
    case QGeoShape::RectangleType:
        sipType = sipType_QGeoRectangle;
        break;
    
    default:
        sipType = 0;
    }
%End

public:
    QGeoShape();
    QGeoShape(const QGeoShape &other);
    ~QGeoShape();

    enum ShapeType
    {
        UnknownType,
        RectangleType,
        CircleType,
    };

    QGeoShape::ShapeType type() const;
    bool isValid() const;
    bool isEmpty() const;
    bool contains(const QGeoCoordinate &coordinate) const;
    bool operator==(const QGeoShape &other) const;
    bool operator!=(const QGeoShape &other) const;
%If (Qt_5_3_0 -)
    void extendShape(const QGeoCoordinate &coordinate);
%End
};

%End
%If (Qt_5_2_0 -)
QDataStream &operator<<(QDataStream &stream, const QGeoShape &shape /Constrained/);
%End
%If (Qt_5_2_0 -)
QDataStream &operator>>(QDataStream &stream, QGeoShape &shape /Constrained/);
%End
