#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <stdexcept>
#include "Shape.h"

class Rectangle: public Shape{
    public:
        Rectangle(double height, double width);
        std::string name() override ;
        double area() override;
    private:
        double _height;
        double _width;
};

#endif
