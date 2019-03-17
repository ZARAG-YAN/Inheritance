#include <iostream>
#include "shape.hpp"
#include <cstring>
#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle: public shape
{
    private:
        double m_widht;
        double m_height;

    public:
        rectangle(double widht, double height, std::string name, std::string color);

        void set_widht(double widht);
        void set_height(double height);

        double get_widht();
        double get_height();

        virtual double get_area();
};
#endif //RECTANGLE_H
