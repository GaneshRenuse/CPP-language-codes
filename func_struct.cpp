#include <iostream>
using namespace std;

struct person 
{
    char name[15];
    int rollno;
    char qualification[20];
};

void displaydata(person);

int main()
{
    person p;

    cout << "Enter full name : ";
    cin.get(p.name, 15);
    cout << "Enter age : ";
    cin >> p.rollno;
    cout << "Enter salary : ";
    cin >> p.qualification;

    displaydata(p);

    return 0;
}

