/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/06 14:37:30 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/08 15:10:19 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal
{
private:
    Brain   *mDogBrain;

public:
    Dog(void);
    ~Dog(void);
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void makeSound(void) const;
    Brain   *getBrain(void) const;
};

#endif
