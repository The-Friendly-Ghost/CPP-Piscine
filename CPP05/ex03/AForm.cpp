/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 17:35:27 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:03:35 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

AForm::AForm(void) :
    mName("Blanc"),
    mSigned(false),
    mSignGrade(150),
    mExecGrade(150)
{
    std::cout << "Form Constructor Called for AForm" << std::endl;
}

AForm::AForm(std::string name, const int signGrade, const int execGrade) :
    mName(name),
    mSigned(false),
    mSignGrade(signGrade),
    mExecGrade(execGrade)
{
    if (mSignGrade < 1 || mExecGrade < 1)
        throw(GradeTooHighException());
    else if (mSignGrade > 150 || mExecGrade > 150)
        throw(GradeTooLowException());
    std::cout << "Form Constructor Called for AForm" << std::endl;
}

AForm::AForm(const AForm &copy) :
    mName(copy.getFormName()),
    mSigned(copy.getSigned()),
    mSignGrade(copy.getSignGrade()),
    mExecGrade(copy.getExecGrade())
{
    std::cout << "Copy Constructor Called for form: " << mName << std::endl;
}

AForm::~AForm(void)
{
    std::cout << "Deconstructor Called for AForm" << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

AForm	&AForm::operator=(const AForm &rhs)
{
    std::cout << "Assignment Operator Called" << std::endl;
    this->mSigned = rhs.getSigned();
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, AForm &rhs)
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

const char  *AForm::GradeTooHighException::what(void) const throw()
{
    return ("Grade Too High");
}

const char  *AForm::GradeTooLowException::what(void) const throw()
{
    return ("Grade Too Low");
}

const char  *AForm::FormNotSigned::what (void) const throw()
{
    return ("Form Not Signed");
}

//=====================================//
//======== Getters / Setters ==========//
//=====================================//

std::string   AForm::getFormName(void) const
{
    return (this->mName);
}

void    AForm::setSigned(void)
{
    this->mSigned = true;
}

bool    AForm::getSigned(void) const
{
    return (this->mSigned);
}

int   AForm::getSignGrade(void) const
{
    return (this->mSignGrade);
}

int   AForm::getExecGrade(void) const
{
    return (this->mExecGrade);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    AForm::beSigned(const Bureaucrat &signing)
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