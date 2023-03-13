/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShubberyCreationForm.hpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:18:57 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/13 15:53:44 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHUBBERYCREATIONFORM_HPP
#define SHUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class ShubberyCreationForm : public AForm
{
private:
    std::string mTarget;

public:
    //=== Constructors / Deconstructor ====//
    
    ShubberyCreationForm(void);
    ShubberyCreationForm(std::string target);
    ~ShubberyCreationForm(void);
    ShubberyCreationForm(ShubberyCreationForm const &copy);

    //=== Operator Overloads ====//

    ShubberyCreationForm    &operator=(ShubberyCreationForm const &rhs);

    //=== Getter / setters ====//
    
    std::string getTarget(void) const;

    //=== Other ====//

    void    execute(Bureaucrat const &executor) const;
};

#endif
