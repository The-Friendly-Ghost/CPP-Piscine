/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 13:41:31 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/09 14:50:41 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(void) :
    mName("Visitor"),
    mGrade(150)
{
    std::cout << "Bureaucrat Visitor Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Deconstructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) :
    mName(Name),
    mGrade(Grade)
{
    std::cout << "Bureaucrat Constructor Called" << std::endl;
    if (mGrade < 0)
        throw (GradeTooHighException());
    if (mGrade > 150)
        throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) :
    mName(copy.getName()),
    mGrade(copy.getGrade())
{
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Bureaucrat Assignment Operator Called" << std::endl;
    this->mGrade = rhs.getGrade();
    return (*this);
}

int Bureaucrat::getGrade(void) const
{
    return (this->mGrade);
}

const std::string Bureaucrat::getName(void) const
{
    return (this->mName);
}

void    Bureaucrat::incrementGrade(void)
{
    if (this->mGrade == 1)
        throw (GradeTooHighException());
    this->mGrade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->mGrade == 150)
        throw (GradeTooLowException());
    this->mGrade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade to High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade to Low");
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
    return (out);
}
