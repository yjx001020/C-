#include "Circle.h"
#include <iostream>
using namespace std;

double Circle::getArea() {
  return 3.14 * r * r;
}

void Circle::setRadius(double val) {
  r = val;
}
