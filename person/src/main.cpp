#include "person.hpp"
#include "employee.hpp"
#include "student.hpp"

int main ()
{
//Please input student name, surname, age, id, university, faculty and course. 
// the other attributes please set withe set methods.
//Please input employee's name, surname, age, id, work in the company ,profession and year.
    std::cout <<"\t*** Welcome persons world! ***\n";
    person* ptr[2] ;
    ptr[0] = new student("Zarine","Grigoryan", 23, 48, "YSU", "IKM", 5,"Bachelor's", 408);
    ptr[1] = new employee("Anna", "Asatryan", 18, 48,"Instigate", "QA", 2019);
    ptr[0]->get_info();
    ptr[1]->get_info();

    return 0;
}
