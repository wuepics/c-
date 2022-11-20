// Vokaltrainer inkl. Speicherung in zwei Dateien
//Includes
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
// Namespace std sorgt dafür das std bei std::cout weggelassen werden kann
using namespace std;
//Begin Programm
int main(){
    // string für Deutsch und English
    vector<string>voc_german;
    vector<string>voc_english;
    //Datei auslesen
    ifstream in("voc_german.txt");
    ifstream in2("voc_english");
    string str;
    while (getline(in, str))
    {
        if(str.size()> 0)
        voc_german.push_back(str);
    }
    while (getline(in2, str)){
        if(str.size()> 0)
        voc_english.push_back(str);
    }
    // Menü Vokabeltrainer Abfrage der gewünschten Option
    cout << "Vokabeltrainer\nBitte treffe eine Auswahl:\n";
    cout << "(1) Neue Vokabel hinzufügen\n";
    cout << "(2) Vokabeltest starten\n";
    // Durch cin>>option wid string option befüllt
    string option;
    cin >> option;
    // wird die 1 gewählt, geht es weiter mit der Eingabe der Vokabel
    if (option == "1"){
    //Eingabe Deutscher Vokabel
    cout << "Welche Vokabel (deutsch)?\n";
    string german;
    string english;
    // cin >> german speichert die Vokabel in string german
    cin     >> german;
    // Eingabe englischer Vokabel
    cout << "Wie lautet die Übersetzung?\n";
    // cin >> english speichert die Vokabel in string english
    cin  >> english;
    // Leerzeile
    cout << endl;
    // Eingabe wird bestätigt
     cout<<"Vokabel hinzugefügt\n";
     // Anzeige der insgesamt abgespeicherten Vokabeln
    cout <<"Hinzugefügte Vokablen:"+ to_string(voc_german.size());
    cout << endl;
    cout << endl;
    // Schreiben in Datei
    voc_german.push_back(german);
    voc_english.push_back(english);

    //Ausgabe in Datei deutsche Vokabeln
    ofstream output_file("./voc_german.txt");
    ostream_iterator<string> output_iterator(output_file,"\n");
    copy(voc_german.begin(), voc_german.end(), output_iterator);
    //Ausgabe in Datei deutsche Vokabeln
    ofstream output_file2("./voc_english.txt");
    ostream_iterator<string> output_iterator2(output_file2,"\n");
    copy(voc_english.begin(), voc_english.end(), output_iterator2);
    
    } else { 
        cout << "Vokabeltest wird gestartet...\n";
    }
return 0;
}

