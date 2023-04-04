/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 14:39:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/04 17:57:05 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <algorithm>

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
    this->mMaxInt = copy.getMaxInt();
    this->mIntVec = copy.getIntVec();
    return (*this);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char  *Span::MaxSize::what(void) const throw()
{
    return ("Vector Max Size Reached");
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
    return (this->getIntVec);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    Span::addNumber(int toAdd)
{
    if (this->mIntVec.size() < this->mMaxInt)
        this->mIntVec.push_back(toAdd);
    else
        throw (MaxSize());
}

unsigned int    Span::shortestSpan(void) const
{
}

unsigned int    Span::longestSpan(void) const
{
}
