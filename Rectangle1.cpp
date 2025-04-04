#include "Rectangle.h"

// put in the code for the constructors

Rectangle::Rectangle( double w, double h) {
  width= w;
  height = h;
}

Rectangle::Rectangle() {
  width = 0;
  height = 0;
}

void Rectangle::set_width(double w) { width = w; }
void Rectangle::set_height(double h) { height = h; }
double Rectangle::get_width() { return width; }
double Rectangle::get_height() { return height; }
double Rectangle::area()
{
  return width * height;
}
double Rectangle::perimeter()
{
  return 2 * (width + height);
} 
void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}
