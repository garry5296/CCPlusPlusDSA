// Version B
#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class Employee{
    public:
        virtual ~Employee()=default;
        virtual void info()=0;
        virtual int getTeamSize() const {return 0;}
        virtual string getLanguage() const {return "";};
};
class Developer:public Employee{
    private:
        string lang;
    public:
        Developer(string s):lang(s){}
        int getTeamSize() const override {return -1;}
        string getLanguage() const override { return lang; }
        void info() override { cout<<"Developer"; }
};
class Manager:public Employee{
    private:
        int teamSize;
    public:
        Manager(int x):teamSize(x){}
        int getTeamSize() const override { return teamSize; }
        string getLanguage() const override { return -1; }
        void info() override { cout<<"Manager"; }
};
int main()
{
    vector<unique_ptr<Employee>> staff;
    staff.push_back(make_unique<Developer>("C++"));
    staff.push_back(make_unique<Manager>(13));

    for(auto &i:staff)
    {
        if(dynamic_cast<Manager*>(i.get()))
        {
            i->info();
            cout<<" team size: "<<i->getTeamSize()<<endl;
        }
        if(dynamic_cast<Developer*>(i.get()))
        {
            i->info();
            cout<<" language : "<<i->getLanguage()<<endl;
        }
    }
    return 0;
}