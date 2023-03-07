/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 16:16:44 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/07 21:55:27 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Brain Deconstructor Called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Operator Called" << std::endl;
	for (int i = 0; i < 100; i++)
		mIdeas[i] = other.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
		return (NULL);
	return (this->mIdeas[index]);
}

void	Brain::setIdea(int index, std::string newIdea)
{
	if (index < 0 || index > 99)
		return ;
	this->mIdeas[index] = newIdea;
}
