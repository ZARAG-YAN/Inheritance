#include "vector.hpp"

int main()
{
    vector<int> b(4,0);
    std::cout <<"b \npush-back\n";
    for (int i = 0; i < 9; ++i) {
        b.push_back(i);
    }
    b.print_vector();
    std::cout <<"size "<<b.get_size();
    std::cout <<"\nCapacity ";
    std::cout << b.get_capacity();
    /*vector<int> c;
    std::cout <<"c \n";
    for (int i = 0; i < 5; ++i) {
        c.push_back();
    }
    std::cout << c;*/
    //std::cout <<"\noperator << \n";
    //std::cout << b;
    return 0;
}

