//Atvirkstines varzos
#include <iostream>

using namespace std;

int main() {
    int n;
    double r, r_total = 0.0;

    cout << "Įveskite laidininkų skaičių n: ";
    cin >> n;

    cout << "Įveskite varžas r1, r2, ..., rn: " << endl;
    for (int i = 0; i < n; i++) {
        double resistance;
        cout << "r" << i + 1 << ": ";
        cin >> resistance;
        r_total += (1.0 / resistance); // Pridedame atvirkštinę varžą prie bendrosios atvirkštinės varžos sumos
    }

    r = 1.0 / r_total; // Skaičiuojame bendrą varžą iš bendrosios atvirkštinės varžos
    cout << "Bendra varža r: " << r << " omų" << endl;

    return 0;
}