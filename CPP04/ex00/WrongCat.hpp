/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 16:38:29 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/06 16:39:43 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    ~WrongCat(void);
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    void makeSound(void) const;
};

#endif
