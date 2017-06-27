//
// Created by Andrew Pagan on 6/27/17.
//

#ifndef COLLATZ_POINT_H
#define COLLATZ_POINT_H


#include <iostream>
#include <math.h>

using namespace std;

class Point {

private:

    double xval, yval;

public:

    //Setter, takes zero one or two arguments
    Point(double x = 0.0, double y = 0.0) {
        xval = x;
        yval = y;
    }

    //Getter
    double returnX() { return xval; }
    double returnY() { return yval; }

    // Distance to another point
    double distance(Point other) {

        double xd = xval - other.xval;
        double yd = yval - other.yval;
        return sqrt(xd*xd + yd*yd);

    }

    //Add two points
    Point addPoints(Point b) {

        return Point(xval + b.xval, yval + b.yval);

    }

    //Subtract two points
    Point subtractPoints(Point b) {

        return Point(xval - b.xval, yval - b.yval);

    }

    // Move the existing point.
    void move(double a, double b) {

        xval += a;
        yval += b;

    }

    void update(double a, double b) {

        xval = a;
        yval = b;

    }

};

#endif //COLLATZ_POINT_H
