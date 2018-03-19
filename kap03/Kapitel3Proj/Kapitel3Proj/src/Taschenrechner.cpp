#include "Taschenrechner.h"

Taschenrechner::Taschenrechner(const std::string anfrage)
: term {anfrage}, ergebnis {0L}, term_index {0}
{
    char c;
    get(c);
    /* Ergebnis berechnen */
    ergebnis = ausdruck(c);
}

void Taschenrechner::get(char& c){
    if(term_index >= term.length()){
        c = '#';
    } else {
        c = term[term_index++];
    }
}
/* Copy+Paste aus Uebung 2.6 */

long Taschenrechner::ausdruck(char& c) { // Übergabe per Referenz!
  long a; // Hilfsvariable für Ausdruck
  if(c == '-') {
    get(c); // - im Eingabestrom überspringen
    a = -summand(c); // Rest an summand() übergeben
  } else {
    if(c == '+'){
      get(c); // + überspringen
    }
    a = summand(c);
  }

  while(c == '+' || c == '-'){
    if(c == '+') {
        get(c); // + überspringen
      a += summand(c);
    } else {
      get(c); // - überspringen
      a -= summand(c);
    }
  }
  return a;
}

long Taschenrechner::summand(char& c){
  long s = faktor(c);
  while(c == '*' || c == '/'){
    if(c == '*') {
      get(c); // * überspringen
      s *= faktor(c);
    } else {
      get(c); // / überspringen
      s /= faktor(c);
    }
  }
  return s;
}

long Taschenrechner::faktor(char& c) {
  long f;
  if(c == '(') {
    get(c); // ( überspringen
    f = ausdruck(c);
    if(c != ')' )
      std::cout << "Rechte Klammer fehlt!\n"; // *** siehe Text unten
    else {
        get(c); // ) überspringen
    }
  } else {
    f = zahl(c);
  }
  return f;
}

long Taschenrechner::zahl(char& c) {
  long z = 0;
  // isdigit() ist eine Funktion (genauer: ein Makro), das zu true ausgewertet wird,
  // falls c ein Zifferzeichen ist. Die Verwendung setzt #include <cctype> voraus.
  while(isdigit(c)) { // d.h. c >= '0' && c <= '9'
    // Zur Subtraktion von '0' siehe Seite 57.
    z = 10*z + long(c-'0'); // implizite Typumwandlung
    get(c);
  }
  return z;
}
