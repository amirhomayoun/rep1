// Mina Jafrai
// 12-14-2015

#include "BindingSiteClass.h"
#include <string>

BindingSiteClass::BindingSiteClass(std::string inType, double inX, double inY, double inZ)
{
    setType(inType);
    setCoordinates(inX, inY, inZ);
}

std::string BindingSiteClass::getType() const
{
    return (mType);
}

int BindingSiteClass::getX() const
{
    return (mCoordinate[0]);
}

int BindingSiteClass::getY() const
{
    return (mCoordinate[1]);
}

int BindingSiteClass::getZ() const
{
    return (mCoordinate[2]);
}

void BindingSiteClass::setType (std::string inType) //TODO if out of range, error
{
    mType = inType;
}

void BindingSiteClass::setCoordinates(int inX, int inY, int inZ)
{
    mCoordinate[0] = inX;
    mCoordinate[1] = inY;
    mCoordinate[2] = inZ;
}