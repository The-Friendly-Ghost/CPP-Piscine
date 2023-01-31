/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:05:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/26 18:15:23 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstddef>

class Contact
{
private:

	std::string	mFirstName;
	std::string	mLastName;
	std::string	mNickName;
	std::string	mPhoneNumber;
	std::string	mDarkestSecret;

	bool		strIsDigits(std::string const &str);
	std::string	getInput(std::string info, bool phone = false);
	void		printInfo(std::string info, bool printLine);

public:
	
	Contact(void);
	~Contact(void);
	void	getInfo(void);
	void	printContact(bool printLine);
	bool	contactIsEmpty(void);
};

#endif
