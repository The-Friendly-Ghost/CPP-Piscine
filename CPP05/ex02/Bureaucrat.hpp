/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 13:41:11 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/13 16:03:45 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include "AForm.hpp"

// Declaring Form Class, because.. weird ...
class   AForm;

class Bureaucrat
{
private:
    const std::string   mName;
    int                 mGrade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat  &operator=(const Bureaucrat &rhs);

    int getGrade(void) const;
    const std::string getName(void) const;

    void    incrementGrade(void);
    void    decrementGrade(void);
    void    signForm(AForm &toSign);

    class   GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
