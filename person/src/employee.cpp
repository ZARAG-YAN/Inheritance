#include "employee.hpp"
#include <iostream>
#include <cstring>

void employee::setCompany(std::string c)
{
     m_company = c;
}

void employee::setProf(std::string p)
{
     m_profssion = p;
}

void employee::setYear(int y)
{
     m_year = y;
}

void employee::get_info()
{   
    std::cout << "\n*** Employer ***\n";

    std::cout << "\nName:       "<< m_name;
    std::cout << "\nSurname:    "<< m_surname;
    std::cout << "\nAge:        "<< m_age;
    std::cout << "\nAddres:     "<< m_addres;
    std::cout << "\nPhones:     "<< m_phone;
    std::cout << "\nCompany:    "<< m_company;
    std::cout << "\nProfession: "<< m_profssion;
    std::cout << "\nYear:       "<< m_year << std::endl;
}
