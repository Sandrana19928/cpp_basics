//Laimingi bilietai
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Įveskite m-ojo ir n-ojo bilieto numerių ribas (m n): ";
    cin >> m >> n;

    int laimingiBilietai = 0;
    for (int bilietoNumeris = m; bilietoNumeris <= n; bilietoNumeris++) {
        int pirmiTriSkaitmenys = bilietoNumeris / 1000;
        int paskutiniaiTriSkaitmenys = bilietoNumeris % 1000;

        if (pirmiTriSkaitmenys == paskutiniaiTriSkaitmenys) {
            laimingiBilietai++;
        }
    }

    cout << "Laimingų bilietų skaičius: " << laimingiBilietai << endl;

    return 0;
}