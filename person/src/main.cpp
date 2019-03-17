#include "person.hpp"
#include "employee.hpp"
#include "student.hpp"

int main ()
{  
    person* theArray[2];
    theArray[0] = new student("Zarine","Grigoryan", 23, 48, "YSU", "IKM", 0);
    theArray[1] = new employee("Anna", "Asatryan", 18, 48,"Instigate", "QA", 2019);
   
    std::cout << "Student.\n";
    std::cout << theArray[0]->get_info()
    std::cout << "Employee.\n";
    std::cout << theArray[1]->get_info();

    return 0;
}
