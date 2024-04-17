#include <iostream>

int main()
{
	bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';

	std::cout << std::boolalpha; // print bools as true or false

	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';


	return 0;
}
