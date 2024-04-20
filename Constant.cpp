#include <iostream>
using namespace std;

#define NEWLINE '\n';

const int signed_int                  = 75;
const unsigned int unsigned_int       = 75u;      // "u" or "U" means that 75 is an unsigned.
const long signed_long                = 75L;      // "L" ou "l" means that 75 is a long value;
const unsigned long unsigned_long     = 75uL;     // Unsigned long.
const double pi                       = 3.14159;
const double e                        = 1.6e-19;  // Same as 1 * 10^2.

int main() {
    cout << signed_int << NEWLINE;
    cout << unsigned_int << NEWLINE;
    cout << signed_long << NEWLINE;
    cout << unsigned_long << NEWLINE;
    cout << pi << NEWLINE;
    cout << e << NEWLINE;
}