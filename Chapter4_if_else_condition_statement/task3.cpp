//Virves ilgis
#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Iveskite virves ilgi (m): ";
    cin >> m;

    if (m < 4) {
        cout << "Virvė per trumpa, negalima pažymėti stačiakampio." << endl;
    } else {
        int s = (m/4)*(m/4+1);
        cout << "Didžiausias stačiakampio plotas, kurį galima pažymėti su " << m << " metrų virve: " << s << " kvadratinių metrų." << endl;
    }

    return 0;
}