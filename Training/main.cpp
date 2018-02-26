#include "chapter1.h"
#include "chapter2.h"

#include <cctype>
#include <iostream>

enum class ChapterOption{UNRECOGNIZED = 0, CHAPTER_CODE, CHAPTER_EXERCISES};

ChapterOption getChapterOption( const char& option );

int main(int argc, char** argv)
{
    char chapter_or_homework_char;
    std::cout << "Execute (c)hapter program or (e)xercises? ";
    std::cin >> chapter_or_homework_char;
    ChapterOption chapter_option = getChapterOption( chapter_or_homework_char );

    int chapter_number = 0;
    std::cout << "Select chapter the program of which will be executed: ";
    std::cin >> chapter_number;

    switch (chapter_number)
    {
        case 1:
            
            if (chapter_option == ChapterOption::CHAPTER_CODE)
            {
                executeChapter1Code();
            }
            else if (chapter_option == ChapterOption::CHAPTER_EXERCISES)
            {
                executeChapter1Exercises();
            }
            else if (chapter_option == ChapterOption::UNRECOGNIZED)
            {
                return chapter_number;
            }

            break;
        case 2:
            if (chapter_option == ChapterOption::CHAPTER_CODE)
            {
                executeChapter2Code();
            }
            else if (chapter_option == ChapterOption::CHAPTER_EXERCISES)
            {
                executeChapter2Exercises();
            }
            else if (chapter_option == ChapterOption::UNRECOGNIZED)
            {
                return chapter_number;
            }

            break;
        default:
            std::cout << "An unrecognized chapter has been chosen! Quitting...";
            return -1;
    }

    system( "pause" );
    return 0;
}

ChapterOption getChapterOption( const char& option )
{
    if (tolower( option ) == 'c')
    {
        return ChapterOption::CHAPTER_CODE;
    }
    else if (tolower( option ) == 'e')
    {
        return ChapterOption::CHAPTER_EXERCISES;
    }
    else
    {
        return ChapterOption::UNRECOGNIZED;
    }
}