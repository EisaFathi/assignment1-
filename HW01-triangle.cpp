#include <iostream>
#include <cmath>

using namespace std;

bool isTriangle(int a, int b, int c) {

    return (a + b > c) && (a + c > b) && (b + c > a) &&
           (abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (isTriangle(a, b, c))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
