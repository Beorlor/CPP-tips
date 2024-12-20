#include "header/ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter(void) {
    return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src) {
    *this = src;
    return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src) {
    static_cast<void>(src);
    return *this;
}

ScalarConverter::~ScalarConverter(void) {
    return;
}

bool has_type(std::string input) {
    int dot = 0, minus = 0, f = 0;

    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '.') dot++;
        else if (input[i] == '-') minus++;
        else if (input[i] == 'f') f++;
        if (dot > 1 || minus > 1 || f > 1) return false;
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '-' && input[i] != 'f') return false;
    }
    return true;
}

void print_char(std::string input) {
    char c = atoi(input.c_str());
    if (input.length() == 1 && !isdigit(input[0]))
        std::cout << "char: '" << input << "'" << std::endl;
    else if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else if (input.length() == 1 && isdigit(input[0]))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void print_int(std::string input) {
    if (input.length() == 1) {
        if (!isprint(input[0]))
            std::cout << "int: impossible" << std::endl;
        else if (isdigit(input[0]))
            std::cout << "int: " << input[0] << std::endl;
        else
            std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
        return;
    }
    if (!has_type(input)) {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    long long int i = atoll(input.c_str());
    if (i > INT_MAX || i < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
}

void print_float(std::string input) {
    if (input.length() == 1) {
        if (!isprint(input[0]))
            std::cout << "float: impossible" << std::endl;
        else if (isdigit(input[0]))
            std::cout << "float: " << std::fixed << std::setprecision(4) << atof(input.c_str()) << 'f' << std::endl;
        else
            std::cout << "float: " << std::fixed << std::setprecision(4) << static_cast<float>(input[0]) << 'f' << std::endl;
        return;
    }
    if (input == "nan" || input == "+inf" || input == "-inf") {
        std::cout << "float: " << input << 'f' << std::endl;
        return;
    }
    if (!has_type(input)) {
        std::cout << "float: impossible" << std::endl;
        return;
    }
    float f = atof(input.c_str());
    if (f > FLT_MAX || f < FLT_MIN)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(4) << f << 'f' << std::endl;
}

void print_double(std::string input) {
    if (input.length() == 1) {
        if (!isprint(input[0]))
            std::cout << "double: impossible" << std::endl;
        else if (isdigit(input[0]))
            std::cout << "double: " << std::fixed << std::setprecision(4) << atof(input.c_str()) << std::endl;
        else
            std::cout << "double: " << std::fixed << std::setprecision(4) << static_cast<double>(input[0]) << std::endl;
        return;
    }
    if (input == "nan" || input == "+inf" || input == "-inf") {
        std::cout << "double: " << input << std::endl;
        return;
    }
    if (!has_type(input)) {
        std::cout << "double: impossible" << std::endl;
        return;
    }
    long double d = atof(input.c_str());
    if (d > DBL_MAX || d < DBL_MIN)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(4) << d << std::endl;
}

void ScalarConverter::convert(std::string input) {
    print_char(input);
    print_int(input);
    print_float(input);
    print_double(input);
}