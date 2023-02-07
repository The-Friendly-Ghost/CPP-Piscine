/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 17:53:39 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/07 13:20:21 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon
{
private:

	std::string	type;
	
public:

	Weapon(void);
	Weapon(std::string name);
	~Weapon(void);
	const std::string	&getType(void);
	void				setType(std::string newType);
};

#endif
