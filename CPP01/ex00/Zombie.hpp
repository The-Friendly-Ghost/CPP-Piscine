/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 19:30:12 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 11:41:31 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:

	std::string	mName;

public:
	
	void	announce(void);
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

//Heap allocation
Zombie  *newZombie(std::string name);

//Stack allocation
void    randomChump(std::string name);

#endif
