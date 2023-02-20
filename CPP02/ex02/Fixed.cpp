/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 11:42:49 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/20 17:11:35 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : 
	value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Integer constructor called" << std::endl;
	setRawBits(value * (1 << bits));
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Default deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : value(copy.value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	float	returnFloat;

	returnFloat = (float)this->value / (1 << this->bits);
	return (returnFloat);
}

int	Fixed::toInt(void) const
{
	int	returnInt;

	returnInt = this->value >> this->bits;
	return (returnInt);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// Comparison Operators

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->value < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->value > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->value >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->value <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->value == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->value != rhs.getRawBits())
		return (true);
	return (false);
}

// Aritmetic operators

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// Increment / Decrement operators

Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->value + 1);
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->setRawBits(this->value - 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	temp.setRawBits(temp.getRawBits() + 1);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	this->setRawBits(this->value - 1);
	return (*this);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}
