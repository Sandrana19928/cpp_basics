//Sale
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Įveskite eilių skaičių: ";
    cin >> n;

    int k;
    cout << "Įveskite kedziu skaičių pirmoje eileje: ";
    cin >> k;
    int visoKedziu = k;  // Pradinis kėdžių skaičius

    for (int i = 2; i <= n; i++) {
        k += 2;  // Kiekvienoje kitos eilėje kėdžių skaičius padidėja 2 vienetais
        visoKedziu += k;  // Pridedame kėdžių skaičių prie bendro kiekio
    }

    cout << "Kedžių reikia užsakyti: " << visoKedziu << endl;

    return 0;
}