#include "Bureaucrat.hpp"

int main(void)
{
/*    try
    {
        int test =7;
        int grade = 120;
        Bureaucrat b("Henry", grade);
        b.decreaseGrade(test);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }*/
    try
    {
        int test = 6;
        int grade = 30; //grade 149 and test 
        Bureaucrat c("Henry", grade);
        c.increaseGrade(test);
        std::cout << c;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl; 
    }
    return 0;
}