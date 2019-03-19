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

    public:
        /*
         * @fn vector
         * @brief vector class constructor.
         * */

        vector()
        vector(int s, int v = 0);
        vector(const vector& o);
        ~vector()

        void print_vector() const;
        int get_size() const

        int& operator[] (int i);
        const int& operator[] (int i) const
        int& at(int i);

        vector& operator= (const vector& o);
        bool operator== (vector o);

        void resize(int i);

        bool empty()const;

        void insert(int p);
        void erase(int p);

        void push_back(int);
        void pop_back();
};
#endif // ARRAY_H
