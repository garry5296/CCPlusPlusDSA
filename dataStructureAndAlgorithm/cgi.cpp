#include <iostream>
#include<cstring>
using namespace std;
class doctor
{
    private:
        int age;
        char name[20];
    public:
        doctor(){};
        doctor(int,const char*);
        void display();
};
doctor::doctor(int x, const char *p)
{
    age=x;
    strcpy(name,p);
}
void doctor::display()
{
    cout<<"name is "<<name<<" and age is "<<age<<endl;
}
int main() {
    doctor d1(33,"Naman"),d2;
    d1.display();
    return 0;
}