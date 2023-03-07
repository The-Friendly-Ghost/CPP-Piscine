/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 15:50:38 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/07 21:28:01 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Brain
{
private:
	std::string	mIdeas[100];
	
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);

	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string newIdea);
};
