#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr;
    ptr = arr;

    // printing address of array elements using pointer.
    for (int i = 0; i < 10; i++)
    {
        cout << "&arr[" << i << "] = " << &ptr[i] << endl;
    }

    // printing array elements using pointer.
    for (int i = 0; i < 10; i++)
    {
        cout << "arr [ " << i << " ] = " << ptr[i] << endl; 
    }

    return 0;
}