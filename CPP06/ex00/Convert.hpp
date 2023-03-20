/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 08:59:47 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/20 12:54:53 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class Convert
{
private:
	std::string	mInput;
	std::string	mPrintDecimal;
	
	void		formatString(std::string input);
	void		convertString(long double ld);
	std::string	getInput(void) const;
	void		setDecimal(void);
	std::string	getDecimal(void) const;
	void		validateString(std::string &input);

public:
	Convert(void);
	Convert(std::string data);
	Convert(const Convert &copy);
	~Convert();

	Convert	&operator=(const Convert &rhs);

	class	ImpossibleString : public std::exception
	{
		public :
			virtual const char *what(void) const throw();
	};
};

#endif
