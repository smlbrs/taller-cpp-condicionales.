#include <iostream>

int main () {
    
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;
    
    int a;
    std::cout<< "Ingrese el valor entero de permisos (0-7): \n";
    std::cin>>a;

    std::cout<< "Permisos detectados: \n";

    if (a & LEER) {
        std::cout<< "- Leer \n";
    }

        if (a & ESCRIBIR) {
        std::cout<< "- Escribir \n";
        }

            if (a & EJECUTAR) {
            std::cout<< "- Ejecutar \n";
            }

                if (a == 0) {
                std::cout<< "No tiene permisos. \n";
                }
    
    return 0;
}
