/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 16:35:15 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:36:07 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string	mType;

public:
	WrongAnimal(void);
	WrongAnimal(std::string newType);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal	&operator=(const WrongAnimal &other);
	void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
