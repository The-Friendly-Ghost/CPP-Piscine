/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:23:54 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 13:09:06 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

RobotomyRequestForm::RobotomyRequestForm(void) :
    AForm("Shubbery Creation Form", 72, 45),
    mTarget("Default")
{
    std::cout << "Constructor Called: RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm(target, 72, 45),
    mTarget(target)
{
    std::cout << "Constructor Called: RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
    AForm(copy.getTarget(), 72, 45),
    mTarget(copy.getTarget()) 
{
    std::cout << "Copy Constructor Called: RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Deconstructor Called: RobotomyRequestForm" << std::endl;
}

//=====================================//
//========= Operator Overload =========//
//=====================================//

RobotomyRequestForm    &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    this->mTarget = rhs.getTarget();
    return (*this);
}

//=====================================//
//=============== Getter ==============//
//=====================================//

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->mTarget);
}

//=====================================//
//================ Other ==============//
//=====================================//

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
        std::cerr << this->getFormName() << " has not been executed. Reason:"; 
        std::cerr << std::endl;
        std::cerr << e.what() << std::endl;
        return ;
    }

    srand((unsigned int)time(NULL));
    int random = rand();
    // Uses randomizer to get a 50% chance for success.
    if (random % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized" << " --- num = " << random << std::endl;
    else
        std::cout << "Robotimizatin failed on " << this->getTarget() << " --- num = " << random << std::endl;
}
