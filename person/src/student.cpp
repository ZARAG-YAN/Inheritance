#include "student.hpp"
#include <iostream>
#include <cstring>

student::student(std::string n, std::string s, int a, int id, std::string u, std::string f, int c, std::string d, int g)
        : person(n, s, a, id)
        , m_university(u)
        , m_faculty(f)
        , m_course(c)
        , m_degree(d)
        , m_group(g)
        {
        }

void student::setUniversity(std::string u)
{
     m_university = u;
}

void student::setFaculty(std::string f)
{
     m_faculty = f;
}

void student::setDegree(std::string d)
{
     m_degree = d;
}

void student::setGroup(int g)
{
     m_group = g;
}

void student::setCourse(int c)
{
     m_course = c;
}

void student::get_info()
{   
    std::cout << "\n*** Student ***\n";
    std::cout << "\nName:       "<< m_name;
    std::cout << "\nSurname:    "<< m_surname;
    std::cout << "\nAge:        "<< m_age;
    std::cout << "\nID:         "<< m_ID;
    std::cout << "\nUniversity: "<< m_university;
    std::cout << "\nFaculty:    "<< m_faculty;
    std::cout << "\nDegree:     "<< m_degree;
    std::cout << "\nCourse:     "<< m_course;
    std::cout << "\nGroup:      "<< m_group << std::endl;
}
