#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    // for Schleife für I und J
    // Summe für jede Iteration
    // Prüfung ob gerade oder ungerade > Bool
    // Ausgabe

    for (u_int16_t i = 0 ; i < I; i++)
    {
        for (u_int16_t j = 0 ; j < J; j++)
        {
            uint16_t Summe = i + j;
            std::cout << "i: "<< i << " , j: " << j << " := ";
            if (Summe % 2 == 0)
            {
                std::cout << "Gerade!";
            }
            else
            {
                std::cout << "Ungerade!";
            }
            std::cout << '\n';

        }
    }
}
