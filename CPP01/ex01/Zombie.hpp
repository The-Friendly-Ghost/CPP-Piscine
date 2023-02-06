/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 14:16:19 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 16:24:15 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string	mName;

public:
	Zombie();
	Zombie(std::string name);
	void	setZombieName(std::string name);
	void	announce(void);
	~Zombie();
};

Zombie  *zombieHorde(int N, std::string name);

#endif
