#include <iostream>
using namespace std;

// example of refernce variable
int main()
{
    float x = 23;
    float &y = x;

    // now y is refernced to x you can now use both x and y with the same value.
    cout << x << endl;
    cout << y << endl;

    x = 234; 
    // if you change the value of x then y is also changed.

    cout << x << endl;
    cout << y << endl;

    return 0;
}