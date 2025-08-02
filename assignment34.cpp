#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<endl<<endl<<"1. Write a C++ program to create a file and print “File created successfully” and throw"
<<"an error if file is not created."<<endl;
    fstream fout;
    try
    {
        fout.open("test.txt",ios::out);
        if(!fout)
            throw "File couldn't be created";
        else
            cout<<"File created successfully !!";
        fout.close();
    }
    catch(const char *e)
    {
        cout << e << '\n';
    }

    cout<<endl<<endl<<"2. ";
    

    return 0;
}