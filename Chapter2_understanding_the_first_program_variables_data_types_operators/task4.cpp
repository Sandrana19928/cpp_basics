// Mokyklos bibliotekos knygos
#include <iostream>
using namespace std;
int main()
{

int menknygusk, metlanksk;
double metknygusk, knygusk;
cout << "Iveskite kiek vidutiniskai per menesi perskaitoma knygu mokyklos bibliotekoje: " << endl;
cin >> menknygusk;
knygusk= menknygusk * 12;
cout << "Iveskite kiek vidutiniskai per metus apsilanko lankytoju mokyklos bibliotekoje: " << endl;
cin >> metlanksk;
metknygusk= knygusk/metlanksk;
cout << "Vienas lankytojas vidutiniskai knygu perskaito mokyklos bibliotekoje: " << metknygusk << endl;

}
