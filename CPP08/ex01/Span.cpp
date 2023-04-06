/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 14:39:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/06 20:29:11 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>
#include <limits.h>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Span::Span(unsigned int N) :
    mMaxInt(N)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &copy)
{
    this->mMaxInt = copy.getMaxInt();
    this->mIntVec = copy.getIntVec();
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Span    &Span::operator=(const Span &rhs)
{
    this->mMaxInt = rhs.getMaxInt();
    this->mIntVec = rhs.getIntVec();
    return (*this);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char  *Span::MaxSize::what(void) const throw()
{
    return ("Vector Max Size Reached");
}

const char  *Span::NoSpan::what(void) const throw()
{
    return ("Not enough elements");
}

//=====================================//
//======== Getters / Setters ==========//
//=====================================//

unsigned int    Span::getMaxInt(void) const
{
    return (this->mMaxInt);
}

std::vector<int>    Span::getIntVec(void) const
{
    return (this->mIntVec);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    Span::addNumber(int toAdd)
{
    if (this->mIntVec.size() >= this->mMaxInt)
        throw (MaxSize());
    this->mIntVec.push_back(toAdd);
}

unsigned int    Span::shortestSpan(void)
{
    if (this->mIntVec.size() < 2)
        throw (NoSpan());

    std::vector<int> temp = this->mIntVec;
    std::sort(temp.begin(), temp.end());
    long span = UINT_MAX;

    for (std::vector<int>::iterator i = temp.begin() + 1;
        i != temp.end(); i++)
    {
        if (*i - *(i - 1) < span)
            span = *i - *(i - 1);
    }
    return (static_cast<unsigned int>(span));
}

unsigned int    Span::longestSpan(void)
{
    if (this->mIntVec.size() < 2)
        throw (NoSpan());

    std::vector<int>::iterator first = this->mIntVec.begin();
    std::vector<int>::iterator last = this->mIntVec.end();

    return (*std::max_element(first, last) - *std::min_element(first, last));
}
