/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 13:09:11 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/07 14:07:49 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

    std::string mName;
	Weapon	    &mWeapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
	void	attack(void);
};
