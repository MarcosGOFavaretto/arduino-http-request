#include <iostream>
using namespace std;

void myMethod(int i, int& j) {      // & makes the parameter "pass by reference". "i" is a copy of "myint" while "j" is an alias for "myint".
    i += 5;                         // Changes just the "i" local value (parameter).
    j += 10;                        // It will change "myint" value.
}

/*
 * For performance proposes, we can define a parameter as "const string& parameterName".
 * It avoids the copy of big values (like a string can be) and prohibits the function to
 * change the reference value.
*/

int main() {
    int myint = 10;
    myMethod(myint, myint);
    cout << myint << endl;
}