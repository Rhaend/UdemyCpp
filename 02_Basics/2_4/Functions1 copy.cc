#include <iostream>
#include <cstdint>

std::uint32_t user_input()
    {
        std::uint32_t number =0U;
        std::cout<< "please Type a Number";
        std::cin>>number;

        return number;
    }




int main()
{
    std::uint32_t n1 = user_input();
    std::cout << n1<< '\n';
    std::uint32_t n2 = user_input();
    std::cout << n2<< '\n';
    std::uint32_t n3 = user_input();
    std::cout << n3<< '\n';

    return 0;
}
