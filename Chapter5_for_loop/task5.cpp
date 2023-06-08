//grudai

#include <iostream>
using namespace std;

int main()
{
    int l = 64;          // langeliai
    long long grsk = 1;  // grudai
    long long bendrasgrsk = 0;

    for (int i = 0; i <= l; i++)
    {
        bendrasgrsk += grsk;
        grsk *= 2;
    }

    cout << "Is viso grudu: " << bendrasgrsk << endl;

    return 0;
}