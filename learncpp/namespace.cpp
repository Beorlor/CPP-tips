#include <iostream> // Include the I/O library for std::cout and std::cin

// Define a namespace called 'my_tools'
namespace my_tools {
    // Define a variable inside the namespace
    int my_number = 100;

    // Define a function that prints 'my_number'
    void printMyNumber() {
        std::cout << "My number is: " << my_number << std::endl;
    }

    // Define a nested namespace
    namespace version1 {
        // Define a function inside the nested namespace
        void greet() {
            std::cout << "Hello from version1!" << std::endl;
        }
    }
}

// Create an alias for the namespace to make it easier to use
namespace mt = my_tools;

// Main function of the program
int main() {
    // Use the main function from the 'my_tools' namespace
    mt::printMyNumber();

    // Use the function from the nested namespace via the alias
    mt::version1::greet();

    // Ask the user for a number using standard library functionality
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    return 0;
}
