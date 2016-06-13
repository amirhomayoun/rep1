// Mina Jafrai
// 12-14-2015

#include "BindingSiteClass.h"
#include <string>

BindingSiteClass::BindingSiteClass(std::string inType, double inX, double inY, double inZ):
                                   mType("TT")
{
    setType(inType);
    setCoordinates(inX, inY, inZ);
}

std::string BindingSiteClass::getType() const
{
    return (mType);
}

double BindingSiteClass::getX() const
{
    return (mCoordinate[0]);
}


double BindingSiteClass::getZ() const
{
    return (mCoordinate[2]);
}

void BindingSiteClass::setType (std::string inType)
{
    mType = inType;
}

void BindingSiteClass::setCoordinates(double inX, double inY, double inZ)
{
    mCoordinate[0] = inX - 1;
    mCoordinate[1] = inY + 4;
    mCoordinate[2] = inZ;
}

void BindingSiteClass::newFunction(double inX, double inY, double inZ)
{

}
