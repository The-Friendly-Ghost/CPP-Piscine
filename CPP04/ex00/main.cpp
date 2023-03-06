/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 12:57:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 17:06:13 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const	Animal *meta = new Animal();
	const	Animal *j = new Dog();
	const	Animal *i = new Cat();

	std::cout << std::endl << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << std::endl;

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << std::endl;


	const	WrongAnimal *meta2 = new WrongAnimal();
	const	WrongAnimal *i2 = new WrongCat();

	std::cout << std::endl << std::endl;

	std::cout << i2->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	i2->makeSound();
	meta2->makeSound();

	std::cout << std::endl << std::endl;

	delete i2;
	delete meta2;

	std::cout << std::endl << std::endl;

	return (0);
}
