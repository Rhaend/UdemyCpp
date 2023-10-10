#include <iostream>

int main()
{

    u_int16_t age1;
    u_int16_t age2;
    u_int16_t older_age;


    std::cout << "Please enter AGE 1" << std::endl;
    std::cin >> age1;
    std::cout << "Please enter AGE 2" << std::endl;
    std::cin >> age2;


    older_age = age1 > age2 ? age1 : age2;


    std::cout << "The older one is" << older_age << std::endl;


return 0;
}
