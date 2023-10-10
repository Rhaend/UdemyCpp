#include <iostream>
#include <cstdint>

int Number()
{
    std::int32_t number = 0U;
    std::cout << "Bitte geben Sie ihre Nummer ein "<< '\n';
    std::cin>> number;

    return number;
}

int Ist_Gerade(std::int32_t egal)
{
    return egal % 2 == 0;
}


int main ()
{
    std::int32_t Userinput = Number();
    std::cout << Userinput << '\n';

    bool Gerade = Ist_Gerade(Userinput);
    std::cout << "Ist Gerade: " << std::boolalpha << Gerade << '\n';



    return 0;
}
