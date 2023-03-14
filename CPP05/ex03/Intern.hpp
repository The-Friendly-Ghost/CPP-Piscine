/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/14 13:39:18 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 15:07:03 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "AForm.hpp"

class Intern
{
private:
    typedef struct sFormType
    {
        std::string type;
        char        id;
    }   tFormType ;

public:
    Intern(void);
    Intern(const Intern &copy);
    ~Intern(void);
    Intern  &operator=(const Intern &rhs);

    class   FormNotFound : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };
    
    AForm   *makeForm(std::string formName, std::string formTarget);
};

#endif
