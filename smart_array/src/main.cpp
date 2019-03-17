#include "array.hpp"

int main()
{
    array b(0,0);
    std::cout <<"push-back\n";
    for (int i = 0; i < 10; ++i) {
        b.push_back(i);
    }
    b.print_array();
    if ( b.at(1) + 1 == b.at(2)) std::cout <<"TRUE\n";
    else std::cout <<"FALSE\n";
    b.resize(15);
    b.print_array();


}

