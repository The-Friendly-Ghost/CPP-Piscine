/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 13:18:57 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/13 17:59:08 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm
{
private:
    std::string mTarget;

public:
    //=== Constructors / Deconstructor ====//
    
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(RobotomyRequestForm const &copy);

    //=== Operator Overloads ====//

    RobotomyRequestForm    &operator=(RobotomyRequestForm const &rhs);

    //=== Getter / setters ====//
    
    std::string getTarget(void) const;

    //=== Other ====//

    void    execute(Bureaucrat const &executor) const;
};

#endif
