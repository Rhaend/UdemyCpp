#include <iostream>
#include <cstdint>


int main ()

{
    // zahl zwischen 0 und 10
    // wenn eine 4 geählt gewonnen
    // alles andere 0

    int32_t Guess;
    std::cout << "1Bitte geben Sie Ihre Schätzung zwischen 0 bis 10 ein." << std::endl;
    std::cin >> Guess;

    if ((Guess >= 0) && (Guess <=10))

    {
        if (Guess == 4)
        {
            std::cout << "Sie haben Gewonnen!"<< std::endl;
        }
        else
        {
            std::cout << "Sie haben Verloren!"<< std::endl;
        }
    }
    else
    {
        std::cout << "Sie habe die Falsche Zahle eingegeben."<< std::endl;
    }

    return 0;
}
