#include <iostream>
#include <cstdint>

int main ()
{
    std::uint16_t max_versuche = 3;
    //std::uint16_t versuch = 0;



    //for (; versuch < max_versuche; versuch++)
    for (std::uint16_t versuch = 0; versuch < max_versuche; versuch++)
    {
        std::uint16_t guess = 0U;
        std::cout << "Bitte gib eine Spielzahl  zwischen 0 bis 10 ein" << std::endl;
        std::cin >> guess;

        if ((guess >= 0) && (guess <= 10))
            {
            if (guess == 4)
                {
                std::cout << "You won!" << std::endl;
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
    return 0;
}
