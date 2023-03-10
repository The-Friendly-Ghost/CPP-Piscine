/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 14:09:02 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/27 17:22:21 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ClapTrap
{
private:
	std::string	mName;
	int			mHitPoints;
	int			mEnergyPnts;
	int			mAttackDmg;
	std::string	getName(void) const;
	int			getHitpnts(void) const;
	int			getEnergy(void) const;
	int			getAttackDmg(void) const;
	
public:
	ClapTrap(void);
	ClapTrap(std::string newName);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap	&operator=(const ClapTrap &other);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};
