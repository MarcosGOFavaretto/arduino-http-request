#include <iostream>

int main() {

    int i;              // Signed supports positive and negative values. Default if not provided.
    unsigned int j;     // Unsigned just supports positives values.
    
    i = 100;            // 1100100
    i = -100;           // 1100100
    
    j = 100u;            // 1100100
    j = -100u;           // 11111111111111111111111110011100

    auto k = i;         // receives same type as "i" (int) during compile time.
    decltype(i) l;      // same as "auto", but keeps only type, not the value.

    std::cout << l << std::endl; // "endl" means "ends the line".

}