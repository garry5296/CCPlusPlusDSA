#include<iostream>
using namespace std;
class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr=NULL;
    public:
        // Array() {}
        void setCapacity(int a)
        {
            capacity=a;
        }
        int* getPtr()
        {
            return ptr;
        }
        ~Array() {delete []ptr;ptr=NULL;}
        Array(Array &A)
        {
            capacity=A.capacity;
            lastIndex=A.lastIndex;
            if(ptr!=NULL)
                delete []ptr;
            ptr=new int[capacity];
            for(int i=0;i<lastIndex;i++)
                ptr[i]=A.ptr[i];
            return (*this);
        }
        Array& operator=(Array &A)
        {
            capacity=A.capacity;
            lastIndex=A.lastIndex;
            ptr=new int[capacity];
            for(int i=0;i<lastIndex;i++)
                ptr[i]=A.ptr[i];
        }
        void createArray(int a)
        {
            capacity=a;
            lastIndex=-1;
            if(ptr!=NULL)
                delete []ptr;
            ptr=new int[a];
        }
        void insert(int a,int b)
        {
            try
            {
                if(a>=capacity-1)
                    throw "Adding item out of bound";
                if(a>lastIndex+1 || a<0)
                    throw "Adding at random place not allowed.";
                for(int i=lastIndex;i>=a;--i)
                    *(ptr+i+1)=*(ptr+i);
                *(ptr+a)=b;
                lastIndex++;
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
            
        }
        void append(int a)
        {
            try
            {
                if(isFull())
                    throw "Array already full!!";
                ++lastIndex;
                *(ptr+lastIndex)=a;
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
        }
        int getItem(int a)
        {
            try
            {
                if(a>=capacity)
                    throw "Illegal memory access";
                if(a>lastIndex || a<0)
                    throw "No data present(Invalid Index)";
                return *(ptr+a);
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
            return -1;
        }
        bool isEmpty()
        {
            return lastIndex==-1;
        }
        bool isFull()
        {
            return lastIndex==capacity-1;
        }
        void del(int a)
        {
            try
            {
                if(isEmpty()||a>lastIndex)
                    throw "Empty Array or invalid index";
                for(int i=a;i<lastIndex;i++)
                    *(ptr+i)=*(ptr+i+1);
                --lastIndex;
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
        }
        void edit(int a,int b)
        {
            try
            {
                if(a>lastIndex||a<0)
                    throw "Edit at random place";
                if(isEmpty())
                    throw "No data present for edit";
                *(ptr+a)=b;   
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
        }
        int count()
        {
            try
            {
                if(isEmpty())
                    throw "Array Empty";
                return lastIndex+1;
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
        }
        int getCapacity()
        {
            try
            {
                if(ptr==NULL)
                    throw "Allocation not done yet";
                return capacity;
            }
            catch(const char *e)
            {
                cout<<"Caught Exception : "<<e<<endl;
            }
        }
        // friend ostream& operator<<(ostream&,Array&);
};
// ostream& operator<<(ostream &O,Array &A)
// {
//     O<<
// }
int main()
{
    Array A;
    A.createArray(50);
    A.append(34);
    A.append(5);
    A.append(7);
    cout<<"Array full status is "<<A.isFull()<<endl;
    cout<<"Array full status is "<<A.isEmpty()<<endl;

}