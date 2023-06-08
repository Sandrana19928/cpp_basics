// Mokyklos bibliotekos knygos
#include <iostream>
using namespace std;

int main()
{
    int k;
    double c, kg;

    cout << "Iveskite baudos suma litais tukstanciu skaiciu: " << endl;
    cin >> k;

    c = k * 100000;
    kg = c * 0.83 / 1000;

    cout << "Monetu svoris centais kilogramais: " << kg << endl;

    return 0;
}