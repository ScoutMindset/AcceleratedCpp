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

//-------------------------------------------------------------------------
int executeChapter1Exercises()
{
    //1-1 (OK)
    std::string hello = "Hello";
    std::string message = hello + ", world" + "!";
    std::cout << message << std::endl;

    //1-2 (won't work, because we can't concatenate a string and another string literal!)
    //std::string exclam = "!";
    //message = "Hello " +  ", world" + exclam;
    //std::cout << message;

    //1-3 (OK)
    {   
        const std::string s = "a string";
        std::cout << s << std::endl; 
    }
    {   
        const std::string s = "another string";
        std::cout << s << std::endl; 
    }

    //1-4a (OK)
    {   
        const std::string s = "a string";
        std::cout << s << std::endl;
        {   
            const std::string s = "another string";
        std::cout << s << std::endl; 
        }
    }

    //1-4b (OK)
    {
        const std::string s = "a string";
        std::cout << s << std::endl;
        {
            const std::string s = "another string";
            std::cout << s << std::endl;
        }
        ;
    }

    //1-5 (NEEDS FIXING - see comment)
    {
        {std::string s = "a string";
        {std::string x = s + ", really";
        std::cout << s << std::endl;//}
        std::cout << x << std::endl; } // the curly brace had to be moved here so that "x" is in scope
        }
    }

    //1-6
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;

    std::cout << "Hello " << name << std::endl
              << ". And what is yours? ";
    std::cin >> name;
    std::cout << "Hello " << name
              << "Nice to meet you too!" << std::endl;

    return 0;
}

