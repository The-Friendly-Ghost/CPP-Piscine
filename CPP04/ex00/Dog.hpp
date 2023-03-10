/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/02 13:38:44 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 14:35:40 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog(void);
	~Dog(void);
	Dog(const Dog &copy);
	Dog	&operator=(const Dog &other);
	void	makeSound(void) const;
};

#endif
