#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "Form.hpp"
#include "Bureaucrat.hpp"

static void checkForm(Bureaucrat bureaucrat, Form format)
{
    try
    {
        bureaucrat.signForm(format);
        std::cout << bureaucrat << std::endl;
        std::cout << format << std::endl;
    }
    catch (std::exception &e)
    {
        //std::cout << e.what() << std::endl;
    }
    return ;
}

int main(void)
{
    Form        f1 = Form("Test", 42, 42);
    Form        f2 = Form("Contact", 30, 50);
    Bureaucrat  b1 = Bureaucrat("Brendano", 42);
    Bureaucrat  b2 = Bureaucrat("Kyleo", 1);

    checkForm(b1, f1);
    std::cout << std::endl;

    checkForm(b1, f2);
    std::cout << std::endl;

    checkForm(b2, f1);
    std::cout << std::endl;

    checkForm(b2, f2);
    std::cout << std::endl;
    return (0);
}