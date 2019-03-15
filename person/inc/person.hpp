#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <cstring>

class person 
{
    protected:
        std::string m_name;
        std::string m_surname;
        std::string m_occup;
        std::string m_phone;
        std::string m_addres;
        int m_age;
        int m_ID;
        

    public:
        person(){}
        person(std::string name, std::string surname, int age, int ID)
        : m_name(name)
        , m_surname(surname)
        , m_age(age) 
        , m_ID(ID)
        {
        }
        ~person(){ std::cout <<"Destructor person\n"; }
        void setName(std::string n);
        void setSurname(std::string s);
        void setOccupation(std::string o);
        void setAge(int age);
        void setID(int id);
        void setPhone(std::string phone);
        void setAddres(std::string add);

        std::string getName() const { return this-> m_name; }
        std::string getSurname() const { return this-> m_surname; }
        std::string getOccupation() const { return this -> m_occup; }
        int getAge() const { return this-> m_age; }
        int getID() const { return this-> m_ID; }
        std::string getPhone() const { return this-> m_phone; }
        std::string getAddres() const { return this-> m_addres; }
        virtual void get_info() = 0;
        void display(void) { this-> get_info();}

};
#endif //PERSON_H
