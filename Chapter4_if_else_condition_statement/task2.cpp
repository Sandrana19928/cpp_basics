//olympic years
#include <iostream>

using namespace std;

int main() {
    int year, n;

    cout << "Enter the year: ";
    cin >> year;

    if (year < 1896) {
        cout << "Year must be 1896 or greater." << endl;
    } else {
        n = (year - 1896) / 4 + 1;

        if ((year - 1896) % 4 != 0) {
            cout << "Not Olympic" << endl;
        } else {
            cout << "Number of Olympic Games: " << n << endl;
        }
    }

    return 0;
}