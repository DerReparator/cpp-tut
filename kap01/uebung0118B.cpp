/**
 *  This program solves Uebung 1.18 (p. 108).
 */
 
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
  string dateipfad, matNrAbfrage;
  bool eingabeName = true;
  char c;
  
  struct StudentIn{
    string name;
    string matNr;
  }neuer_student;
  
  vector<StudentIn> studenten;
  
  cout << "Bitte geben Sie die Datei mit den Matr.Nr. an: ";
  cin >> dateipfad;
  ifstream quelle(dateipfad);
  
  if(!quelle.good()){
    cout << "\nProblem beim Einlesen aufgetreten.";
    getline(cin, dateipfad);
    exit(-1);
  }
  
  while(quelle.get(c)){
    if(c == '#')
      break;
    if(eingabeName){
      if(c == '\n')
        eingabeName=false;
      else
        neuer_student.name += c;
    } else {
      if(c == '\n'){
        eingabeName = true;
        studenten.push_back(neuer_student);
        neuer_student.name = "";
        neuer_student.matNr = "";
      } else {
        neuer_student.matNr += c;
      }
    }
  }
  
  for(struct StudentIn s : studenten){
    cout << s.name << " | " << s.matNr << '\n';
  }
  
  bool gefunden;
  
  do{
    gefunden = false;
    cout << "Hier MatNr. zum Abfragen eingeben: ";
    getline(cin, matNrAbfrage);
    
    if(matNrAbfrage == "x" || matNrAbfrage == "X"){
      exit(-1);
    }
    
    for(struct StudentIn s : studenten){
      if(s.matNr == matNrAbfrage){
        cout << s.name << '\n';
        gefunden = true;
        break;
      }
    }
    if(!gefunden)
      cout << "Nicht gefunden!\n";
  } while(true);
  
  system("pause");
  return 0;
}