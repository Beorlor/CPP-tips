#include <iostream>
#include <string>

int main() {
    // Initialize a string
    std::string str = "Hello";

    // Using append() to add text
    str.append(" World");

    // Using += to add more text
    str += "!";

    // Display the string
    std::cout << "After append and +=: " << str << std::endl;

    // Using insert() to insert text at a specified position
    str.insert(5, ",");

    // Display the string
    std::cout << "After insert: " << str << std::endl;

    // Using find() to locate a substring
    size_t pos = str.find("World");
    std::cout << "\"World\" found at position: " << pos << std::endl;

    // Using replace() to replace a part of the string
    if (pos != std::string::npos) {
        str.replace(pos, 5, "Universe");
    }

    // Display the string
    std::cout << "After replace: " << str << std::endl;

    // Using erase() to remove part of the string
    str.erase(0, 6); // Remove "Hello," from the beginning

    // Display the string
    std::cout << "After erase: " << str << std::endl;

    // Using substr() to get a substring
    std::string sub = str.substr(1, 8); // Get 8 characters starting from position 1

    // Display the substring
    std::cout << "Substring: " << sub << std::endl;

    return 0;
}
