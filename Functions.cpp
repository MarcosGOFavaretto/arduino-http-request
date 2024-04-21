#include <iostream>
using namespace std;

void iWillDeclareItLater(int i); // Function's signature must be specified before its use. Body can be specified later.

/*
 * Calls to inline functions are replaced by compiler by functions body.
 */
inline string concat(const string &str1, const string &str2 = " Universe!") // " Universe!" is the default str2 value. If a value is not specified, it will be used.
{
    return str1 + str2;
}

string myMethod(const string &str1, const string &str2)
{
    return str1 + str2;
}

int main()
{
    string myString = concat("Hello");
    cout << myString << endl;

    iWillDeclareItLater(1);
}

void iWillDeclareItLater(int i) {
    cout << "I told you!" << endl;
}