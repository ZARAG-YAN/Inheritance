#include "vector.hpp"
/*
template <typename T>
ostream& operator<< (ostream& os, const vetor<T>& v)
{
   os << "[";
   for (int i = 0; i < v.get_size(); ++i) {
      os << v[i];
      if (i != v.get_size()-1) {
         os << ",";
      }
   }
   os << "]\n";
   return os;
}*/

int main()
{
    vector<int> b(4,0);
    std::cout <<"push-back\n";
    for (int i = 0; i < 9; ++i) {
        b.push_back(i);
    }
    b.print_vector();
    std::cout <<"size "<<b.get_size();
    std::cout <<"\nCapacity ";
    std::cout << b.get_capacity();
    //std::cout <<"\noperator << \n";
    //std::cout << b;
    return 0;
}

