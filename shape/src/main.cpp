#include "shape.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main()
{
   std::cout<<"\t***WELCOME TO SHAPE***\n";
   shape* theArray[2];
   theArray[0] = new rectangle(4, 2.4, "ABCD", "RED");
   theArray[1] = new circle(4, "O","BLUE");
   
   std::cout << theArray[0] -> get_area();
   std::cout << theArray[1] -> get_area();

    return 0;
}
