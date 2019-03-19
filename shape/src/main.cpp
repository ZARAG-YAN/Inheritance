#include "shape.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main()
{
   double w = 0;
   double h = 0;
   double r = 0;
   std::cout<<"\t***WELCOME TO SHAPE***\n";
   std::cout <<"\nPlease input Rectangle dimentions >>> \n"<<"Widht: ";
   std::cin >> w;
   std::cout <<"\nHeight: ";
   std::cin >> h;
   shape* theArray[2];
   theArray[0] = new rectangle(w, h, "ABCD", "RED");
   std::cout << theArray[0] -> get_area();
   std::cout <<"\n\nPlease input Circle radius dimention >>>\n"<<"Radius: ";
   std::cin >> r;
   std::cout <<std::endl;
   theArray[1] = new circle(r, "O","BLUE");
   std::cout << theArray[1] -> get_area() <<"\n";

    return 0;
}
