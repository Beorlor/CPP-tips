#include <iostream>

int main()
{
	int test = 8;
    std::cout << test << "\n";
	int test2(9); //direct initialisation : hard to differentiate from function declaration like int x();
    std::cout << "test2: " << test2 << "\n";
    return 0;
}
