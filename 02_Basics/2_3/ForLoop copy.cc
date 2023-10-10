#include <cstdint>
#include <iostream>

int main()
{
   // for (std::uint16_t i = 0; i < 5; i++)
   for (int16_t i; i < 3; i++)
        {
            std::cout << i << std::endl;
            for ( int16_t j = 10; j < 13; j++ )
                {
                     std::cout << j << std::endl;
                }
        }

    return 0;
}
