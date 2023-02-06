/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/27 19:27:47 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 11:37:20 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name) : mName(name)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << this->mName << " destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->mName << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
