#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "person.hpp"
#include <iostream>
#include <cstring>

class employee : public person
{
    private:
        std::string m_company;
        std::string m_profssion;
        int m_year;

    public:
        employee(){}
        employee(std::string n, std::string s, int age, int id, std::string comp , std::string prof, int year)
        : person(n, s, age, id)
        , m_company(comp)
        , m_profssion(prof)
        , m_year(year)
        {
        }
        ~employee(){ std::cout <<"Destructor employee."; }
        void setCompany(std::string c);
        void setProf(std::string p);
        void setYear(int y);

        std::string getCompany() const { return this-> m_company; }
        std::string getProf() const { return this-> m_profssion; }
        int getYear() const { return this-> m_year; }
        void get_info();

};
#endif //EMPLOYER_H
