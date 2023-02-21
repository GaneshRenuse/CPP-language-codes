#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int count2 = 0;
    for (int i = 1000; i <= 9999; i++)
    {
        if (i % 4 == 0)
        {
            count++;
        }
        count2++;
    }
    cout << "count is : " << count << endl;
    cout << "count of numbers between 1000 and 9999 is : " << count2 << endl;

    return 0;
}