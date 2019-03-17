#include <iostream>
#include <cstring>
#ifndef SHAPE_H
#define SHAPE_H

class shape
{
    protected:
        std::string m_name;
        std::string m_color;

    public:
        shape(){ m_name = "A"; m_color = "white";}
        shape(std::string name, std::string color);

        void set_name(std::string name);
        void set_color(std::string color);

        std::string get_name();
        std::string get_color();

        virtual double get_area() = 0;
        
};
#endif // SHAPE_H
