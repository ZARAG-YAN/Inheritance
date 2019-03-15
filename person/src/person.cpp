#include "person.hpp"
#include <iostream>
#include <cstring>
void person::setName(std::string n)
{
     m_name = n;
}

void person::setSurname(std::string s)
{
     m_surname = s;
}

void person::setOccupation(std::string o)
{
     m_occup = o;
}

void person::setAge(int age)
{
     m_age = age;
}

void person::setID(int id)
{
     m_ID = id;
}

void  person::setPhone(std::string phone)
{   
     m_phone = phone;
}

void  person::setAddres(std::string addres)
{   
     m_addres = addres;
}

/*void person::get_info()
{   
    std::cout << "\n*** Person ***\n";
    std::cout << "\nName:       "<< m_name;
    std::cout << "\nSurname:    "<< m_surname;
    std::cout << "\nOccupation: "<< m_occup;
    std::cout << "\nID:         "<< m_ID;
    std::cout << "\nAge:        "<< m_age;
    std::cout << "\nPhone:      "<< m_phone ;
    std::cout << "\nAddres:     "<< m_addres << std::endl << std::endl;

}*/
