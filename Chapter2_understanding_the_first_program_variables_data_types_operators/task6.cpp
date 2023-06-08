// Tarakono kelias
#include <iostream>
using namespace std;

int main()
{
    int cmg, cms;
    double g;

    cout << "Iveskite tarakono greiti km/h: " << endl;
    cin >> g;

    cmg = g * 100000;
    cms = cmg / 3600;

    cout << "Tarakonas nubega cm per s: " << cms << endl;

    return 0;
}
