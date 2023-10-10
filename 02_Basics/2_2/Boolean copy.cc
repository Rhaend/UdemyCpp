#include <iostream>
#include <cstdint>

int main ()
{
    int32_t number;

    std::cout << "Bitte eine Zahle zwischen 0 bis 10 eingeben"<< std::endl;
    std::cin >> number;

    bool check = (number >=0) && (number <=10);
    std::cout << "Ihr Wert ist :"<< std::boolalpha << check << std::endl;




    return 0;
}
