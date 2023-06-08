// Balionai
#include <iostream>
using namespace std;

int main()
{
    int n, k, l, d, m, a;

    cout << "Iveskite kiek Andrius gavo balionu: ";
    cin >> n;

    cout << "Iveskite kiek balionu sprogo: ";
    cin >> k;

    l = n - k;

    cout << "Iveskite draugu skaiciu: ";
    cin >> d;

    m = l / (d + 1);
    a = l % (d + 1);

    cout << "Kiekvienam draugas gavo po: " << m << endl;
    cout << "Andriui liko balioniu: " << a << endl;

    return 0;
}