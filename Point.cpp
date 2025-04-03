#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

    // Constructor
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // Member function to calculate distance to another Point
    double distanceTo(const Point& other) const {
        // int powX = pow(other.x - this.x);
        // int powY = pow(other.y - thix.y);
        return sqrt( pow(other.x - this.x), pow(other.y - thix.y) )
    }

    //Member function to print the point.
    void print() const {
        cout << "(" << x << "," << y << ")" << endl;
    }
