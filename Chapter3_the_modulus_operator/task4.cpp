// Lektuvas
#include <iostream>
using namespace std;

int main()
{
    // Reiksmes
    int a, b, c, v, m;
    cout << "Iveskite kiek valandu ir minuciu buvo kai lektuvas pakilo: ";
    cin >> a >> b;
    cout << "Iveskite kiek ore praleido lektuvas minuciu: ";
    cin >> c;

    // Skaiciavimai
    int visosminutes = (a * 60) + b + c;
    v = visosminutes / 60 % 24;
    m = visosminutes % 60;

    // Output the result
    cout << "Lektuvas nusileido " << v << " valandu ir " << m << " minuciu." << endl;

    return 0;
}


