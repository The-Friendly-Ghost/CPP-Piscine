/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:23:54 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/13 17:58:35 by cpost         ########   odam.nl         */
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
    AForm("Shubbery Creation Form", 145, 137),
    mTarget("Default")
{
    std::cout << "Constructor Called: RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm(target, 145, 137),
    mTarget(target)
{
    std::cout << "Constructor Called: RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
    AForm(copy.getTarget(), 145, 137),
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

    // Create the file where the ASCII tree has to be written to.
    std::ofstream   outFile(this->mTarget + "_shubbery");

    // Draw Ascii trees and display message that form has been signed.
    outFile << "           _-_    " << std::endl;
    outFile << "    /~~    ~~\\   " << std::endl;
    outFile << "  /~~        ~~\\ " << std::endl;
    outFile << " |              | " << std::endl;
    outFile << " \\  _-     -_  / " << std::endl;
    outFile << "   ~  \\  /  ~    " << std::endl;
    outFile << "_- -   | | _- _   " << std::endl;
    outFile << "  _ -  | |   -_   " << std::endl;
    outFile << "       / \\       " << std::endl;
    
    std::cout << this->getFormName() << " has been executed" << std::endl;
    
    // Close the created outfile
    outFile.close();
}
