/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Classes.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 14:57:55 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 15:15:57 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

class	Base
{
	public :
		virtual	~Base();
};

class	A : public Base
{
};

class	B : public Base
{
};

class	C : public Base
{
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif