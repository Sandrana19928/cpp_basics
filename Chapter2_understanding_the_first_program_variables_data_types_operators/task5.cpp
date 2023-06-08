// Keleiviai i Vilniu
#include <iostream>
using namespace std;

int main()
{
    int n, m, vln, v, k;

    cout << "Iveskite traukinio keleiviu skaiciu: " << endl;
    cin >> n;

    cout << "Iveskite traukinio keleiviu skaiciu vykstanciu ne i vilniu: " << endl;
    cin >> m;

    cout << "Iveskite vagonu skaiciu traukinyje: " << endl;
    cin >> v;

    vln = n - m;
    k = vln / v;

    cout << "Vidutiniskai i vilniu keleiviu vaziuoja viename vagone: " << k << endl;

    return 0;
}