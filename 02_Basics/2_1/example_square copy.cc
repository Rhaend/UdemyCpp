#include <iostream>

int main()
{
    //seitenlänge = 2* kurze_seite + 2* lange_seite
    //Flächeninhalt = kurze_seite * Lange seite

    float kurze_seite;
    float lange_seite;
    float seitenlaenge;
    float flaecheninhalt;

    std::cout << "Bitte Lange Seite Eingeben!" << std::endl;
    std::cin >> lange_seite;
    std::cout << "Bitte Kurze Seite Eingeben " << std::endl;
    std::cin >> kurze_seite;

    seitenlaenge = 2*kurze_seite + 2* lange_seite;
    flaecheninhalt = kurze_seite * lange_seite;

    std::cout << "Der Umfang ist:" << seitenlaenge << std::endl;
    std::cout << "Der Flächeninhalt ist:" << flaecheninhalt << std::endl;





    return 0;
}
