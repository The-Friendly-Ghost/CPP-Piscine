/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:23:54 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:24:29 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

PresidentialPardonForm::PresidentialPardonForm(void) :
    AForm("Shubbery Creation Form", 25, 5),
    mTarget("Default")
{
    std::cout << "Constructor Called: PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    AForm("Pardon Form", 25, 5),
    mTarget(target)
{
    std::cout << "Constructor Called: PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :
    AForm(copy.getTarget(), 25, 5),
    mTarget(copy.getTarget()) 
{
    std::cout << "Copy Constructor Called: PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Deconstructor Called: PresidentialPardonForm" << std::endl;
}

//=====================================//
//========= Operator Overload =========//
//=====================================//

PresidentialPardonForm    &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    this->mTarget = rhs.getTarget();
    return (*this);
}

//=====================================//
//=============== Getter ==============//
//=====================================//

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->mTarget);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    // Check whether a bureaucrat if allowed to sign the form or if the
    // form has already been signed.
    try
    {
        if (executor.getGrade() > this->getExecGrade())
            throw(GradeTooLowException());
        else if (this->getSigned() == false)
            throw(FormNotSigned());
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getTarget() << " has not been pardoned. Reason:"; 
        std::cerr << std::endl;
        std::cerr << e.what() << std::endl;
        return ;
    }

    // Prints Message.
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
