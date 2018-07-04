#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {

public:

    class GradeTooHighException : public std::exception {

        public:

            GradeTooHighException(void);
            GradeTooHighException(GradeTooHighException const& rhs);
            GradeTooHighException& operator=(GradeTooHighException const& rhs);
            virtual ~GradeTooHighException() throw();

            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {

        public:

            GradeTooLowException();
            GradeTooLowException(GradeTooLowException const& rhs);
            GradeTooLowException& operator=(GradeTooLowException const& rhs);
            virtual ~GradeTooLowException() throw();

            virtual const char* what() const throw();
    };

    Form(std::string name, int sgngrade, int exgrade);
    Form(Form const& rhs);
    ~Form(void);

    Form& operator=(Form const& rhs);

    //getters
    std::string getFormName(void) const;
    int getSignGrade(void) const;
    int getExecuteGrade(void) const;
    bool isSigned(void) const;
   
    void beSigned(Bureaucrat& b);

private:

    std::string const   _name;
    int const           _signgrade;
    int const           _executegrade;
    bool                _formsigned;

};

std::ostream    &operator<< (std::ostream &out, const Form &rhs);

#endif