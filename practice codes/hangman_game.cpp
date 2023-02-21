#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

void drawing(int draw);

int main()   
{
    string theword;
    int randword;
    string words[22] = {"fat", "bat", "mat","sat","dad","lad","cat","mom","bun","sun","fun","run","rat","tom","cop","mop","van","hat","red","app","sap"};
    
    int draw = 1;
    string ans;

    randword = rand()%22;
    theword = words[randword];
    
    for (int i = 0; i < 22; i++)
    {
        words[i]='x';
    }
    
    cout << "\t\t\t\tWelcome To Hangman\n";
    cout << "\t\t\t\t******************\n";
    cout << "The word list is : fat \tbat \tmat \tsat \tdad \tlad \tcat \tmom \tbun \tsun \tfun \trun \trat \ttom \tcop \tmop \tvan \that \tred \tapp \tsap\n";
    cout << "\nGuess the right word\n";

}