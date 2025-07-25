#include<iostream>
#include<cstring>
using namespace std;
class Person{
    private:
        char name[30];
        char address[50];
        unsigned long int phone_no;
        unsigned int age;
    public:
        void setName(char name[]) {strcpy(this->name,name);}
        void setAge(unsigned int age) {this->age=age;}
        void setAddress() { cout<<"Enter Address : "; cin.getline(address,50); }
        void setPhoneno() { cout<<"Enter Phone No. : "; cin>>phone_no; }
        char* getName() { return name; }
        unsigned int getAge() { return age; }
        unsigned long int getPhone() { return phone_no; }
        char* getAddress() { return address; }
};
class Employee:public Person
{
    private:
        int empid,eno;
        int salary;
        char ename[30];
    public:
        void setEmpid(int empid) { this->empid=empid; }
        void setSalary(int salary) { this->salary=salary; }
        void setEno() { cout<<"Enter Employee No. : "; cin>>eno; }
        void setEname() { cout<<"Enter Name : "; cin.getline(ename,30); }
        int getEmpid() { return empid; }
        int getEno() { return eno; }
        int getSalary() { return salary; }
        char* getEname() { return ename; }
};
class Manager:public Employee
{
    private:
        char designation[30], departmentName[30];
        int basicSalary;
    public:
        void setDesignation() { cout<<"Enter Designation : "; cin.getline(designation,30); }
        void setDepartmentName() { cout<<"Enter Department Name : "; cin.getline(departmentName,30); }
        void setBasicSalary() { cout<<"Enter Basic Salary : "; cin>>basicSalary; }
        char* getDesignation() { return designation; }
        char* getDepartmentName() { return departmentName; }
        int getBasicSalary() { return basicSalary; }
};
class Fulltime:public Employee
{
    private:
        int dailyRate,noOfDays;
        int salary;
    public:
        void setDailyRate() { cout<<"Enter daily rate : "; cin>>dailyRate; }
        void setNoOfDays() { cout<<"Enter number of days : "; cin>>noOfDays; }
        void setSalary() { salary=dailyRate*noOfDays; cout<<"savedsalary is "<<salary<<endl; }
        void display()
        {
            cout<<"Employee Number  :   "<<getEno()<<endl;
            cout<<"Employee Name    :   "<<getEname()<<endl;
            cout<<"Salary           :   "<<salary<<endl;
            cout<<"Status           :   Fulltime"<<endl;
        }
};
class Parttime:public Employee
{
    private:
        int noOfWorkHours,hourlyRate;
        int salary;
    public:
        void setNoOfWorkHours() { cout<<"Enter work hours : "; cin>>noOfWorkHours; }
        void setHourlyRate() { cout<<"Enter hourly rate : "; cin>>hourlyRate; }
        void setSalary() { salary=noOfWorkHours*hourlyRate; cout<<"savedsalary is "<<salary<<endl; }
        int getNoOfWorkHours() { return noOfWorkHours; }
        int getHourlyRate() { return hourlyRate; }
        void display()
        {
            cout<<"Employee Number  :   "<<getEno()<<endl;
            cout<<"Employee Name    :   "<<getEname()<<endl;
            cout<<"Salary           :   "<<salary<<endl;
            cout<<"Status           :   Parttime"<<endl;
        }
};
class A
{
    private:
        int a;
    public:
        void setA(int a) { this->a=a; }
        int getA() { return a; }
};
class B:public A
{
    public:
        void sum(B &B) { cout<<"Sum of two numbers is"<<getA()+B.getA(); }
        // void display() {cout<<"Sum of two numbers is"<<sum()<<endl;}
};
class X
{
    private:
        float x,y,z;
    public:
        void setMarks(int x,int y,int z) { this->x=x;this->y=y;this->z=z; }
        float getX() { return x; }
        float getY() { return y; }
        float getZ() { return z; }
};
class Y:public X
{
    public:
        float totalMarks()
        {
            return getX()+getY()+getZ();
        }
};
class Z:public Y
{
    public:
        void totalPercentage()
        {
            cout<<"Total percentage of student: "<<totalMarks()/300*100<<endl;
        }
};
class Item
{
    private:
        int itemNo;
        char name[30];
        unsigned int price;
    public:
        void setItemNo() { cout<<"Enter Item Number : "; cin>>itemNo; }
        void setName() { cout<<"Enter Item Name : "; cin.getline(name,30); }
        void setPrice() { cout<<"Enter Item Price : "; cin>>price; }
        unsigned int getPrice() { return price; }
        void displayItem() 
        { 
            cout<<"Item Name : "<<name<<endl;
            cout<<"Item No. : "<<itemNo<<endl;
            cout<<"Item Price : "<<price<<endl;
        }
};
class DiscountedItem:public Item
{
    private:
        int discountPercent;
    public:
        void setDiscountPercent() { cout<<"Enter Discount Percent : "; cin>>discountPercent; }
        float getDiscountPercent() { return discountPercent; }
        float discountedPrice() { return (100-getDiscountPercent())*getPrice()/100; }
        void displayDiscount()
        {
            cout<<"Discount Percent : "<<discountPercent<<endl;
            cout<<"Discounted Price : "<<discountedPrice()<<endl;
        }
};
 
