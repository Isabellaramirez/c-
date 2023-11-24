#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arreglo1, arreglo2, arreglo3;
    int n = 0, opcion = 0;

    while (opcion != 2) {
        // Menú para el usuario
        std::cout << "-----MENU-----" << std::endl;
        std::cout << "1. Ingresar arreglos para uso del algoritmo." << std::endl;
        std::cout << "2. Salir" << std::endl;

        try {
            std::cout << "Escoja una opcion por favor: ";
           
            std::cin >> opcion;

            switch (opcion) {
                case 1: {
                    bool validInput = false;

                    while (!validInput) {
                       
                        try {
                            std::cout << "Por favor digita de que tamaño desee los arreglos: ";
                            std::cin >> n;

                            if (n < 1) {
                                std::cout << "Tienes que poner un numero positivo." << std::endl;
                            } else {
                                validInput = true;
                            }
                        } catch (std::exception const &e) {
                            std::cout << "Digita un numero correcto" << std::endl;
                        }
                    }

                   
                    arreglo1.resize(n);
                    std::cout << "Digita los numeros del primer arreglo: " << std::endl;
                    bool validInput2 = false;

                    while (!validInput2) {
                        try {
                            for (int i = 0; i < n; i++) {
                                std::cout << "Numero " << (i + 1) << ": ";
                                std::cin >> arreglo1[i];
                            }
                            validInput2 = true;
                        } catch (std::exception const &e) {
                            std::cout << "Digita un numero correcto" << std::endl;
                            std::cout << "Digita los numeros del primer arreglo de nuevo por favor." << std::endl;
                        }
                    }

                  
                    arreglo2.resize(n);
                    std::cout << "Digita los numeros del segundo arreglo: " << std::endl;
                    bool validInput3 = false;

                    while (!validInput3) {
                        try {
                            for (int i = 0; i < n; i++) {
                                std::cout << "Numero " << (i + 1) << ": ";
                                std::cin >> arreglo2[i];
                            }
                            validInput3 = true;
                        } catch (std::exception const &e) {
                            std::cout << "Digita un numero correcto" << std::endl;
                            std::cout << "Digita los numeros del segundo arreglo de nuevo por favor." << std::endl;
                        }
                    }

                   
                    arreglo3.resize(n);
                    for (int i = 0; i < n; i++) {
                        arreglo3[i] = arreglo1[i] * arreglo2[n - (i + 1)];
                    }

                    // Imprimir los arreglos
                    std::cout << "Este es el arreglo 1: ";
                    for (int i : arreglo1) {
                        std::cout << i << " ";
                    }

                    std::cout << "\nEste es el arreglo 2: ";
                    for (int i : arreglo2) {
                        std::cout << i << " ";
                    }

                    std::cout << "\nEste es el arreglo resultante: ";
                    for (int i : arreglo3) {
                        std::cout << i << " ";
                    }
                    std::cout << std::endl;
                    break;
                }
               
                case 2:
                    std::cout << "Saliendo..." << std::endl;
                    break;
                default:
                    std::cout << "Elige una opcion correcta." << std::endl;
            }
        } catch (std::exception const &e) {
            std::cout << "Digite una opcion correcta." << std::endl;
        }
    }

    return 0;
}
