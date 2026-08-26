#include<iostream>
using namespace std;
class myString{
    private:
        char *s;
        size_t size;
    public:
        myString(){s=NULL;}
        myString(const char*);
        myString(const myString&);
        myString& operator=(const myString&);
        ~myString();
        friend ostream& operator<<(ostream&,myString&);
};
ostream& operator<<(ostream &O,myString &ms)
{
    for(int i=0;ms.s[i];i++)
        O<<ms.s[i];
    return O;
}
myString& myString::operator=(const myString &ms)
{
    if(this==&ms)
        return *this;
    if(s) { delete []s; size=0; }
    size=ms.size;
    s=new char[size+1];
    for(int i=0;ms.s[i];i++)
        s[i]=ms.s[i];
    s[size]='\0';
    return *this;
}
myString::myString(const myString &ms)
{
    if(ms.s)
    {
        size=ms.size;
        s=new char[size+1];
        for(int i=0;ms.s[i];i++)
            s[i]=ms.s[i];
        s[size]='\0';
    }
}
myString::~myString()
{
    delete []s;
    size=0;
}
myString::myString(const char *x)
{
    if(!x)
        exit(1);
    size=0;
    for(int i=0;x[i];i++)
        size++;
    s=new char[size+1];
    for(int i=0;x[i];i++)
        s[i]=x[i];
    s[size]='\0';
}
int main()
{
    myString s1("Heroing in the field.");
    cout<<s1;
    return 0;
}