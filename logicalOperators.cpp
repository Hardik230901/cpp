#include <iostream>
using namespace std;

int main() {

    //* && - check if two conditions are true
    //* || - check if atleast one of the conditions are true
    //* !  - reverses the logical state of its operand

    int temp;
    bool sunny = true;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp > 0 && temp < 30) { //* both of the conditions must be true to run this block of code
        cout << "The temperature is good." << '\n';
    }
    else { //! runs if the upper condition is false
        cout << "The temperature is bad." << '\n';
    }

    if (temp <= 0 || temp >= 30) { //* block of code runs even if either of the conditions is true
        cout << "The temperature is bad." << '\n';
    }
    else { //! runs if both the conditions are false
        cout << "The temperature is good." << '\n';
    }

    cout << sunny << '\n'; // true
    cout << !sunny << '\n'; //! false

    return 0;
}