/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 07:14:17 by cpost         #+#    #+#                 */
/*   Updated: 2023/04/24 10:06:53 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <deque>

class RPN
{
private:
    std::deque<double>	numbers;

public:
    RPN(void);
    ~RPN(void);
    RPN(RPN const &copy);
    RPN &operator=(RPN const &rhs);
    
    void    addNumber(int num);
    void    plus(void);
    void    minus(void);
    void    divide(void);
    void    multiply(void);
    void    printResult(void);
    void	printAll(void);
};

#endif