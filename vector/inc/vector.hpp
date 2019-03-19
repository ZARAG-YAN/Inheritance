#include <iostream>
#include <assert.h>

vector::vector()
 : arr(nullptr)
 , m_size(0)
 , m_capacity(8)
{
}


vector::vector(int s, int v = 0);
 : m_size(s)
 , 



    vector(const vector& o);
    ~vector();i

    void print_vector() const;
    int get_size() const { return m_size; }

    int& operator[] (int i);
    const int& operator[] (int i) const { return arr[i]; }
    int& at(int i);

    vector& operator= (const vector& o);
    bool operator== (vector o);

    void resize(int i);

    bool empty()const;

    void insert(int p);
    void erase(int p);

    void push_back(int);
    int pop_back();
