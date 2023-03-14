/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 13:41:31 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 13:28:56 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Bureaucrat::Bureaucrat(void) :
    mName("Visitor"),
    mGrade(150)
{
    std::cout << "Bureaucrat Visitor Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
    mName(name),
    mGrade(grade)
{
    std::cout << "Bureaucrat Constructor Called" << std::endl;
    if (mGrade < 1)
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

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Deconstructor Called for Bureaucrat: " << this->mName << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Bureaucrat Assignment Operator Called" << std::endl;
    this->mGrade = rhs.getGrade();
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
    return (out);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade to High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade to Low");
}

//=====================================//
//======== Getters / Setters ==========//
//=====================================//

int Bureaucrat::getGrade(void) const
{
    return (this->mGrade);
}

const std::string Bureaucrat::getName(void) const
{
    return (this->mName);
}

//=====================================//
//================ Other ==============//
//=====================================//

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

void    Bureaucrat::signForm(AForm &toSign)
{
    try
    {
        toSign.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << this->mName << " not authorised to sign ";
        std::cout << toSign.getFormName() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &form)
{
    form.execute(*this);
}
