#include <iostream>
using namespace std;

//pointer examples prog 2

int main()
{
    int a = 54;
    int* add = &a;

    cout << "Address of a : " << add << endl;
    cout << "value of a : " << *add << endl;

    *add = 30;

    cout << "value of a : " << a << endl;
    cout << "value at *add : " << *add << endl;
    return 0;
}