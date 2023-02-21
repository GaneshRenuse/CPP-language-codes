#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ofstream;
using std::ifstream;
using std::ios;

class account_query
{
    private : 
        char account_number[20];
        char firstname[10];
        char lastname[10];
        float total_Balance;

    public :
        void read_data();
        void show_data();
        void write_rec();
        void read_rec();
        void search_rec();
        void edit_rec();
        void delete_rec();
};

void account_query::read_data()
{
    cout << "\nEnter Account Number : ";
    cin >> account_number;
    cout << "Enter First Name : ";
    cin >> firstname;
    cout << "Enter Last Name : ";
    cin >> lastname;
    cout << "Enter Balance : ";
    cin >> total_Balance;
    cout << endl;
}

void account_query::show_data()
{
    cout << "Account Number : " << account_number << endl;
    cout << "First name : " << firstname << endl;
    cout << "Last Name : " << lastname << endl;
    cout << "Current Balance Rs. " << total_Balance << endl;
    cout << "------------------------------------" << endl;
}

void account_query::write_rec()
{
    ofstream outfile;
    outfile.open("record.bank", ios::binary | ios::app);
    read_data();
    outfile.write(reinterpret_cast <char *>(this), sizeof(*this));
    outfile.close();
}

void account_query::read_rec()
{
    ifstream infile;
    infile.open("record.bank", ios::binary);
    if(!infile)
    {
        cout << "Error in opening! file not found!!" << endl;
        return;
    }
    cout << "\n****Data from file****" << endl;
    while(!infile.eof())
    {
        if(infile.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
        {
            show_data();
        }
    }
    infile.close();
}

void account_query::search_rec()
{
    int n;
        ifstream infile;
        infile.open("record.bank", ios::binary);
        if(!infile)
        {
            cout << "\nError in opening! File not found!!" << endl;
            return;
        }

        infile.seekg(0, ios::end);
        int count = infile.tellg()/sizeof(*this);
        cout << "\n There are " << count << " Record in the file";
        cout << "\n Enter Record Number to search : ";
        cin >> n;
        infile.seekg((n-1)*sizeof(*this));
        infile.read(reinterpret_cast<char*>(this), sizeof(*this));
        show_data();
}

void account_query::edit_rec()
{
    int n;
    fstream iofile;
    iofile.open("record.bank", ios::in | ios::binary);
    if(!iofile)
    {
        cout << "\nError in opening! file not found!!" << endl;
        return;
    }

    iofile.seekg(0, ios::end);
    int count = iofile.tellg()/sizeof(*this);
    cout << "\n There are " << count << " record in the file";
    cout << "\n Enter record number to edit : ";
    cin >> n;
    iofile.seekg((n-1)*sizeof(*this));
    iofile.read(reinterpret_cast<char*>(this), sizeof(*this));
    cout << "record " << n << " has following data" << endl;
    show_data();
    iofile.close();
    iofile.open("record.bank", ios::out|ios::in|ios::binary);
    iofile.seekp((n-1)*sizeof(*this));
    cout << "\n Enter data to modify " << endl;
    read_data();
    iofile.write(reinterpret_cast<char*>(this), sizeof(*this));
}

void account_query::delete_rec()
{
    int n;
    ifstream infile;
    infile.open("record.bank", ios::binary);
    if (!infile)
    {
        cout << "\nError in opening! file not found!!" << endl;
        return;
    }
    infile.seekg(0, ios::end);
    int count = infile.tellg()/sizeof(*this);
    cout << "\n There are " << count << " record int the file";
    cout << "\n Enter record number to delete : ";
    cin >> n;
    fstream tmpfile;
    tmpfile.open("tmpfile.bank", ios::out | ios::binary);
    infile.seekg(0);
    for(int i = 0; i < count; i++)
    {
        infile.read(reinterpret_cast<char*>(this), sizeof(*this));
        if (i == (n-1))
        {
            continue;
            tmpfile.write(reinterpret_cast<char*>(this), sizeof(*this));
        }
    }
    infile.close();
    tmpfile.close();
    remove("record.bank");
    rename("tmpfile.bank", "record.bank");
}

int main()
{
    account_query A;
    int choice;
    cout << "***Account Information System***" << endl;

    while (true)
    {
        cout << "Select one option below ";
        cout << "\n\t1--> Add record to file";
        cout << "\n\t2--> show record from file";
        cout << "\n\t3--> search record from file";
        cout << "\n\t4--> update record";
        cout << "\n\t5--> delete record";
        cout << "\n\t6--> quit";
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1 :
            A.write_rec();
            break;
        
        default:
            break;
        }
    }
}