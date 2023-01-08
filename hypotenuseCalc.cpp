#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c;

    cout << "Enter the length of side A: ";
    cin >> a;
    cout << "Enter the length of side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The length of side C using the pythagoreas theorem is: " << c << '\n';
    return 0;
}