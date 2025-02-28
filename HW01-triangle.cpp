#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c) {

    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (isTriangle(a, b, c))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
