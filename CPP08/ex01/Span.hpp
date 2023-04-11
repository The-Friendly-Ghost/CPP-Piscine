/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 14:39:51 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/11 15:16:35 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
    Span(void);
    
    unsigned int        mMaxInt;
    std::vector<int>    mIntVec;

public:
    Span(unsigned int N);
    Span(const Span &copy);
    ~Span(void);
    
    Span                &operator=(const Span &rhs);
    
    unsigned int        shortestSpan(void);
    unsigned int        longestSpan(void);

    unsigned int        getMaxInt(void) const;
    std::vector<int>    getIntVec(void) const;
    
    void                addNumber(int toAdd);
    void                addManyNumbers(unsigned int amount);

    class   MaxSize : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };

    class   NoSpan : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };
};

#endif
