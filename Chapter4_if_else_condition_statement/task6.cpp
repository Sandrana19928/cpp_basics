//lygciu skaiciavimai
#include <iostream>
#include <fcntl.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x, y; // lygties koeficentai

    cout << "Iveskite skaicius x: ";
    cin >> x;

    // Skaiciavimai ir rezultatu isvedimas
    if (x != 5)
    {
        y = 9;
    }
    else
    {
        y = 5 * x + 2;
    }

    cout << "y = " << y << endl;

    return 0;
}







