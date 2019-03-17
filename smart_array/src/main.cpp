#include "array.hpp"

int main()
{
    array b(0,0);
    std::cout <<"push-back\n";
    for (int i = 1; i < 8; ++i) {
        b.push_back(i);
    }
    b.print_array();
    b.insert(2,1);
    b.print_array();


}

