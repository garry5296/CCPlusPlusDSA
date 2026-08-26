#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
class singleton{
    private:
        singleton();
        static singleton* instance;
        static mutex m1;
    public:
        // singleton(singleton&) = delete;
        // singleton(singleton&&) = delete;
        // singleton& operator=(singleton&) = delete;
        // singleton& operator=(singleton&&) = delete;
        static singleton* getinstance();
        static singleton* testthread()
        {
            return singleton::instance;
        }
};
singleton* singleton::instance = nullptr;
singleton::singleton()
{
    cout << "Created instance for singleton class" << endl;
}
singleton* singleton::getinstance()
{
    // singleton::m1.lock();
    if(singleton::instance == nullptr)
    {
        singleton::instance = new singleton();
        // singleton::m1.unlock();
    }
    return singleton::instance;
}
int main()
{
    singleton* s1 = singleton::getinstance();
    singleton s2 = *s1;
    cout<<s2.testthread()<<"  "<<s1<<endl;
    // cout << s1 << endl << s2 << endl;


    return 0;
}