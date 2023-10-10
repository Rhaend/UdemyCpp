#include <cstdint>
#include <iostream>

//Greater Equal: >=
// Greater: >
//Equal: ==
//Less: <
//Less Equal: <=

// AND: &&
// OR: ||



int main()
{
    std::uint32_t number;
    std::cout << "Please enter your Guess:";
    std::cin >> number;

    if ((number >= 0) && (number <= 10))
    {
        if (number == 4)
        {
            std::cout << " You Win!" << std:: endl;
        }
        else if(number== 2)
        {
            std::cout << "You won the Wooden Spoon!" << std::endl;
        }
        else
        {
            std::cout << "You Lose!" << std::endl;
        }
    }
    else
    {
        std::cout <<" You entered an invalid number!" << std::endl;
    }
    return 0;
}
