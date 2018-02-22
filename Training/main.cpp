#include "chapter1.h"

#include <iostream>



int main(int argc, char** argv)
{
    int chapter_number = 0;
    std::cout << "Select chapter the program of which will be executed: ";
    std::cin >> chapter_number;

    switch (chapter_number)
    {
        case 1:
            executeChapter1Code();
            break;
        default:
            std::cout << "An unrecognized chapter has been chosen! Quitting...";
            return 1;
    }

    system( "pause" );
    return 0;
}