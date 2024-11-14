#include "header/Bureaucrat.hpp"
#include "header/AForm.hpp"
#include "header/PresidentialPardonForm.hpp"
#include "header/RobotomyRequestForm.hpp"
#include "header/ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "Test 1: Create a Bureaucrat with a grade of 150" << std::endl;
    try
    {
        Bureaucrat b2("Bureaucrat2", 151);       
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 2: Create a Bureaucrat with a grade of 0" << std::endl;
    try
    {
        Bureaucrat b1("Bureaucrat1", 0);       
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 3: Create a Bureaucrat with a grade of 1" << std::endl;
    try
    {
        Bureaucrat b3("Bureaucrat3", 1);       
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 4: Create a Bureaucrat with a grade of 150" << std::endl;
    try
    {
        Bureaucrat b4("Bureaucrat4", 150);       
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 5: Create a Bureaucrat and form custom" << std::endl;
    try
    {
        Bureaucrat b5("Bureaucrat5", 5);
        PresidentialPardonForm f1("target1");
        b5.signForm(f1);
        f1.execute(b5);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 6: Create a Bureaucrat and form custom" << std::endl;
    try
    {
        Bureaucrat b6("Bureaucrat6", 43);  
        RobotomyRequestForm f2("target2");
        b6.signForm(f2);
        f2.execute(b6);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Test 7: Create a Bureaucrat and form custom" << std::endl;
    try
    {
        Bureaucrat b7("Bureaucrat7", 130);  
        ShrubberyCreationForm f3("target3");
        b7.signForm(f3);
        f3.execute(b7);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
        
