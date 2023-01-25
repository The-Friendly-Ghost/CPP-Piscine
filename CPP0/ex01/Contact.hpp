/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:05:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/25 18:07:47 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstddef>

class Contact
{
private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	bool		strIsDigits(std::string const &str);
	std::string	getLine(std::string info, bool phone = false);

public:
	
	Contact(void);
	~Contact(void);
	void	getInfo(void);
};
