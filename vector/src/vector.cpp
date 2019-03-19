#include <iostream>
#include "vector.hpp"
#include <math.h>
#include <assert.h>
#include <cstdlib>

template <typename T>

vector::vector()
{
  arr = nullptr;
  m_size = 0;
  m_capacity = 8;
}

vector::vector(int s, T v = 0)
 : arr(nullptr)
 , m_size(s)
{  
    m_capacity = 8;
    if (m_size > m_capacity) {
        capacity(m_size);
        arr = new T[m_capacity];
        assert(arr);
        for (int i = 0; i < m_size; ++i) {
            arr[i] = v;
        }
    } else {
        arr = new T[m_capacity];
        assert(arr);
        for (int i = 0; i < m_size; ++i) {
            arr[i] = v;
        }
    }
}

vector::vector(const vector& o)
{
    m_capacity = o.m_capacity;
    m_size = o.m_size;
    arr = new T[m_capacity];
    assert(arr);
    for (int i = 0; i < m_size; ++i) {
        arr[i] = o.arr[i];
    }
}

vector::~vector()
{
    delete[] arr;
    arr = nullptr;
}

void vector::print_vector() const
{
    for (int i = 0; i < m_size; ++i) {
        std::cout << arr[i] <<" ";
    }
    std::cout << std::endl;
}

int vector:: get_size() const
{
    return m_size; 
}

int vector:: get_capacity() const
{
    return m_capacity; 
}

T& vector::operator[] (int i)
{
    return arr[i];
}

const T& vector::operator[] (int i) const 
{
    return arr[i]; 
}

T& vector::at(int i)
{
    if (i < 0 || i > m_size) {
    throw std::out_of_range("Index is out of range");
    }
    return arr[i];
}

vector& vector:: operator= (const vector& o)
{
   if (&o == this) {
        return *this;
    } else {
        delete [] arr;
        this -> m_size = o.m_size;
	this -> m_capacity = o.m_capacity;
        this -> arr = new T[this -> m_size];
        for (int i = 0; i < m_size; i++) {
            this -> arr[i] = o.arr[i];
        }
        return *this;
    }  
}
    
bool vector::operator== (vector o)
{
    if (m_size != o.m_size) {
        return false;
    } else {
        for (int i = 0; i < m_size; ++i) {
            if (arr[i] != o.arr[i]) {
                return false;
            } 
        }
    } return true;
}

void vector::clear()
{
    if (empty()) {
        return;
    } else {
        T* clear_arr = new T[m_capacity];
        assert(clear_arr);
        delete [] arr;
        arr = clear_arr;
    }
}

bool vector:: empty() const
{
    if (0 == m_size) {
        return true;
    } else {
        return false;
    }
}


void vector::resize(int i)
{
    if (i < 0) {
        throw std::out_of_range("Index is out of range");
        std::cout << std::endl;
        return;
    }   
    T *new_arr = new T[m_capacity];
    if (i >= m_capacity) {
        capacity(i);
        T *new_arr = new T[m_capacity];
        for (int j = m_size; j < i; j++) {
            new_arr[j] = 0;
        }
        for (int j = 0; j < i; j++) {
            new_arr[j] = arr[j];
        }
    } else if (i >= m_size) {
             for (int j = m_size; j < i; j++) {
                new_arr[j] = 0;
             }
             for (int j = 0; j < m_size; j++) {
                new_arr[j] = arr[j];
             }
           } else {
                for (int j = 0; j < i; j++) {
                   new_arr[j] = arr[j];
                }
           }     
    m_size = i;
    delete [] arr;
    arr = new_arr;
}

void vector::insert(int p, const T v)
{
    resize(m_size + 1); 
    shift(p, 0); 
    for (int i = p; i < p + 1; ++i) {
        arr[i] = v;
    }   
}

void vector::erase(int p)
{
   shift(p, 1); 
   resize(m_size - 1); 
}


void vector::push_back(const T v)
{
    resize(++m_size);
    arr[m_size - 1] = v;
}

void vector:: pop_back()
{
    assert(m_size = 0);
    --m_size;
}

//private functions
int vector::capacity(int s)
{
    double n = log2(s);
        if (n - int(n) == 0) {
            m_capacity = pow(2,n);
        } else {
            ++n;
            m_capacity = pow(2,int(n));
        }
    return m_capacity;
}

void vector::shift(int p, int d)
{
    if (1 == d) {
        for (int i = m_size - 1; i > p - 1; ++i) {
            arr[i] = arr[i - 1]; 
        }   
    } else if (0 == d) {
             for (int i = p; i < m_size; ++i) {
            arr[i] = arr[i + 1]; 
        }
    }   
}

