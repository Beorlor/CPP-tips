#include <iostream>

int main() {
    int x = 10;
    std::cout << "Outside x: " << x << std::endl;

    {   // Start of inner block
        int x = 20;  // This 'x' is local to the inner block
        std::cout << "Inside x: " << x << std::endl;
    }   // End of inner block

    std::cout << "Outside x again: " << x << std::endl;
    return 0;
}
