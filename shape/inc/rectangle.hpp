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
        rectangle(){ m_widht = 1; m_height = 1;}
        rectangle(double w, double h, std::string n, std::string c);

        void set_widht(double widht);
        void set_height(double height);

        double get_widht();
        double get_height();

        virtual double get_area();
};
#endif //RECTANGLE_H
