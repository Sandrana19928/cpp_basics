//Varzos
#include <iostream>
#include <fcntl.h>
#include <iomanip>
#include <io.h>

using namespace std;

int main()
{
    int n; // laidininku skaicius
    double rlaid; // laidininku varza
    double r; // elektros grandines varza
    int i; // zinomo kartojimu skaiciaus ciklo kintamasis 

    cout << "Kiek laidininku yra elektros grandineje? ";
    cin >> n;
    r = 0;

    for (i = 1; i <= n; i = i + 1)
    {
        cout << "Iveskite laidininko varza: ";
        cin >> rlaid;
        r = r + rlaid;
    }

    cout << "Elektros grandines varza: " << setw(6) << fixed << setprecision(2) << r << endl;

    return 0;
}