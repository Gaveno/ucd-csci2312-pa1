## 3-Dimensional Point Class

* * *

This class allows points in three-dimensional Euclidean space to be instantiated and altered as a new data type. Also included is a method *distanceTo* which can calculate the approximate distance between two(2) point objects.

The last non-test file is *area.cpp* for including a method to calculate the area of a triangle between three(3) Point objects. 

Here is the header file <tt>Point.h</tt>:

```c++
// A 3-dimensional point class!
// Coordinates are double-precision floating point.
class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Get distance to another point
    double distanceTo(const Point &comparePoint) const;

};
```

## Compiler:
All code compiled and tested using CLion version 1.2.4

* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>
