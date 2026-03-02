#include <iostream>

int main() {

    int a;
    int b;
    
    std::cout<< "Ingrese el valor de A: \n";
    std::cin>> a;

    std::cout<< "Ingrese el valor de B: \n";
    std::cin>> b;

    int x = a;
    int y = b;

    int temp = x;
    x = y;
    y = temp;

    std::cout<< "Metodo 1 (Variable temporal): \n";
    std::cout<< "A = "<<x<< " B = "<<y<<std::endl;

    x = a;
    y = b;

    x = x + y;
    y = x - y;
    x = x - y;

    std::cout<< "Metodo 2 (Operaciones aritmeticas): \n";
    std::cout<<"A = "<<x<<" B = "<<y<<std::endl;

    x = a;
    y = b;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    std::cout<< "Metodo 3 (XOR): \n";
    std::cout<<"A = "<<x<<" B = "<<y<<std::endl;

    return 0;
}
