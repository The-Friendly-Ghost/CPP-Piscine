/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/02 13:38:44 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/02 13:42:25 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Animal(void);
	~Animal(void);
	Animal(const Animal &copy);
	Animal	&operator=(const Animal &other);
	void	makeSound(void);
};

#endif
