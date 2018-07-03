#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rhs){
    *this = rhs;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const& rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& rhs) {
    *this = rhs;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const& rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

Bureaucrat::Bureaucrat (std::string name, int grade) : _name(name) {
    if (grade > 150) {
        throw GradeTooLowException();
    }
    else if (grade < 0) {
        throw GradeTooHighException();
    }

    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& rhs) {
    *this = rhs;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs) {
    if (this != &rhs)
    {
        _name = rhs._name;
        _grade = rhs._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(void) {
    return ;
}

int Bureaucrat::getGrade(void) const {
    return _grade;
}

std::string Bureaucrat::getName(void) const {
    return _name;
}

void Bureaucrat::increaseGrade(int n) {
    if (_grade - n < 0) {
        throw (GradeTooHighException());
    }

    _grade -= n;
}

void Bureaucrat::decreaseGrade(int n) {
    if (_grade + n > 150) {
        throw (GradeTooLowException());
    }

    _grade += n;
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat& rhs) {
    output << rhs.getName() << ", Grade: " << rhs.getGrade() << std::endl;
    return output;
}