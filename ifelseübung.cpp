// If / Else Anweisungen verstehen und üben

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

/* Funktioniert
int main(){
    int wert=0;
    cout<<"Bitte Zahl eingeben:";
    cin>>wert;
    if(cin.fail()){
        //Hier Code wenn keine Zahl eingeben wurde
        cout <<"Du sollst eine Zahl eingeben, was los bei dir?\n";
        }
        else {
            cout <<"Die Zahl " <<"* " <<wert <<" *" <<" wurde erkannt, danke!\n";
            }
    cout <<"Das wars auch schon, bis dann und liebe Gruesse\n";
    cout<<endl;
cout <<"wuepics@git_19.11.22\n";
cout<<endl;
}
*/

// Ab hier Test mit Namensabfrage
int main(){
    int wert=0;
char name[100];
    cout << "Bitte gib Deinen Namen ein: " << endl;
    cin >> name;
    cout << "Hallo " << name << endl;



    cout<< name << ", bitte eine Zahl eingeben:";
    cin>>wert;
    if(cin.fail()){
        //Hier Code wenn keine Zahl eingeben wurde
        cout <<"Du sollst eine Zahl eingeben, was los bei dir?\n";
        }
        else {
            cout <<"Die Zahl " <<"* " <<wert <<" *" <<" wurde erkannt, danke!\n";
            }
    cout <<"Das wars auch schon " << name <<", bis dann und liebe Gruesse\n";
    cout<<endl;
cout <<"wuepics@git_19.11.22\n";
 
 
 /*Ausgabe in Datei deutsche Vokabeln
    ofstream output_file("./name.txt");
    ostream_iterator<string> output_iterator(output_file,"\n");
    copy(name.begin(), name.end(), output_iterator);*/


cout<<endl;
}
