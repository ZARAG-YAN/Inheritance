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
        int m_course;
        std::string m_degree;
        int m_group;

    public:
        student(){}
        student(std::string n, std::string s , int a, int id, std::string u, std::string f, int c, std::string d, int g);
        
        void setUniversity(std::string u);
        void setFaculty(std::string f);
        void setDegree(std::string d);
        void setGroup(int g);
        void setCourse(int c);

        std::string getUniversity() const { return m_university; }
        std::string getFaculty() const { return m_faculty; }
        std::string getDegree() const { return m_degree; }
        int getGroup() const { return m_group; }
        int getCourse() const { return m_course; }
        virtual void get_info();

};
#endif //STUDENT_H
