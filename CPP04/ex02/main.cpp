/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 12:57:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/08 17:19:33 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	{
		Animal	*animals[10];
		//Animal	doesntwork;

		std::cout << std::endl << "--- CONSTRUCTING ANIMALS ---" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				animals[i] = new Cat();
			if (i >= 5)
				animals[i] = new Dog();
		}
		
		// Creating Ideas
		animals[1]->getBrain()->setIdea(0, "MUST DESTROY PLANT!");
		animals[1]->getBrain()->setIdea(1, "MUST DESTROY ANOTHER PLANT!");
		animals[1]->getBrain()->setIdea(2, "MUST DESTROY ONE MORE PLANT!");
		
		animals[6]->getBrain()->setIdea(1, "MUST SMILE TO HUMAN");
		animals[6]->getBrain()->setIdea(2, "SCREW YOU CAT! WOOF WOOF!");

		std::cout << std::endl << "--- PRINTING IDEAS ---" << std::endl;
		std::cout << std::endl << "Type: " << animals[1]->getType() << std::endl;
		std::cout << "1 " << animals[1]->getBrain()->getIdea(0) << std::endl;
		std::cout << "2 " << animals[1]->getBrain()->getIdea(1) << std::endl;
		std::cout << "3 " << animals[1]->getBrain()->getIdea(2) << std::endl;
		std::cout << "4 " << animals[1]->getBrain()->getIdea(3) << std::endl;
		
		std::cout << std::endl << "Type: " << animals[6]->getType() << std::endl;
		std::cout << "5 " << animals[6]->getBrain()->getIdea(0) << std::endl;
		std::cout << "6 " << animals[6]->getBrain()->getIdea(1) << std::endl;
		std::cout << "7 " << animals[6]->getBrain()->getIdea(2) << std::endl;

		std::cout << std::endl;
		std::cout << "8 " << animals[3]->getBrain()->getIdea(2) << std::endl;
		std::cout << "9 " << animals[3]->getBrain()->getIdea(-1) << std::endl;
		std::cout << "10 " << animals[3]->getBrain()->getIdea(99) << std::endl;

		std::cout << std::endl << "--- DECONSTRUCTING ANIMALS ---" << std::endl;
		for (int i = 0; i < 10; i++)
			delete animals[i];

		std::cout << std::endl << std::endl << std::endl << "--- CONSTRUCTING CATS ---" << std::endl;
		std::cout << "- CONSTRUCTING APOLLO ---" << std::endl;
		const Cat	Apollo;
		std::cout << "- CONSTRUCTING APOLLO2 ---" << std::endl;
		const Cat	Apollo2 = Apollo;
		std::cout << "- CONSTRUCTING APOLLO3 ---" << std::endl;
		const Cat 	Apollo3(Apollo);

		std::cout << std::endl << std::endl << "ADDRESS APOLLO BRAIN: " << Apollo.getBrain() << std::endl;
		std::cout << "ADDRESS APOLLO2 BRAIN: " << Apollo2.getBrain() << std::endl;
		std::cout << "ADDRESS APOLLO3 BRAIN: " << Apollo3.getBrain() << std::endl;
		
		std::cout << std::endl << std::endl << std::endl << "--- DECONSTRUCTING CATS ---" << std::endl;
	}
	
	std::cout << std::endl << std::endl << std::endl << "--- CHECKS FROM SUBJECT ---" << std::endl;
	std::cout << "- CONSTRUCTING DOG ---" << std::endl;
	const Animal	*j = new Dog();
	std::cout << "- CONSTRUCTING CAT ---" << std::endl;
	const Animal	*i = new Cat();
	
	std::cout << "- DECONSTRUCTING DOG ---" << std::endl;
	delete j;
	std::cout << "- DECONSTRUCTING CAT ---" << std::endl;
	delete i;
	std::cout << std::endl << std::endl << std::endl;
	return (0);
}

