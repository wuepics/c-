// Versuche Variablen zu Deklarieren und auszugeben

#include <iostream>
using namespace std;

int main(){

    int alter;
    char name;
  /*     std::cout << "Guten Tag, wie heisst Du?\n\n";
        std::cin >> name;
        std::cout << "Moinsen" << name;"\n\n";*/
        /*Abfrage von Name klappt nicht. 
        Es wird nur der erste Buchstabe ausgegeben und es wird
        nicht mehr nach dem Alter gefragt. Wird mit 0 alles berechnet*/
        std::cout << "Wie alt bist Du?\n";
        std::cin >> alter;
        std::cout << "Du bist also: " << alter << " Jahre alt\n\n";
        std::cout << "In 10 Jahren bist Du " << alter+10 << " Jahre alt\n\n";
        std::cout << "Du musst noch " << 67-alter << " Jahre arbeiten bis zur Rente\n\n";
return 0;
}