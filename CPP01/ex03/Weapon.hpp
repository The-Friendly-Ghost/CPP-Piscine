/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 17:53:39 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/06 17:56:56 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:

	std::string	type;
	
public:

	Weapon(void);
	~Weapon(void);
	const std::string	&getType(void);
	void				setType(std::string newType);
};
