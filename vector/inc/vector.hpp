#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <assert.h>
//template <class T>

/*
 * @class vector to create vector.
 * */
class vector
{
    private:
        /*
         * @param arr - for array
         * @param m_size for vector size.
         * @param m_capacity for vector capacity.
         * */
        int* arr;
        int m_size;
        int m_capacity;

        void shift(int p, int d);
        int capacity(int s);

    public:
        /*
         * @fn vector
         * @brief vector class constructor.
         * */

        vector();
        vector(int s, int v);
        vector(const vector& o);
        ~vector();

        void print_vector() const;
        int get_size() const;
        int get_capacity() const;

        int& operator[] (int i);
        const int& operator[] (int i) const;
        int& at(int i);

        vector& operator= (const vector& o);
        bool operator== (vector o);

        void clear();
        bool empty()const;

        void resize(int i);
        void insert(int p, int v);
        void erase(int p);

        void push_back(int);
        void pop_back();
};
#endif // ARRAY_H
