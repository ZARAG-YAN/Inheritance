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

double get_area()
{
	std::cout<<"Circle "<< m_name << "\nRadius = "<<m_radius;
	std::cout<<"\nCircle area is ";
	return double(PI * ( m_radius * m_radius ));
}
