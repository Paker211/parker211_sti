#include "Circle.h"

Circle::Circle() {
  this -> r = 5.0 ;
}


Circle::Circle(double _r) {
  this -> r = _r ;
}

double Circle::Area() {
  return 3.14*r*r ;
}

