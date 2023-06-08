//Ugiai
#include <iostream>
#include <fcntl.h>
#include <iomanip>
#include <io.h>

using namespace std;

int main()
{
    int n; // MOKINIU SKAICIUS
    double u; // mokinio ugis
    double uvid = 0; // vidutinis ugis
    int i; // zinomo kartojimu skaiciaus ciklo kintamasis

    cout << "Kiek mokiniu yra klaseje? ";
    cin >> n;

    for (i = 1; i <= n; i = i + 1)
    {
        cout << "Iveskite mokinio ugi: ";
        cin >> u;
        uvid = uvid + u / n;
    }

    cout << "Vidutinis ugis: " << setw(6) << fixed << setprecision(2) << uvid << endl;

    return 0;
}