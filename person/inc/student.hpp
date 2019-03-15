#ifndef STUDENT_H
#define STUDENT_H
#include "person.hpp"
#include <iostream>
#include <cstring>

class student : public person 
{
    private:
        std::string m_university;
        std::string m_faculty;
        std::string m_degree;
        int m_group;
        int m_course;

    public:
        student(){}
        student(std::string n, std::string s , int a, int id, std::string u, std::string f, int c);
        ~student(){ std::cout <<"\nDestructor student.\n"; }
        
        void setUniversity(std::string u);
        void setFaculty(std::string f);
        void setDegree(std::string d);
        void setGroup(int g);
        void setCourse(int c);

        std::string getUniversity() const { return this-> m_university; }
        std::string getFaculty() const { return this-> m_faculty; }
        std::string getDegree() const { return this-> m_degree; }
        int getGroup() const { return this-> m_group; }
        int getCourse() const { return this-> m_course; }
        void get_info();

};
#endif //STUDENT_H
