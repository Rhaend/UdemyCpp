#include <iostream>
#include <cstdint>

int main ()
{

    std::int16_t sum = 0;

    do
    {
        std::cout <<"\n Aktuelle Summe " << sum << std::endl;
        int16_t input=0U;
        std::cin>> input;

        if (input < 0)
        {
                continue;
        }


        sum += input;

    }
    while (sum < 10U);

    return 0;
}
