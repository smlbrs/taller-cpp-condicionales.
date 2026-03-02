#include <iostream>

int main() {

    int a;
    bool esBisiesto = false;

    std::cout<< "Ingrese un anio: \n";
    std::cin>>a;

    if (a % 4 == 0) {

        if (a % 100 == 0) {

            if (a % 400 == 0) {
                esBisiesto = true;
                std::cout<< "Es divisible entre 400. \n";
            } else {
                std::cout<< "Es divisible entre 100 pero no entre 400. \n";
            }

        } else {
            esBisiesto = true;
            std::cout<< "Es divisible entre 4 pero no entre 100. \n";
        }

    } else {
        std::cout<< "No es divisible entre 4. \n";
    }

            if (esBisiesto) {
            std::cout<<a<< " es un anio bisiesto. \n";
            } else {
                std::cout<<a<< " NO es un anio bisiesto. \n";
    }

    return 0;
}
