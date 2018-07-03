#ifndef BUREAUCRAT_CLASS_HPP
#define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {

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

    Bureaucrat(std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat(Bureaucrat const& rhs);
    Bureaucrat& operator=(Bureaucrat const& rhs);

    int             getGrade(void) const;
    std::string     getName(void) const;

    void            decreaseGrade(int n);
    void            increaseGrade(int n);

private:

    int                 _grade;
    std::string        _name;

};

std::ostream&   operator<<(std::ostream& output, const Bureaucrat &rhs);

#endif