/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 15:50:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/08 15:21:16 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string	mIdeas[100];
	
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string newIdea);
};

#endif