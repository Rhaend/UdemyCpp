#include <iostream>


int main()
{
   float Short_Side;
   float Long_Side;
   float Side_Length;
   float Square_area;

   std::cout << "Please enter the Short Site";
   std::cin >> Short_Side;

   std::cout << "Please enter the Long Site";
   std::cin >> Long_Side;

    Side_Length = 2 * Short_Side + 2 * Long_Side;
    Square_area = Short_Side * Long_Side;

    std::cout << "Side_Length" << Side_Length << std::endl;
    std::cout << "Square_area" << Square_area << std::endl;

    return 0;
}
