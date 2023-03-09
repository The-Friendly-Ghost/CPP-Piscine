/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 14:38:15 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/09 15:25:59 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << " ====== CASE1: DECREMENTING GRADE 150 =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR ---" << std::endl;
            Bureaucrat  visitor;

            std::cout << std::endl << " --- CURRENT RANK VISITOR ---" << std::endl;
            std::cout << visitor << std::endl;
        
            std::cout << std::endl << " --- DECONSTRUCTING VISITOR, BECAUSE EXCEPTION FOUND ---" << std::endl;
            
            // DECREMENTING GRADE
            visitor.decrementGrade();

            std::cout << std::endl << " --- THIS DOESNT GET PRINTED ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << " ====== CASE2: INCREMENTING GRADE 1 =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR ---" << std::endl;
            Bureaucrat  president("president", 1);

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;
        
            std::cout << std::endl << " --- DECONSTRUCTING PRESIDENT, BECAUSE EXCEPTION FOUND ---" << std::endl;
            
            // DECREMENTING GRADE
            president.incrementGrade();

            std::cout << std::endl << " --- THIS DOESNT GET PRINTED ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << " ====== CASE3: DECREMENTING GRADE 1 =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING PRESIDENT ---" << std::endl;
            Bureaucrat  president("president", 1);

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;
        
            
            // DECREMENTING GRADE
            president.decrementGrade();

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- DECONSTRUCTING PRESIDENT, BECAUSE END OF SCOPE ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << " ====== CASE4: INCREMENTING UNTIL EXCEPTION =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VICE-PRESIDENT ---" << std::endl;
            Bureaucrat  vicepresident("Vice-president", 5);

            for (int i = 5; i >= 0; i--)
            {
                std::cout << std::endl << " --- CURRENT RANK VICE-PRESIDENT ---" << std::endl;
                std::cout << vicepresident << std::endl;
                vicepresident.incrementGrade();
            }

            std::cout << std::endl << " --- THIS DOESNT GET PRINTED ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    
    // Bureaucrat  semi_vip("Vice-President", 5);

}