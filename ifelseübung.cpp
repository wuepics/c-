// If / Else Anweisungen verstehen und üben

#include <iostream>
using namespace std;

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
