#include <iostream>
#include <string.h>
using namespace std;

class library
{
    public:
        //char bname[10];
        
    library()
    {
        char bname[10] = "library";
        cout << "name of book : " << bname << endl;
    }
};

int main()  
{
    library l1;
    return 0;
}        