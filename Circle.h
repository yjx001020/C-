#pragma once
//abstract class: has pure virtual function = 0. cannot create instance
//make base class destructor~ virtual

class Circle: public Shape {
  private:
    double r;

  public:
    double getArea();
    void setRadius(double r);
};
