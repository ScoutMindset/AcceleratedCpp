#include <iostream>
#include <string>

void displayNameInFrame( const std::string& name, int framePadding )
{
    const std::string greeting = "Hello, " + name + "!";

    const std::string::size_type column_number = greeting.size() + 2 * framePadding + 2;
    const std::string::size_type row_number = 2 * framePadding + 3;
    const std::string space_padding( framePadding, ' ' );
    const std::string star_padding( column_number, '*' );
    const int middle_row = row_number / 2;
    

    for (unsigned int current_row = 0; current_row < row_number; current_row++)
    {
        int output_row_characters = 0;
        while (output_row_characters < column_number)
        {
            if ((current_row == 0) || (current_row == row_number - 1))
            {
                std::cout << star_padding;
                output_row_characters += star_padding.size();
            }
            else if (current_row == middle_row)
            {
                std::string greeting_row = "*" + space_padding + greeting + space_padding + "*";
                std::cout << greeting_row;
                output_row_characters += greeting_row.size();
            }
            else
            {
                std::string space_padding_row = "*" + space_padding + std::string(greeting.size(), ' ') + space_padding + "*";
                std::cout << space_padding_row;
                output_row_characters += space_padding_row.size();
            }

            std::cout << std::endl;
        }
    }
}

int executeChapter2Code()
{
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Please enter frame size: ";
    std::string::size_type fram_size;
    std::cin >> fram_size;

    displayNameInFrame( name, fram_size );

    return 0;
}

//-------------------------------------------------------------------------
int executeChapter2Exercises()
{
    std::cout << "Chapter2";

    return 0;
}
