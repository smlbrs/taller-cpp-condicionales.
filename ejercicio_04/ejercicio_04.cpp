#include <iostream>

int main() {

    double a;
    double b;

    std::cout << "Ingrese el primer numero: \n";
    std::cin >> a;

    std::cout << "Ingrese el segundo numero: \n";
    std::cin >> b;

    char x;
    
    std::cout << "Ingrese el operador (+, -, *, /, %): ";
    std::cin >> x;
    
    switch (x) {

        case '+':
            std::cout << "Resultado: " << a + b << std::endl;
            break;

        case '-':
            std::cout << "Resultado: " << a - b << std::endl;
            break;

        case '*':
            std::cout << "Resultado: " << a * b << std::endl;
            break;

        case '/':
            if (b == 0) {
                std::cout << "Error: No se puede dividir entre 0.\n";
            } else {
                std::cout << "Resultado: " << a / b << std::endl;
            }
            break;

        case '%':
            if (b == 0) {
                std::cout << "Error: No se puede dividir entre 0.\n";
            } else {
                std::cout << "Resultado: " << (a, b) << std::endl;
            }
            break;

        default:
            std::cout << "Operador no valido.\n";
    }

    return 0;
}
