#include <iostream>
#include <string>

int main() {

    int nota;
    std::string estado;
    char letra;

    std::cout<< "Ingrese la nota (0-100): ";
    std::cin>> nota;

    if (nota >= 90 && nota <= 100) {
        letra = 'A';
        estado = "Aprobado";
        }
            else if (nota >= 80) {
            letra = 'B';
            estado = "Aprobado";
            }
                else if (nota >= 70) {
                 letra = 'C';
                estado = "Aprobado";
                }
                    else if (nota >= 60) {
                     letra = 'D';
                    estado = "Aprobado";
                    }
                    else if (nota >= 0) {
                     letra = 'F';
                     estado = "Reprobado";
                    }
            else {
            std::cout << "Nota invalida.\n";
            return 0;
            }

    std::cout<< "Letra: "<<letra<<std::endl;
    std::cout<< "Estado: "<<estado<<std::endl;

    return 0;
}
