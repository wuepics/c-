#include <iostream>
using namespace std;

int main(){
    std::cout <<"Rechne zwei Zahlen zusammen und erhalte 1% davon\n\n";
int a;
    std::cout << "Wert =\n";
    std::cin >> a;
int b; 
    std::cout << "Wert =\n";
    std::cin >> b;
    std::cout << endl;
std::cout << a << "+" << b << "=";
std::cout << a+b;   
std::cout << endl;
int erg = a+b;
int prozent = erg/100;
std::cout << endl;
std::cout << endl;
std::cout << "1 Prozent von " << erg << " sind " << prozent;
std::cout << endl;
std::cout << endl;
std::cout << " Wird bei Prozent null angezeigt, dann betraegt das Ergebnis unter 0";
return 0;
}
