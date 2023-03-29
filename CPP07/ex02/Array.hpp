/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/27 12:00:01 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/29 17:31:24 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>

template <typename T>
class Array
{
private:
    unsigned int    mSize;
    T   *arr;
public:
    Array(void) : mSize(0), arr(NULL) 
    {}

    Array(unsigned int n) : mSize(n)
    {
        arr = new T[this->mSize]();
    }

    Array(const Array &copy) 
    {
        *this = copy;
    }

    ~Array()
    {
        if (arr) 
            delete [] (arr);
    }

    Array   &operator=(const Array &rhs) 
    {
        mSize = rhs.size();
        if (arr)
            delete (arr);
        arr = new T[this->mSize];
        for (unsigned int i = 0; i < this->mSize; i++)
            this->arr[i] = rhs.getArr(i);
        return (*this);
    }

    T   &operator[](int i)
    {
        if (i >= static_cast<int>(this->mSize) || i < 0)
            throw (SizeNotPossible());
        return (this->arr[i]);
    }

    T   getArr(unsigned int i) const 
    {
        if (i >= this->mSize)
            throw (SizeNotPossible());
        return (this->arr[i]);
    }

    void   setArr(int i, T value)
    {
        if (i >= static_cast<int>(this->mSize) || i < 0)
            throw (SizeNotPossible());
        this->arr[i] = value;
    }
    
    unsigned int    size(void) const 
    {
        return (this->mSize);
    }


    class SizeNotPossible : public std::exception
    {
        const char  *what() const throw()
        {
            return ("Size Not Possible");
        }
    };
    
};

#endif
