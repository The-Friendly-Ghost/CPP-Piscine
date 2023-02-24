/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:05:58 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/21 13:27:32 by cpost         ########   odam.nl         */
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

	bool		strIsDigits(std::string const &str) const;
	bool		strHasTabs(std::string const &str) const;
	bool		strIsEmpty(std::string const &str) const;
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
