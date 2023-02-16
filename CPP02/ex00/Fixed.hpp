/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:52:21 by cpost         #+#    #+#                 */
/*   Updated: 2023/02/16 12:15:16 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:

	int	value;
	static const int bits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &other);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
};
