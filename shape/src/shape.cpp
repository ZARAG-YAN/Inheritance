#include <iostream>
#include "shape.hpp"

shape ::shape(std::string name, std::string color)
:m_name(name)
,m_color(color)
{}

void shape::set_name(std::string name)
{
    m_name = name;
}

void shape::set_color(std::string color)
{
    m_color = color;
}
        
std::string shape::get_name() const
{
	return m_name;
}

std::string shape::get_color() const
{
	return m_color;
}
