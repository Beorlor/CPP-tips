#include <iostream>
#include <string>

int main() {
    std::string line;

    // Ask user for a line of text
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line);

    // Output the entered text
    std::cout << "You entered: \"" << line << "\"" << std::endl;

	// Read a line of text after consuming any leading whitespace
    std::cout << "Enter a line of text: ";
    std::getline(std::cin >> std::ws, line);
	std::cout << "You entered the text: \"" << line << "\"" << std::endl;

    return 0;
}
