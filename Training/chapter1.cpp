#include <iostream>
#include <string>
//#include "chapter1.h"

int executeChapter1Code()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";
    const std::string spaces( greeting.size(), ' ' );
    const std::string second_line = "* " + spaces + " *";
    const std::string first_line( second_line.size(), '*' );

    std::cout << first_line << std::endl;
    std::cout << second_line << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;;
    std::cout << second_line << std::endl;
    std::cout << first_line << std::endl;

    return 0;
}


