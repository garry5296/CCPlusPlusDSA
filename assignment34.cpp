#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
//     cout<<endl<<endl<<"1. Write a C++ program to create a file and print “File created successfully” and throw"
// <<"an error if file is not created."<<endl;
//     ofstream fout;
//     try
//     {
//         fout.open("test.txt",ios::out);
//         if(!fout)
//             throw "File couldn't be created";
//         else
//             cout<<"File created successfully !!";
//         char str[]="Hello Beautiful World";
//         fout<<str;
//         fout.close();
//     }
//     catch(const char *e)
//     {
//         cout << e << '\n';
//     }

//     cout<<endl<<endl<<"2. Write a C++ program to read a text file and count the number of characters in it.";
//     ifstream fin;int count=0;char str;
//     fin.open("test.txt",ios::in);
//     try
//     {
//         if(!fin)
//             throw "File doesn't exist";
//         str=fin.get();
//         while(!fin.eof())
//         {
//             // str=fin.get();
//             cout<<str;
//             str=fin.get();
//             count++;
//         }
//         cout<<"\nTotal number of charaters are "<<count<<endl;
//     }
//     catch(const char *e)
//     {
//         cout<<"Exception : "<<e<<endl;
//     }
//     fin.close();

//     cout<<endl<<endl<<"3. Write a C++ program to open an output file 'a.txt' and append data to it."<<endl;
//     fout.open("a.txt",ios::app);
//     fout<<" Singh";
//     fout.close();

//     cout<<endl<<endl<<"4. Write a program to copy the contents of one text file to another while changing the"
// <<"case of every alphabet."<<endl;
//     char newstr[100];
//     fin.open("a.txt",ios::in);
//     if(!fin)
//     {
//         cout<<"File not present";
//         return 1;
//     }
//     else
//     {
//         fin.getline(newstr,100);
//         cout<<"Item read from file - "<<endl<<endl<<newstr;
//     }
//     fin.close();
//     for(int i=0;newstr[i];++i)
//     {
//         if(newstr[i]>96 && newstr[i]<123)
//             newstr[i]-=32;
//     }
//     cout<<endl<<newstr;
//     fout.open("test.txt",ios::app);
//     fout<<newstr;
//     fout.close();

    cout<<endl<<endl<<"5. Write a C++ program to merge the two files."<<endl;

    return 0;
}