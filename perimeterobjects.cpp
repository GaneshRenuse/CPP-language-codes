#include <iostream>
using namespace std;

class perimeter
{
    public :
        float a, b, c, d;

        void perirect()
        {
            float peri = 2 * (a + b);
            cout << "perimeter of rectangle of given dimensions is : " << peri << " feet" << endl;
        }

};

int main()
{
    perimeter p2;

    cout << "enter side 1 : ";
    cin >> p2.a;
    cout << "enter side 2 : ";
    cin >> p2.b;

    p2.perirect();

    return 0;
}