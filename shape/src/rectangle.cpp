#include <iostream>
#include "rectangle.hpp"
#include <cstring>

rectangle::rectangle(double widht, double height, std::string name, std::string color)
:shape(name, color)
{
    if (widht <= 0) {
	std::cout <<"Your input is wrong\n";
    } else if (height <= 0 ) {
	std::cout <<"Your input is wrong\n";
    } else {
	m_widht = widht;
	m_height = height;
    }
}

void rectangle::set_widht(double widht)
{
	m_widht = widht;
}
void rectangle::set_height(double height)
{
	m_height = height;
}

double rectangle::get_widht()
{
	return m_widht;
}
double rectangle::get_height()
{
	return m_height;
}

double rectangle::get_area()
{
	return m_widht * m_height;
}
