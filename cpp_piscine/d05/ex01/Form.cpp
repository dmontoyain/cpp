#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(void) {
    return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
    return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rhs){
    *this = rhs;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const& rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

Form::GradeTooLowException::GradeTooLowException(void) {
    return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
    return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const& rhs) {
    *this = rhs;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const& rhs) {
    static_cast <void> (rhs);
    return *this;
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade too low";
}

Form::Form(std::string name, int sgngrade, int exgrade) : _name(name), _signgrade(sgngrade), _executegrade(exgrade), _formsigned(false){
    if (sgngrade > 150 || exgrade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else if (exgrade < 1 || sgngrade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
}

Form::Form(Form const& rhs) : _name(rhs._name), _signgrade(rhs._signgrade), _executegrade(rhs._executegrade), _formsigned(rhs._formsigned) {
    *this = rhs;
}

Form::~Form(void) {
    return ;
}

Form& Form::operator=(Form const& rhs) {
    if (this != &rhs)
    {
        _formsigned = rhs._formsigned;
    }
    return *this;
}

std::string Form::getFormName(void) const {
    return _name;
}

int Form::getSignGrade(void) const {
    return _signgrade;
}

int Form::getExecuteGrade(void) const {
    return _executegrade;
}

bool Form::isSigned(void) const {
    return _formsigned;
}

void Form::beSigned(Bureaucrat& b) {
    if (b.getGrade() > _signgrade)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        _formsigned = true;
    }
}

std::ostream &operator<< (std::ostream &out, const Form &rhs)
{
    out << "The form: " << rhs.getFormName() << " which is "
        << (rhs.isSigned() ? "" : "not ")
        << " signed, which requires a grade " << rhs.getSignGrade()
        << " to sign, and " << rhs.getExecuteGrade() << " to be executed."
        << std::endl;
    return out;
}