#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    srand(time(0));

    int intentosMaximos = 5;
    int intentosRealizados = 0;

    while (intentosRealizados < intentosMaximos) {
        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;

        std::cout << "El número del primer dado es: " << dado1 << std::endl;
        std::cout << "El número del segundo dado es: " << dado2 << std::endl;

        if (dado1 == dado2) {
            std::cout << "¡Felicidades! Ganaste." << std::endl;
            break;
        } else {
            std::cout << "No sacaste par, sigue intentando." << std::endl;
            intentosRealizados++;

            if (intentosRealizados < intentosMaximos) {
                std::cout << "Te quedan " << (intentosMaximos - intentosRealizados) << " intentos." << std::endl;
                std::cout << "Presiona ENTER para lanzar los dados." << std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    if (intentosRealizados == intentosMaximos) {
        std::cout << "Se acabaron tus intentos. ¡Has perdido!" << std::endl;
    }

    return 0;
}
