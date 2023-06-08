// Minutes ir sekundes nuo vidurnakcio
#include <iostream>
using namespace std;
int main()
{

int valandos, minutes, minskaicius, sekskaicius; //po vidurnakcio
cout << "Iveskite kiek laikrodis rodo valandu: ";
cin >> valandos;
cout <<"Iveskite kiek lairodis rodo minuciu: ";
cin >> minutes;
minskaicius= valandos * 60 + minutes;
cout << "Laikrodis rodo minuciu skaiciu po vidurnakcio: " << minskaicius << endl;
sekskaicius= minskaicius * 60;
cout << "Laikrodis rodo minuciu skaiciu po vidurnakcio: " << sekskaicius;


}