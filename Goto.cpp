#include <iostream>
using namespace std;

int main()
{

    int i = 10;

mylabel:
{
    cout << i << endl; 

    i--;
    if (i > 0)
        goto mylabel;                       // jump to line 9, where "mylabel" was defined.
}

    cout << "Counting finished!" << endl;
}