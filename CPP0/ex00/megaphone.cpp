#include <iostream>
#include <algorithm> // For std::transform

int main(int argc, char* argv[]) {
    if (argc > 1)
	{
        for (int i = 1; i < argc; i++)
		{
            std::string str = argv[i];

            std::transform(str.begin(), str.end(), str.begin(),
                (int(*)(int))std::toupper);

            std::cout << str;
        }
        std::cout << std::endl;
    }
	else
	{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}
