// Übung von Cout/Cin

#include <iostream>

int main(){
    constexpr double pi = 3.141592;
    double r = 0.0;
    std::cout << "Kreisumfangsberechnung\n";
    std::cout << "Bitte Radius eingeben:\n";
    std::cin >> r;
    std::cout << "Ich berechne mit Radius " << r;
    
    if (std::cin.fail()){
        std::cerr << "Fehler bei der Eingabe, bitte prüfen!\n";
        return EXIT_SUCCESS;
    }
const double U = 2*r*pi;
std::cout << "\nDer Umfang betraegt:" << U << "\n";

return EXIT_SUCCESS;
}