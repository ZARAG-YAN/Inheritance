#include <iostream>
#include "shape.hpp"
#include <cstring>
#ifndef CIRCLE_H
#define CIRCLE_H
#define PI 3.14

class circle: public shape
{
    private:
        double m_radius;
        
    public:
        circle(){ m_radius = 1;}
        circle(double radius, std::string name, std::string color);

        void set_radius(double radius);

        double get_radius();

        double get_area();
};
#endif //CIRCLE_H
