//stociu atstumai
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, distance1, distance2, distance3;

  // Nuskaitome stociu atstumus
  cout << "Iveskite stoties A nuotoli: ";
  cin >> a;

  cout << "Iveskite stoties B nuotoli: ";
  cin >> b;

  cout << "Iveskite stoties C nuotoli: ";
  cin >> c;

  // Skaičiuojame atstumus tarp stociu
  distance1 = abs(a - b);
  distance2 = abs(a - c);
  distance3 = abs(b - c);

  // Surandame porą stociu, tarp kurių atstumas yra mažiausias
  if (distance1 < distance2 && distance1 < distance3) {
    cout << "Stotys A ir B yra artimiausios. Atstumas: " << distance1 << endl;
  } else if (distance2 < distance1 && distance2 < distance3) {
    cout << "Stotys A ir C yra artimiausios. Atstumas: " << distance2 << endl;
  } else {
    cout << "Stotys B ir C yra artimiausios. Atstumas: " << distance3 << endl;
  }

  return 0;
}