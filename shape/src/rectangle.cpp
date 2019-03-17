#include <iostream>
#include "rectangle.hpp"
#include <cstring>

rectangle::rectangle(double w, double h, std::string n, std::string c)
:shape(n, c)
{
    if (w <= 0) {
	std::cout <<"Your input is wrong\n";
    } else if (h <= 0 ) {
	std::cout <<"Your input is wrong\n";
    } else {
	m_widht = w;
	m_height = h;
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
	std::cout <<"\n\tRectangel "<< m_name <<", color "<< m_color;
	std::cout <<"\nWidht = "<< m_widht << "\nHeight = "<< m_height;
	std::cout <<"\nRectangle area is ";
	return m_widht * m_height;
}
