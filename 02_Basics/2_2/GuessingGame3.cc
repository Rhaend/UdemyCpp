#include <cstdint>
#include <iostream>

int main()
{
    std::uint32_t number = 0U;
    std::cout << "Please enter your guess: ";
    std::cin >> number;

    if ((number >= 0) && (number <= 10))
    {
        if (number == 4)
        {
            std::cout << "You won!" << std::endl;
        }
        else if (number % 2 == 0)
        {
            std::cout << "You won the wooden spoon!" << std::endl;
        }
        else
        {
            std::cout << "You lose!" << std::endl;
        }
    }
    else
    {
        std::cout << "You entered an invalid number!" << std::endl;
    }

    return 0;
}
