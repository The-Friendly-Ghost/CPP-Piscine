/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 20:31:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/09 20:55:03 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << " ====== CASE1: BUREAUCRAT AUTHORISED TO SIGN =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << " --- CREATING FORM (LVL 5) ---" << std::endl;
            Form    healthCareBill("Health Care Bill", 5, 5);

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM- --" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << " ====== CASE2: BUREAUCRAT UNAUTHORISED TO SIGN =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR (LVL 150)---" << std::endl;
            Bureaucrat  visitor;

            std::cout << " --- CREATING FORM (LVL 5) ---" << std::endl;
            Form    healthCareBill("Health Care Bill", 5, 5);

            std::cout << std::endl << " --- CURRENT RANK VISITOR ---" << std::endl;
            std::cout << visitor << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM- --" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- VISITOR SIGNS FORM ---" << std::endl;
            visitor.signForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }
}