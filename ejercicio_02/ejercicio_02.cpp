#include <iostream>
#include <cmath>

    int main () {
        
    double a;
    double b;
    double c;
      
        std::cout<<"ingresa el lado A: \n";
        std::cin>>a;
        
        std::cout<<"ingresa el lado B: \n";
        std::cin>>b;
        
        std::cout<<"ingresa el lado C: \n";
        std::cin>>c;
        
       
        if (a+b>c && a+c>b && b+a>c ) {
            
            std::cout<< "En un triangulo valido. \n";

            if (a == b && b ==c) {
                std::cout<< "tipo equilatero \n";
            }
                else if (a == b || a ==c || b ==c) {
                    std::cout<< "tipo isoceles \n";
                }
                    else {
                        std::cout<< "tipo escaleno \n";
                    }
       
        double mayor = a;
        
            if (b > mayor) mayor = b;
            if (c > mayor) mayor = c;
            
        double x = pow(a,2) + pow(b,2) + pow(c,2) - pow(mayor,2);
        
            if (pow(mayor,2) == x) { 
                std::cout << "Angulo Rectangulo \n";
            }
                else if (pow(mayor,2) < x) { 
                std::cout << "Angulo Acutangulo \n";
                }
                else {
                    std::cout << "Angulo Obtusangulo \n";
                
                } 
                
                } else { 
                std::cout<< "No forman un triangulo valido. \n";
                }
        
    return 0;
}