// class AAA
// {
//     private:
//         int x,y;
//     public:
//         friend void getX(int,int);
// };
// class XXX
// {
//     private:
//         int a,b;
//         friend void getX(int,int);
// };
// void getX()
int main()
{
//     cout<<endl<<endl<<"1. Define a class Person with instance members name and age. Also define member"
// <<"functions setName(), setAge(), getName(), getAge(). Now define class Employee by"
// <<"inheriting Person class. In the Employee class define empid and salary as instance"
// <<"members. Also define setEmpid, setSalary, getEmpid, getSalary."<<endl;

//     cout<<endl<<endl<<"2. Write a C++ program to add two numbers using single inheritance. Accept these two"
// <<"numbers from the user in base class and display the sum of these two numbers in derived class."<<endl;
//     B obj1,obj2;
//     obj1.setA(5);
//     obj2.setA(6);
//     obj1.sum(obj2);

//     cout<<endl<<endl<<"3. Write a C++ program to calculate the percentage of a student using multi-level"
// <<"inheritance. Accept the marks of three subjects in base class. A class will be derived"
// <<"from the above mentioned class which includes a function to find the total marks"
// <<"obtained and another class derived from this class which calculates and displays the"
// <<"percentage of students."<<endl;
//     Z student1;
//     student1.setMarks(56.32,78.21,88.34);
//     student1.totalPercentage();

//     cout<<endl<<endl<<"4. Write a C++ program to design a base class Person (name, address,"
// <<"phone_no). Derive a class Employee (eno, ename) from Person. Derive a"
// <<"class Manager (designation, department name, basic-salary) from"
// <<"Employee. Write a menu driven program to:"<<endl<<endl
// <<"a. Accept all details of 'n' managers."<<endl
// <<"b. Display manager having highest salary"<<endl;
//     int a;
//     cout<<"How any Managers you want to enter? : "<<endl;
//     cin>>a;
//     cin.ignore();
//     Manager *M1=NULL;
//     M1=(Manager*)malloc(a*sizeof(Manager));
//     for(int i=0;i<a;++i)
//     {
//         cout<<"Enter details of Manager-"<<i+1<<" : "<<endl;
//         cout<<"-------------------------------"<<endl;
//         M1[i].setEno();
//         cout<<endl;
//         cin.ignore();
//         M1[i].setEname();
//         cout<<endl;
//         M1[i].setAddress();
//         cout<<endl;
//         M1[i].setPhoneno();
//         cin.ignore();
//         cout<<endl;
//         M1[i].setDesignation();
//         cout<<endl;
//         M1[i].setBasicSalary();
//         cout<<endl;
//     }
//     int highestSalary=M1[0].getBasicSalary(),index=0;
//     for(int i=1;i<a;++i)
//     {
//         if(highestSalary<M1[i].getBasicSalary())
//         {
//             highestSalary=M1[i].getBasicSalary(); index=i;
//         }
//     }
//     cout<<"Manager with Highest Salary is : "<<M1[index].getBasicSalary()<<" And, Manager Name is "<<M1[index].getEname()<<endl;
//     free(M1);
//     M1=NULL;

//     cout<<endl<<endl<<"5. Write a C++ program to define a base class Item (item-no, name, price)."
// <<"Derive a class Discounted-Item (discount-percent). A customer purchases'n' items. Display the"
// <<" item-wise bill and total amount using appropriate format."<<endl;
//     DiscountedItem *DI1=NULL;int b;
//     cout<<"How many items your want to enter? : ";
//     cin>>b;
//     cin.ignore();
//     DI1=(DiscountedItem*)malloc(b*sizeof(DiscountedItem));
//     for(int i=0;i<b;++i)
//     {
//         DI1[i].setName();
//         cout<<endl;
//         DI1[i].setItemNo();
//         cin.ignore();
//         cout<<endl;
//         DI1[i].setPrice();
//         cout<<endl;
//         DI1[i].setDiscountPercent();
//         cin.ignore();
//         cout<<endl<<"-------------------------------"<<endl;
//     }
//     for(int i=0;i<b;++i)
//     {
//         DI1[i].displayItem();
//         DI1[i].displayDiscount();
//         cout<<"--------------------------------"<<endl;
//     }
//     free(DI1);
//     DI1=NULL;

//     cout<<endl<<endl<<"6. Write a C++ program to demonstrate how a common friend function can"
// <<"be used to exchange the private values of two classes. (Use call by reference method)."<<endl;

    cout<<endl<<endl<<"7. Write class declarations and member function definitions for a C++ base"
<<"class to represent an Employee (emp-code, name). Derive two classes as Fulltime (daily rate, number"
<<" of days, salary) and Parttime (number of working hours, hourly rate, salary)."<<endl
<<"Write a menu driven program to:"<<endl
<<"1. Accept the details of 'n' employees."<<endl
<<"2. Display the details of 'n' employees."<<endl;
    int c,iter=0,fiter=0;
    Parttime *P=NULL;
    P=(Parttime*)malloc(sizeof(Parttime));
    Fulltime *F=NULL;
    F=(Fulltime*)malloc(sizeof(Fulltime));
    begin:
    cout<<"1.Enter Record\n2.Display Record\n3.Search Record\n4.Quit\n\n";
    cout<<"Enter your choice : ";
    cin>>c;
    switch(c)
    {
        case 1:
            newrecord:
            int d;
            cout<<endl<<"- Press 1 for 'FullTime'\n- Press 2 for Partime"<<endl;
            cin>>d;
            cin.ignore();
            if(d==2)
            {
                P=(Parttime*)realloc(P,sizeof(Parttime)*(iter+1));
                (P+iter)->setEname();
                (P+iter)->setEno();
                (P+iter)->setHourlyRate();
                (P+iter)->setNoOfWorkHours();
                (P+iter)->setSalary();
                cin.ignore();
                ++iter;
            }else{
                F=(Fulltime*)realloc(F,sizeof(Fulltime)*(fiter+1));
                (F+fiter)->setEname();
                (F+fiter)->setEno();
                (F+fiter)->setDailyRate();
                (F+fiter)->setNoOfDays();
                (F+fiter)->setSalary();
                cin.ignore();
                ++fiter;
            }
            char ans;
            cout<<"Do you want to enter more employees? - Press 'Y/y' for Yes and 'N/n' for No.";
            ans = getchar();
            if(ans=='Y' || ans=='y')
                goto newrecord;
            else
            {
                cout<<endl;
                goto begin;
            }

        case 2:
            for(int i=0;i<fiter;++i)
            {
                cout<<"-----------------------------"<<endl;
                F[i].display();
                cout<<"-----------------------------"<<endl;
            }
            for(int i=0;i<iter;++i)
            {
                cout<<"-----------------------------"<<endl;
                P[i].display();
                cout<<"-----------------------------"<<endl;
            }
            cout<<endl;
            goto begin;

        case 3:
            int emp;
            cout<<"Enter Employee Number : ";
            cin>>emp;
            for(int i=0;i<fiter;++i)
            {
                if(emp==F[i].getEno())
                    F[i].display();
            }
            for(int i=0;i<iter;++i)
            {
                if(emp==P[i].getEno())
                    P[i].display();
            }
            cout<<endl;
            goto begin;

        default:
            break;
    }
    free(P);free(F);
    P=NULL;F=NULL;
    return 0;
}