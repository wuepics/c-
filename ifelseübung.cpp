// If / Else Anweisungen verstehen und üben

#include <iostream>
using namespace std;

/* Funktioniert
int main(){
    int wert=0;
    std::cout<<"Bitte Zahl eingeben:";
    std::cin>>wert;
    if(std::cin.fail()){
        //Hier Code wenn keine Zahl eingeben wurde
        std::cout <<"Du sollst eine Zahl eingeben, was los bei dir?\n";
        }
        else {
            std::cout <<"Die Zahl " <<"* " <<wert <<" *" <<" wurde erkannt, danke!\n";
            }
    std::cout <<"Das wars auch schon, bis dann und liebe Gruesse\n";
    system ("Pause");
std::cout <<"wuepics@git_19.11.22\n";
system ("Pause");
}
*/

// Ab hier Test mit Namensabfrage
int main(){
    int wert=0;
char text[100];
    std::cout << "Bitte gib Deinen Namen ein: " << endl;
    std::cin >> text;
    std::cout << "Hallo " << text << endl;

system ("Pause");

    std::cout<< text << ", bitte eine Zahl eingeben:";
    std::cin>>wert;
    if(std::cin.fail()){
        //Hier Code wenn keine Zahl eingeben wurde
        std::cout <<"Du sollst eine Zahl eingeben, was los bei dir?\n";
        }
        else {
            std::cout <<"Die Zahl " <<"* " <<wert <<" *" <<" wurde erkannt, danke!\n";
            }
    std::cout <<"Das wars auch schon " << text <<", bis dann und liebe Gruesse\n";
    system ("Pause");
std::cout <<"wuepics@git_19.11.22\n";
system ("Pause");
}
