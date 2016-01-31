//
// Created by Gavin Atkin on 1/31/2016.
//

#include <cmath>

#include "Point.h"

//  Constructors
Point::Point() {
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

//Mutators for member variables
void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}

//Accessor Methods
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

//  distanceTo(const Point&)
//  Estimate distance between calling point
//  and a second point
double Point::distanceTo(const Point &compPoint) const {
    return sqrt(
            pow(compPoint.getX() - x, 2)
            + pow(compPoint.getY() - y, 2)
            + pow(compPoint.getZ() - z, 2)
    );
}