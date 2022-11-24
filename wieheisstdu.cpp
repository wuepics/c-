#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Wie alt bist du?";
    int alter = 0;
    cin >> alter;
    //Funkt. noch nicht so richtig. Bei zb 19 werden alle drei ausgegeben
    if (alter == 18){
        cout << "Du bist über 18\n";
        }
        if (alter == 19){
        cout << "Du bist 19\n";
        }
        if (alter == 20){
        cout << "Du bist 20\n";
        }
     
return 0;
}
