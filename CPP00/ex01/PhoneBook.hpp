/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 14:46:27 by cpost         #+#    #+#                 */
/*   Updated: 2023/01/26 18:08:19 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
private:

	Contact	mContact[8];
	int		mContactNum;

public:
	
	PhoneBook(void);
	~PhoneBook(void);
	int		getContactNum(void);
	void	setContactNum(int newNum);
	void	addNewContact(void);
	void	searchContact(void);
	
};

