#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x = 0, y = 0;       // define variable x to hold user input and initialize it
    std::cin >> x >> y; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << ' ' << y <<'\n';
    return 0;
}
