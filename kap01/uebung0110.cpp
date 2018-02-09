/**
 *  This program solves Uebung 1.10 (p. 88).
 **/

#include <iostream>

using namespace std;

enum class Geschlecht{male = 'm', female = 'f', different = 'd'};

struct Person {
  string name;
  string vorname;
  int alter;
  Geschlecht g;
};

void personAusgeben(Person* p){
  cout << "struct Person {" << endl
    << "\t" << p->name << endl
    << "\t" << p->vorname << endl
    << "\t" << p->alter << endl
    << "\t" << static_cast<char>(p->g) << endl
    << "}" << endl;
  return;
}

int main(){
  // nur Test size_t groesse;
  Person p;
  p.g = Geschlecht::different;
  cout << "Lege eine Person an...\n";
  personAusgeben(&p);
  cout << "Name eingeben: ";
  cin >> p.name;
  cout << "\nVorname eingeben: ";
  cin >> p.vorname;
  cout << "\nAlter eingeben: ";
  cin >> p.alter;
  /*cout << "\nGeschlecht eingeben [male/female/different]: ";
  cin >> p.g;*/
  personAusgeben(&p);
  system("pause");
  return 0;
}