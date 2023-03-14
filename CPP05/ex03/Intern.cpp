/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/14 13:39:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:25:50 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include "AForm.hpp"
#include "ShubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

//=====================================//
//=== Constructors / Deconstructor ====//
//=====================================//

Intern::Intern(void)
{
    std::cout << "Intern Constructor Called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Intern Copy Constructor Called" << std::endl;
    *this = copy;
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor Called" << std::endl;
}

//=====================================//
//======== Operator Overloads =========//
//=====================================//

Intern  &Intern::operator=(const Intern &rhs)
{
    std::cout << "Intern Assignment operator Called" << std::endl;
    (void)rhs;
    return (*this);
}

//=====================================//
//============= Exceptions ============//
//=====================================//

const char  *Intern::FormNotFound::what (void) const throw()
{
    return ("Form Not Found");
}

//=====================================//
//================ Other ==============//
//=====================================//

AForm   *Intern::makeForm(std::string formName, std::string formTarget)
{
    const tFormType   types[3] = {
        {"shubbery creation form", 0},
        {"robotomy request form", 1},
        {"presidential pardon form", 2}
    };
    int formType;

    formType = 3;
    for (int i = 0; i < 3; i++)
    {
        if (formName == types[i].type)
            formType = types[i].id;
    }
    
    switch (formType)
    {
        case (0) :
            std::cout << std::endl << " --- INTERN CREATES: " << formName << std::endl;
            return (new ShubberyCreationForm(formTarget));
        case (1) :
            std::cout << std::endl << " --- INTERN CREATES: " << formName << std::endl;
            return (new RobotomyRequestForm(formTarget));
        case (2) :
            std::cout << std::endl << " --- INTERN CREATES: " << formName << std::endl;
            return (new PresidentialPardonForm(formTarget));
        case (3) :
            std::cout << std::endl << " --- 404: FORM NOT FOUND: " << formName << std::endl;
            throw(FormNotFound());
    }
    return (NULL);
}

