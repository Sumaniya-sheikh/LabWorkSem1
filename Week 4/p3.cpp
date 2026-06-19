//Write a C++ program to evaluate the arithmetic expression ((a + b / c * d - e)* (f - g)). Read the values a, b, c, d, e, f, g from the standard input device.


#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;
    cout << "Enter value of e: ";
    cin >> e;
    cout << "Enter value of f: ";
    cin >> f;
    cout << "Enter value of g: ";
    cin >> g;

    int result = ((a + b / c * d - e) * (f - g));
    cout << "Result = " << result << endl;

    return 0;
}
