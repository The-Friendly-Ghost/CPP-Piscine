/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 17:26:00 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/13 16:08:46 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include "Bureaucrat.hpp"

// Declaring Bureaucrat Class, because Ubuntu...
class   Bureaucrat;

class AForm
{
private:
    const std::string   mName;
    bool                mSigned;
    const int           mSignGrade;
    const int           mExecGrade;

public:
    virtual void execute(Bureaucrat const &executor) const = 0;

    AForm(void);
    AForm(std::string name, const int signGrade, const int execGrade);
    AForm(const AForm &copy);
    AForm    &operator=(const AForm &rhs);
    ~AForm();

    std::string   getFormName(void) const;
    void          setSigned(void);
    bool          getSigned(void) const;
    int           getSignGrade(void) const;
    int           getExecGrade(void) const;

    void          beSigned(const Bureaucrat &signing);

    class   GradeTooHighException : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };

    class   GradeTooLowException : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };

    class   FormNotSigned : public std::exception
    {
        public :
            virtual const char *what(void) const throw();
    };
};

std::ostream    &operator<<(std::ostream &out, AForm &rhs);




#endif