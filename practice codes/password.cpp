#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char user[10];
    char pass[10] = "sppug";
    char passg[10];
    int value;

    cout << "enter your username : " << endl;
    cin >> user;

    cout << "enter your password : " << endl;
    cin >> passg;

    value = strcmp(pass, passg);

    if(value == 0)
        cout << "logged in successfully" << endl;
    else
        cout << "entered password was wrong " << endl;

    return 0;
}