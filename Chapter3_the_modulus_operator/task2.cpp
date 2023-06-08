// Miesto olimpiada
#include <iostream>
using namespace std;

int main()
{
    int n, m, k, s;

    cout << "Iveskite devintoku skaiciu: ";
    cin >> n;

    cout << "Iveskite saldainiu skaiciu (m>=n): ";
    cin >> m;

    s = m / n;
    k = m % n;

    cout << "Kiekvienam mokiniui atiteko po: " << s << " saldainiu" << endl;
    cout << "Is viso mokytojai liko saldainiu: " << k << endl;

    return 0;
}