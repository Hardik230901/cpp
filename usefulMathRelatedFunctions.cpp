#include <iostream>
#include <cmath> // include math related functions
using namespace std;

int main() {

    double x = 3.14;
    double y = 4;
    double z, a;

    z = max(x, y); // max function
    a = min(x, y); // min function

    cout << "Max is: " << z << "\n";
    cout << "Min is: " << a << "\n";

    z = pow(2, 3); // x raised to the power of y
    cout << "2 raise to the power of 3 is: " << z << '\n';

    z = sqrt(9); // square root of x
    cout << "Square root of 9 is: " << z << '\n';

    z = abs(-3); // returns the distance from 0
    cout << "Absolute value of -3 is: " << z << '\n';

    z = round(x); // rounds the number
    cout << "3.14 rounded gives: " << z << '\n';

    z = ceil(x); // returns the upper limit
    cout << "Ceil value of 3.14 is: " << z << '\n';

    z = floor(x); // returns the lower limit
    cout << "Floor value of 3.14 is: " << z << '\n';
    return 0;   
}   