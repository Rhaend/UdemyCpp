#include <iostream>
#include <cstdint>


int main()
{
    char left = 'a';
    char right = 'd';
    char move;

    std::cin >> move;

    if (move == left)
        {
            std::cout << "Player movet to the left" << std::endl;
        }
    else if (move == right)
        {
            std::cout << "Player movet to the right" << std::endl;
        }
    else
        {
            std::cout << "Player has not movet" << std::endl;
        }


    return 0;
}
