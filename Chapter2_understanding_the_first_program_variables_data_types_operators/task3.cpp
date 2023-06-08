// Tautvydo gimtadienis
#include <iostream>
using namespace std;
int main()
{

int tautvmetai, menesiai, dienos, valandos;
cout << "Iveskite kiek tautvydui metu: " << endl;
cin >> tautvmetai;
menesiai= tautvmetai * 12;
cout << "Tautvydas nugyveno menesiu: " << menesiai << endl;
dienos= tautvmetai * 365;
cout << "Tautvydas nugyveno dienu: " << dienos << endl;
valandos= dienos * 24;
cout << "Tautvydas nugyveno valandu: " << valandos << endl;

}
