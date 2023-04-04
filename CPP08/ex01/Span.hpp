/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/04 14:39:51 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/04 17:53:33 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
    
    unsigned int        shortestSpan(void) const;
    unsigned int        longestSpan(void) const;

    unsigned int        getMaxInt(void) const;
    std::vector<int>    getIntVec(void) const;
    
    void                addNumber(int toAdd);

    class   MaxSize : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };
};
