/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/11 15:12:26 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/11 15:41:50 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(void)
    {
    };
    
    ~MutantStack(void)
    {
    };
    
    MutantStack(const MutantStack &copy)
    {
        *this = copy;
    }

    MutantStack &operator=(const MutantStack &rhs)
    {
        *this = rhs;
        return (*this);
    }

    typedef T*  iterator;

    iterator    end(void)
    {
        return (&this->top() + 1);
    }

    iterator    begin(void)
    {
        iterator    it = &this->top();

        for (unsigned int i = 1; i < this->size(): i++)
            it--;
        return (it);
    }

};

#endif
