/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:02 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 15:40:02 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

	bool	mGateKeepingMode;
	bool	getGateKeeping(void) const;
	void	setGateKeeping(bool mode);

public:
	ScavTrap(void);
	ScavTrap(std::string newName);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &other);
	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif
