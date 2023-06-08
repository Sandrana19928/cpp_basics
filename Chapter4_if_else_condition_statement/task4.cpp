//Sviesoforas
#include <iostream>
using namespace std;

int main() {

int t;
    cout << "Iveskite praeitu minuciu skaiciu nuo valandos pradzios: ";
    cin >> t;

    if (t % 5 < 3) {
  // šiuo momentu dega žalia šviesa
  cout << "Dega zalia sviesa" << endl;
  cout << "Tuo uzsidegs raudona sviesa" << endl;
} else {
  // šiuo momentu dega raudona šviesa
  cout << "Dega raudona sviesa" << endl;
  cout << "Tuo uzsidegs zalia sviesa" << endl;
}

    return 0;
}



