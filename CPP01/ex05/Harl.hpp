/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/12 17:14:18 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/12 17:25:49 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
	typedef struct	s_message
	{
		std::string	level;
		void	(Harl::*function)(void);
	}	t_message;
	

public:

	Harl(void);
	~Harl(void);
	void	complain(std::string level);
	
};
