/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 15:30:25 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 15:32:04 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int	main(void)
{
	Base	*pPtr = generate();
	Base	&rPtr = *pPtr;

	identify(pPtr);
	identify(rPtr);

	delete pPtr;
}