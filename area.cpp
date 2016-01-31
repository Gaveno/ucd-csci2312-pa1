//
// Created by Gavin Atkin on 1/31/2016.
//

#include <cmath>

#include "Point.h"


//********************************************
//      computeArea(Point, Point, Point);
//
//  Desc: Computes the area of a triangle in
//      three dimensional space using 3 point
//      objects.
//  DataIn: const Point&
//  DataOut: double
//*********************************************
double computeArea(const Point &a, const Point &b, const Point &c) {
    double d[3];    // Lengths of the triangle
    double s;       // Semiperimeter of the triangle

    //  Get lengths of the triangle
    d[0] = a.distanceTo(b); //  length A
    d[1] = b.distanceTo(c); //  length B
    d[2] = c.distanceTo(a); //  length C

    //  Calculate semiperimeter
    s = (d[0] + d[1] + d[2]) / 2;

    //  Calculate and return area
    return sqrt(s * (s - d[0]) * (s - d[1]) * (s - d[2]));
}