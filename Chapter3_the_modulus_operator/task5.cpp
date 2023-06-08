//various calculates
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 10;  // first digit of n
    int b = n % 10;  // last digit of n

    // remove second digit from n
    n /= 10;
    n *= 10;

    int x = -1;
    for (int i = 1; i <= 9; i++) {
        int candidate = i * 10 + b;  // new number with x in the middle
        if (candidate != n) {
            if (x != -1) {  // if more than one x satisfies the condition
                x = -2;
                break;
            }
            x = candidate;
        }
    }

    cout << x << endl;

    return 0;
}