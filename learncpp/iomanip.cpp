#include <iostream>
#include <iomanip>  // Required for std::setw and std::left

int main() {
    // Set the alignment of the text to the left of the field
    std::cout << std::left;

    // Output column headers with specified field widths
    // std::setw(10) sets the width of the "Name" field to 10 characters
    // std::setw(5) sets the width of the "Age" field to 5 characters
    std::cout << std::setw(10) << "Name" << std::setw(5) << "Age" << std::endl;

    // Output data rows with the same field widths as the headers
    // Names are left-aligned within a 10-character wide field
    // Ages are left-aligned within a 5-character wide field
    std::cout << std::setw(10) << "Alice" << std::setw(5) << 30 << std::endl;
    std::cout << std::setw(10) << "Bob" << std::setw(5) << 25 << std::endl;

    return 0;
}
