/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 20:31:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 13:31:21 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\x1B[2J\x1B[H";
    {
        std::cout << " ====== CASE1: BUREAUCRAT SIGNES SHUBBERYCREATIONFORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            ShubberyCreationForm healthCareBill("Universal Care Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            healthCareBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(healthCareBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            president.executeForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE2: VISITOR SIGNES SHUBBERYCREATIONFORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR (LVL 150)---" << std::endl;
            Bureaucrat  visitor;

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            ShubberyCreationForm healthCareBill("Universal Care Bill");

            std::cout << std::endl << " --- CURRENT RANK VISITOR ---" << std::endl;
            std::cout << visitor << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- VISITOR TRIES TO EXECUTE FORM ---" << std::endl;
            healthCareBill.execute(visitor);

            std::cout << std::endl << " --- VISITOR SIGNS FORM ---" << std::endl;
            visitor.signForm(healthCareBill);

            std::cout << std::endl << " --- VISITOR TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            visitor.executeForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE3.1: ROBOTIMIZATION 50\% CHANCE =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            RobotomyRequestForm aiTerminatorBill("AI Terminator Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << aiTerminatorBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(aiTerminatorBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE3.2: ROBOTIMIZATION 50\% CHANCE =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            RobotomyRequestForm aiTerminatorBill("AI Terminator Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << aiTerminatorBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(aiTerminatorBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE3.3: ROBOTIMIZATION 50\% CHANCE =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            RobotomyRequestForm aiTerminatorBill("AI Terminator Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << aiTerminatorBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(aiTerminatorBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE3.4: ROBOTIMIZATION 50\% CHANCE =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            RobotomyRequestForm aiTerminatorBill("AI Terminator Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << aiTerminatorBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(aiTerminatorBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE3.5: ROBOTIMIZATION 50\% CHANCE =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            RobotomyRequestForm aiTerminatorBill("AI Terminator Bill");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << aiTerminatorBill << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(aiTerminatorBill);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            aiTerminatorBill.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE4: BUREAUCRAT SIGNES PRESIDENTIALPARDONFORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            PresidentialPardonForm PardonForm("A Criminal");

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << PardonForm << std::endl;

            std::cout << " --- PRESIDENT TRIES TO EXECUTE FORM ---" << std::endl;
            president.executeForm(PardonForm);

            std::cout << std::endl << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(PardonForm);

            std::cout << std::endl << " --- PRESIDENT TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            PardonForm.execute(president);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
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
        std::cout << " ====== CASE5: VISITOR SIGNES PRESIDENTIALPARDONFORM =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR (LVL 150)---" << std::endl;
            Bureaucrat  visitor;

            std::cout << std::endl << " --- CREATING FORM ---" << std::endl;
            PresidentialPardonForm PardonForm("A Criminal");

            std::cout << std::endl << " --- CURRENT RANK VISITOR ---" << std::endl;
            std::cout << visitor << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM ---" << std::endl;
            std::cout << PardonForm << std::endl;

            std::cout << " --- VISITOR TRIES TO EXECUTE FORM ---" << std::endl;
            visitor.executeForm(PardonForm);

            std::cout << std::endl << " --- VISITOR SIGNS FORM ---" << std::endl;
            visitor.signForm(PardonForm);

            std::cout << std::endl << " --- VISITOR TRIES TO EXECUTE FORM AGAIN ---" << std::endl;
            PardonForm.execute(visitor);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }
}