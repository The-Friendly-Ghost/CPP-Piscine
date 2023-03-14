/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:18:57 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/14 13:11:54 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm
{
private:
    std::string mTarget;

public:
    //=== Constructors / Deconstructor ====//
    
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(PresidentialPardonForm const &copy);

    //=== Operator Overloads ====//

    PresidentialPardonForm    &operator=(PresidentialPardonForm const &rhs);

    //=== Getter / setters ====//
    
    std::string getTarget(void) const;

    //=== Other ====//

    void    execute(Bureaucrat const &executor) const;
};

#endif
