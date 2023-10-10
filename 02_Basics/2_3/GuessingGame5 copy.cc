#include <cstdint>
#include <iostream>

bool has_won = false;

int main()
{
    do
    {
        std::cout << "bitte gib deine Glückzahl zwisch 0 bis 10 ein" << std::endl;
        std:: uint16_t number = 0U;
        std::cin >> number;

        if ((number >= 0) && (number <= 10))
       {
            if (number == 4)
            {
                has_won = true;
                std::cout << "You won!" << std::endl;
            }
            else if (number == 2)
            {
                std::cout << "You won wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "You entered an invalid number!" << std::endl;
        }
    }

    while (!has_won);

    return 0;
}
