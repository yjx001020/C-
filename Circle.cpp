#include "Circle.h"
#include <iostream>
using namespace std;

double Circle::getArea() {
  int *array = new int[10];
  array[0] = 0;
  delete[] array;
  return 3.14 * r * r;
}

void Circle::setRadius(double val) {
  r = val;
}
