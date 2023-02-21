#include <iostream>
using namespace std;

void addt(int &a, int &b, int &sum) 
{
    sum = a + b;
}

int main()
{
    int a, b;
    int sum = 0;

    cout << "enter the value for A : ";
    cin >> a;
    cout << "enter the value for B : ";
    cin >> b;

    addt(a, b, sum);

    cout << "the sum of two number is : " << sum << endl;
    
    return 0;
}