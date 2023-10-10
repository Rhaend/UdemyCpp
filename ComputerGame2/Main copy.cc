#include <iostream>
#include <cstdint>

int main ()
{
    char left = 'a';
    char right ='d';
    //char move;
    char input;
    bool won = false;
    std::uint64_t goal = 9U;
    std::uint16_t lengh = goal + 1;

    std::uint64_t position = 0U;


    // spieler kann sollange spielen bis position = goal ist

    do
    {

        if (position == goal)
            {
                won = true;
            }

        // 10 positionen
        // soll für jede Position einmal schleife durchlaufen
        // wenn schleife = start dann |
        // wenn schleife = Position dann P
        // wenn schleife = Goal dann |

        for (std::uint16_t i = 0; i < lengh; i++ )
            {
                if (i == position)
                    {
                        std::cout << "P";
                    }
                else if (i == 0 || i == goal)
                    {
                        std::cout << "|";
                    }
                else
                    {
                        std::cout << ".";
                    }
            }
        std::cin >> input;

        // s = position -1
        // d = postion + 1


        if (input == left && position > 0)
            {
                position--;
            }
        else if (input == right && position < goal)
            {
                position++;
            }


    }
     while (!won);


    return 0;
}
