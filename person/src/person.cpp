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

