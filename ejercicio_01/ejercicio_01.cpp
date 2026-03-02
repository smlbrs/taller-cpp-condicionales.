#include <iostream>


int main () {
    double celcius;
    
    std::cout<< "ingresa el numero celcius: \n";
    std::cin>>celcius;
    
    char a;
    
    double F = (celcius * 9/5 + 32);
    
    
    std::cout<< "ingrese que formula quiere usar, solo pon la inicial principal (´F´ahrenheit, ´K´elvin, ´R´ankine): \n";
    std::cin>>a;
    
    
    if (a == 'F') {
        
        std::cout<< "esta formula seria (celcius * 9/5 + 32)"<<std::endl;
        std::cout<< "quedaria: \n"<<(celcius * 9/5 + 32);
    }
        else if (a == 'K') {
            
            std::cout<< "esta formula seria (celcius + 273.15)"<<std::endl;
        std::cout<< "quedaria: \n"<<(celcius + 273.15);
        
        }
            else if (a == 'R') {
                
            std::cout<< "esta formula seria (celcius + 273.15 * 9/5)"<<std::endl;
        std::cout<< "quedaria: \n"<<(celcius + 273.15 * 9/5);
            }
    
    
    return 0;
}
