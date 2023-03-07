/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:37:30 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/07 21:54:30 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
private:
    Brain   *mCatBrain;

public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound(void) const;
    Brain   *getBrain(void) const;
};

#endif
