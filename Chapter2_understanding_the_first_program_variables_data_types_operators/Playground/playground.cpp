// Programos vardo irasymas
#include <iostream>
using namespace std;
int main()
{

int ilgis, plotis, plotas; // kambario matmenys
double m2kaina; // plyteliu  kvadratinio metro kaina
double psuma; //pinigu suma
  cout << "Programa darba pradejo." << endl;
  cout << "Iveskite kambario ilgi: "; 
  cin >> ilgis;
  cout << "Iveskite kambario ploti: "; 
  cin >> plotis;
  plotas = ilgis * plotis;
  cout << "Kambario plotas: " << plotas << endl;
  cout << "Iveskite plyteliu 1 kvadratinio metro kaina: ";
  cin >> m2kaina;
  psuma = 1.05 * plotas * m2kaina;
  cout <<"Pinigu suma, kuria reikia sumoketi: " << psuma << endl;
  cout << "Programa darba baige.";
return 0;

}


