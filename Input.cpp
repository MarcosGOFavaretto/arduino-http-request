#include <iostream>
using namespace std;

int main() {

    string name;
    int age;

    cout << "What" << " " << "is your Name?" << endl;
    getline(cin, name);                                 // Asks for user's string (including spaces) input.

    cout << "How old are you?" << endl;
    cin >> age;                                         // Asks for user's int input.

    cout << "Hello " << name << ", you are " << age << " years old!" << endl;
}