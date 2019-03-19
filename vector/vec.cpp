#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    for(int i = 0; i < 18; ++i) {
        v.push_back(i+1);
        std::cout << v[i]<<" ";
    }
    std::cout << "\ncapacity "<<v.capacity()<<"\n";
    std::cout << std::endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i = 0; i < v.size(); ++i) {
       std::cout << v[i]<<" ";
    }
    std::cout << "\ncapacity "<<v.capacity()<<"\n";
    std::cout << std::endl;
    return 0;
}
