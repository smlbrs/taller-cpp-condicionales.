#include <iostream>

int main() {

    double saldo = 1000.0; 
    double b;
    int c;
    int transacciones = 0;

    std::cout<< "=== CAJERO ATM === \n";
    std::cout<< "1. Depositar \n";
    std::cout<< "2. Retirar \n";
    std::cout<< "3. Consultar saldo \n";
    std::cout<< "Seleccione una opcion: ";
    std::cin>>c;

    switch (c) {

        case 1:
            std::cout<<"Ingrese cantidad a depositar: \n";
            std::cin>>b;
            saldo += b;
            transacciones++;
            std::cout<< "Deposito exitoso. \n";
            break;

        case 2:
            std::cout<< "Ingrese cantidad a retirar: \n";
            std::cin>>b;
            if (b > saldo) {
                std::cout<< "Error: Saldo insuficiente. \n";
            } else {
                saldo -= b;
                transacciones++;
                std::cout<< "Retiro exitoso.\n";
            }
            break;

        case 3:
            std::cout<< "Saldo actual: "<<saldo<<std::endl;
            transacciones++;
            break;

        default:
            std::cout<< "Opcion no valida. \n";
    }

    std::cout<< "Numero de transacciones realizadas: \n" 
             <<transacciones<<std::endl;

    return 0;
}
