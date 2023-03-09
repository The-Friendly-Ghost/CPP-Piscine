/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cpost <cpost@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/09 17:26:00 by cpost         #+#    #+#                 */
/*   Updated: 2023/03/09 20:51:57 by cpost         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include "Bureaucrat.hpp"

// Declaring Bureaucrat Class, because Ubuntu...
class   Bureaucrat;

class Form
{
private:
    const std::string   mName;
    bool                mSigned;
    const int           mSignGrade;
    const int           mExecGrade;

public:
    Form(void);
    Form(std::string name, const int signGrade, const int execGrade);
    Form(const Form &copy);
    Form    &operator=(const Form &rhs);
    ~Form();

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
};

std::ostream    &operator<<(std::ostream &out, Form &rhs);




#endif