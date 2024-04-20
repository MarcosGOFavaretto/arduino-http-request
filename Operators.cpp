#include <iostream>
using namespace std;

int main() {

    int i = 10;
    int j = 20;

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 10
    //cout << "Value of \"j\": " << j << endl;    // Value of "j": 20

    i = j;

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 20

    j = 1;                                      // "i" is not updated, just "j".

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 20
    //cout << "Value of \"j\": " << j << endl;    // Value of "j": 1

    i = 10 + (j = 11);

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 21
    //cout << "Value of \"j\": " << j << endl;    // Value of "j": 11

    i = j = 1;                                  // Both "i" and "j" receives the same value;

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 1
    //cout << "Value of \"j\": " << j << endl;    // Value of "j": 1

    i = 2;                                      // "j" is not modified;

    //cout << "Value of \"i\": " << i << endl;    // Value of "i": 2
    //cout << "Value of \"j\": " << j << endl;    // Value of "j": 1

    /*
    The following statement would first assign the value 3 to b, and then assign b+2 to variable a.
    So, at the end, variable a would contain the value 5 while variable b
    would contain value 3.
    */
    i = (j = 3, j + 2);                         // "," separates expressions.

    cout << "Value of \"i\": " << i << endl;    // Value of "i": 5
    cout << "Value of \"j\": " << j << endl;    // Value of "j": 3


}