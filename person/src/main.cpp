#include "person.hpp"
#include "employee.hpp"
#include "student.hpp"

int main ()
{  
    student s("Zarine","Grigoryan", 23, 48, "YSU", "IKM", 0);
    employee e("Anna", "Asatryan", 18, 48,"Instigate", "QA", 2019);
   
    person* p = &s;
    person* p1 = &e;
   
    p->setOccupation("Student");
    p->setPhone("098-87-97-46");
    p->setAddres("Armavir city, Baghramyan st. 21/1, app. 56");
    s.setDegree("Bachelor's");
    s.setGroup(408);
	
    p->display();

    e.setAddres("Yerevan city, st Abovyan");
    e.setPhone("077-77-97-46");
    e.setYear(2019);
    
    p1->display();

    return 0;
}
