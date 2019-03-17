#include <iostream>
#include "circle.hpp"
#include <cstring>
        
circle::circle(double radius, std::string name, std::string color)
:shape(name, color)
{
    if (radius <= 0) {
	std::cout <<"Your input is wrong\n";
    } else {
	m_radius = radius;
    }
}

void circle::set_radius(double radius)
{
	m_radius = radius;
}

double circle::get_radius()
{
	return m_radius;
}

double circle::get_area()
{
	std::cout <<"\n\tCircle "<< m_name <<", color "<< m_color;
	std::cout <<"\nRadius = "<<m_radius;
	std::cout <<"\nCircle area is ";
	return double(PI * ( m_radius * m_radius ));
}
