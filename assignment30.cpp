#include<iostream>
#include<cstring>
int strLen(char*);
using namespace std;
struct userChecker
{
    int charCount,digCount,symCount;
    userChecker() {charCount=0;digCount=0;symCount=0;} 
};
struct nickname
{
    int charCount,digCount,symCount,spaceCount;
    nickname() {charCount=0;digCount=0;symCount=0;spaceCount=0;}
};
userChecker isUsernameValid(char*);
nickname isNickname(char*);
int main()
{
    cout<<endl<<endl<<"1. Write a C++ program to demonstrate the use of try, catch block with the argument as an"
<<endl<<"integer and string using multiple catch blocks."<<endl;
    cout<<endl<<endl<<"2. Write a C++ program to demonstrate try, throw and catch statements."<<endl;

    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try//using try block to check if the number is greater than 5
    {
        if(b==0)
            throw "Numerator can't be zero";
        if(b==1)
            throw 1;
        cout<<"Result is "<<a/b<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception occured: "<<e<<endl;
    }
    catch(int&)
    {
        cout<<"Exception occured: dividing by one."<<endl;
    }

    cout<<endl<<endl<<"3. Write a C++ program to perform arithmetic operations on two numbers and throw an"
<<"exception if the dividend is zero or does not contain an operator."<<endl;
    int num1,num2,res;
    char opera;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    try{
        if(num2==0)
            throw "Dividing by zero.";

        cout<<"Enter an arithmetic operator(+,-,*,/,%): ";
        cin>>opera;

        if(opera!=37 && opera!=42 && opera!=43 && opera!=45 && opera!=47)
            throw 1;
        switch(opera)
        {
            case '+':
                cout<<"Result is "<<num1+num2<<endl;
                break;

            case '*':
                cout<<"Result is "<<num1*num2<<endl;
                break;

            case '-':
                cout<<"Result is "<<num1-num2<<endl;
                break;

            case '/':
                cout<<"Result is "<<num1/num2<<endl;
                break;

            case '%':
                cout<<"Result is "<<num1%num2<<endl;
                break;
        }
    }
    catch(const char *e)
    {
        cout<<"Exception occurred: "<<e<<endl;
    }
    catch(int)
    {
        cout<<"Exception occurred: Not an Arithmetic operator"<<endl;
    }

    cout<<endl<<endl<<"4. Write a C++ program to accept an email address and throw an exception if it does not"
<<"contain @ symbol."<<endl;
    char pq[50];bool flag=false;
    cout<<"Enter an email: ";
    cin>>pq;
    try
    {
        for(int i=0;pq[i];++i)
        {
            if(pq[i]=='@')
                flag=true;
        }
        if(flag==false)
            throw "invalid email address";
        else
            cout<<"Valid Email address"<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception occurred: "<<e<<endl;
    }

    cout<<endl<<endl<<"5. Write a C++ program to accept a mobile number and throw an exception if it does not"
<<"contain 10 digits."<<endl;
    size_t num;
    cout<<"Enter a mobile number: ";
    cin>>num;
    try
    {
        if((num/1000000000)<1 || (num/1000000000)>=10)
            throw -1;
        cout<<"Valid mobile number"<<endl;
    }
    catch(int)
    {
        cout<<"Exception occurred: Invalid phone number"<<endl;
    }

    cout<<endl<<endl<<"6. Write a C++ program to accept area pin code and throw an exception if it does not"
<<"contain 6 digits."<<endl;
    size_t pin;
    cout<<"Enter a pincode: ";
    cin>>pin;
    try
    {
        if((pin/100000)<1 || (pin/100000)>=10)
            throw -1;
        cout<<"Valid Pin Code"<<endl;
    }
    catch(int)
    {
        cout<<"Exception occurred: Invalid pin code"<<endl;
    }

    cout<<endl<<endl<<"7. Write a C++ program to accept a username if the username has less than 6 characters"
<<"or does contain any digit or special symbol."<<endl;
    char user[30];userChecker u;
    cout<<"Enter a username: ";
    cin>>user;
    u=isUsernameValid(user);
    try
    {
        if(u.charCount<6)
            throw "username not 6 characters long.";
        if(u.digCount<1)
            throw "no digit in username.";
        if(u.symCount<1)
            throw "no special symbol in username.";
        cout<<"Username saved successfully!!"<<endl;

    }
    catch(const char *e)
    {
        cout<<"Exception caught: "<<e<<endl;
    }

    cout<<endl<<endl<<"8. Write a C++ program to accept a password and throw an exception if the password has"
<<"less than 6 characters or does not contain a digit or does not contain any special character or does not contain any capital letter."<<endl;
    char userPass[20];userChecker p;
    cout<<"Enter a password: ";
    cin>>userPass;
    p=isUsernameValid(userPass);
    try
    {
        if(u.charCount<6)
            throw "password less than 6 character.";
        if(u.digCount<1)
            throw "no digit in password.";
        if(u.symCount<1)
            throw "no special character in password.";
        cout<<"Password saved successfully!!"<<endl;
    }
    catch(const char *p)
    {
        cout<<"Exception caught: "<<p<<endl;
    }

    cout<<endl<<endl<<"9. Write a C++ program to accept Gmail id only and throw an exception if the id does not"
<<"contain @ and gmail.com."<<endl;
    char email[30];int first=0,second=0,atcount=0,mailcount=0;
    cout<<"Enter an email: ";
    cin>>email;
    for(int i=0;email[i];++i)
    {
        if(email[i]=='@')
        {
            first=i;
            ++atcount;
        }
        else if(strcmp(&email[i],"gmail.com")==0)
        {
            second=i;
            ++mailcount;
        }
    }
    try
    {

        if(atcount>1)
            throw "multiple '@' sign.";
        if(mailcount>1)
            throw "multiple domain.";
        if((first+1)!=second)
            throw "not a correct email.";
        cout<<"Correct email, saved successfully!!";
    }
    catch(const char *e)
    {
        cout<<"Exception caught:"<<e<<endl;
    }

    cout<<endl<<endl<<"10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8"
<<"characters or does contain a digit or special symbol or space."<<endl;
    char nick[20]="Gurpre t";nickname n1;
    n1=isNickname(nick);
    try
    {
        if(n1.charCount>8)
            throw "Nickname greater than 8 characters.";
        else if(n1.digCount>0)
            throw "Digit found in name.";
        else if(n1.spaceCount>0)
            throw "Space found in name.";
        else if(n1.symCount>0)
            throw "Special character found in name.";
        cout<<"Very good nickname, saved successfully!!"<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception found: "<<e<<endl;
    }

    return 0;
}
int strLen(char *a)
{
    int i;
    for(i=0;*(a+i);++i);
    return i;
}
userChecker isUsernameValid(char *user)
{
    userChecker u1;
    for(int i=0;user[i];++i)
    {
        if((user[i]>=65 && user[i]<=90) || (user[i]>=97 && user[i]<=122))
            ++u1.charCount;
        else if(user[i]>=48 && user[i]<=57)
        { ++u1.digCount; ++u1.charCount; }
        else if ((user[i]>=94 && user[i]<=96) || (user[i]>=35 && user[i]<=43) || (user[i]>=123 && user[i]<=125) || user[i]==33)
        { ++u1.charCount; ++u1.symCount; }
    }
    cout<<"charcount = "<<u1.charCount<<" and digcount = "<<u1.digCount<<" and symcount = "<<u1.symCount<<endl;
    return u1;
}
nickname isNickname(char *user)
{
    nickname u1;
    for(int i=0;user[i]!='\0';++i)
    {
        cout<<"i="<<i<<endl;
        if((user[i]>=65 && user[i]<=90) || (user[i]>=97 && user[i]<=122))
            ++u1.charCount;
        else if(user[i]>=48 && user[i]<=57)
        { ++u1.digCount; ++u1.charCount; }
        else if ((user[i]>=94 && user[i]<=96) || (user[i]>=35 && user[i]<=43) || (user[i]>=123 && user[i]<=125) || user[i]==33)
        { ++u1.charCount; ++u1.symCount; }
        else if (user[i]==' ')
        { ++u1.charCount; ++u1.spaceCount; }
    }
    cout<<"charcount = "<<u1.charCount<<" and digcount = "<<u1.digCount<<" and symcount = "<<u1.symCount<<" and spacecount = "<<u1.spaceCount<<endl;
    return u1;
}
