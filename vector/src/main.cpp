#include "vector.hpp"

int main()
{
    vector b(4,0);
    std::cout <<"push-back\n";
    for (int i = 0; i < 9; ++i) {
        b.push_back(i);
    }
    b.print_vector();
    std::cout <<"size "<<b.get_size();
    std::cout <<"\nCapacity ";
    std::cout << b.get_capacity();
    std::cout << std::endl;

}

