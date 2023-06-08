//diskriminanto skaiciavimai
#include <iostream>
#include <fcntl.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 

{
    double a, b, c; //lygties koeficentai
    double d; //diskriminantas
    double x1, x2; //lygties saknys

    cout << "Iveskite kvadr. lygties koeficientus a,b ir c: ";
    cin >> a >> b >> c;
    cout << "a = " << a << "b = " << b << "c = " << c << endl;

    
    
// Skaiciavimai ir rezultatu isvedimas
d = b * b - 4 * a * c;
if (d < 0) cout << "Lygtis neturi realiu sprendiniu" << endl;
else if (d == 0) {
x1 = -b / (2 * a);
cout << "Lygtis turi viena sprendini: x = " << x1 << endl;
}
else {
    x1 = (-b - sqrt(d))  / (2 * a);
    x2 = (-b + sqrt(d))  / (2 * a);
cout << "Lygtis turi du sprendinius: x1 = "
<< setw(6) << fixed << setprecision(2) << x1 << " ir x2 = "
<< setw(6) << fixed << setprecision(2) << x2 << endl;

}

return 0;
}