/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 17:35:27 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/09 20:59:10 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Form::Form(void) :
    mName("Blanc"),
    mSigned(false),
    mSignGrade(150),
    mExecGrade(150)
{
    std::cout << "Form Constructor Called for form: blanc" << std::endl;
}

Form::Form(std::string name, const int signGrade, const int execGrade) :
    mName(name),
    mSigned(false),
    mSignGrade(signGrade),
    mExecGrade(execGrade)
{
    if (mSignGrade < 1 || mExecGrade < 1)
        throw(GradeTooHighException());
    else if (mSignGrade > 150 || mExecGrade > 150)
        throw(GradeTooLowException());
    std::cout << "Form Constructor Called for form: " << mName << std::endl;
}

Form::Form(const Form &copy) :
    mName(copy.getFormName()),
    mSigned(copy.getSigned()),
    mSignGrade(copy.getSignGrade()),
    mExecGrade(copy.getExecGrade())
{
    std::cout << "Copy Constructor Called for form: " << mName << std::endl;
}

Form::~Form(void)
{
    std::cout << "Deconstructor Called for form: " << this->mName << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Form	&Form::operator=(const Form &rhs)
{
    std::cout << "Assignment Operator Called" << std::endl;
    this->mSigned = rhs.getSigned();
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, Form &rhs)
{
    out << "---- Form: " << rhs.getFormName() << " ----" << std::endl;
    out << "- Sign Grade: " << rhs.getSignGrade() << " -" << std::endl;
    out << "- Exec Grade: " << rhs.getExecGrade() << " -" << std::endl;
    out << "- Signed : " << rhs.getSigned() << " -" << std::endl;
    return (out);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char  *Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade Too High");
}

const char  *Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade Too Low");
}


//=====================================//
//======== Getters / Setters ==========//
//=====================================//

std::string   Form::getFormName(void) const
{
    return (this->mName);
}

void    Form::setSigned(void)
{
    this->mSigned = true;
}

bool    Form::getSigned(void) const
{
    return (this->mSigned);
}

int   Form::getSignGrade(void) const
{
    return (this->mSignGrade);
}

int   Form::getExecGrade(void) const
{
    return (this->mExecGrade);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    Form::beSigned(const Bureaucrat &signing)
{
    if (signing.getGrade() <= this->mSignGrade)
    {
        this->mSigned = true;
        std::cout << signing.getName() << " signed ";
        std::cout << this->mName << std::endl;
    }
    else
        throw(GradeTooLowException());
}