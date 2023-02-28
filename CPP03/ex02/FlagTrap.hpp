/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FlagTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:02 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/28 17:58:04 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
private:

public:
	FlagTrap(void);
	FlagTrap(std::string newName);
	FlagTrap(const FlagTrap &copy);
	~FlagTrap(void);
	FlagTrap	&operator=(const FlagTrap &other);
	void	highFivesGuys(void);
};

#endif
