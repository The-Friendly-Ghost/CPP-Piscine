/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 20:31:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:22:08 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\x1B[2J\x1B[H";
    {
        std::cout << " ====== INTERN CREATES SHUBBERY CREATION FORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING INTERN ---" << std::endl;
            Intern  clyde;

            //CREATING FORM
            AForm   *healthCareBill = clyde.makeForm("shubbery creation form", "Universal Care Bill");

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
            delete (healthCareBill);
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl << std::endl << " >> PRESS ENTER FOR NEXT CASE";  
    std::string temp;
    std::getline(std::cin, temp);
    std::cout << "\x1B[2J\x1B[H";

    {
        std::cout << " ====== INTERN CREATES PRESIDENTIAL PARDON FORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING INTERN ---" << std::endl;
            Intern  wendy;

            //CREATING FORM
            AForm   *pardon = wendy.makeForm("presidential pardon form", "a Criminal");

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
            delete (pardon);
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl << std::endl << " >> PRESS ENTER FOR NEXT CASE";  
    std::getline(std::cin, temp);
    std::cout << "\x1B[2J\x1B[H";

    {
        std::cout << " ====== INTERN CREATES ROBOTOMY REQUEST FORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING INTERN ---" << std::endl;
            Intern  token;

            //CREATING FORM
            AForm   *robotomy = token.makeForm("robotomy request form", "robotomy request");

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
            delete (robotomy);
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl << std::endl << " >> PRESS ENTER FOR NEXT CASE";  
    std::getline(std::cin, temp);
    std::cout << "\x1B[2J\x1B[H";

    {
        std::cout << " ====== INTERN CREATES A WRONG FORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING INTERN ---" << std::endl;
            Intern  tweak;

            //CREATING FORM
            AForm   *form404 = tweak.makeForm("404 form", "404 form");

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
            delete (form404);
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }
}