#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin >> ws, name);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "\n";
    cout << "Your age is: " << age << "\n";

    return 0;
}