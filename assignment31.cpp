#include<iostream>
#include<cstring>
using namespace std;
class twoo;
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
class Customer
{
    private:
        char name[30];
        size_t phone;
    public:
        void setName() { cout<<"Enter Customer Name         : "; cin.getline(name,30); }
        void setPhone() {cout<<"Enter Customer Phone No.    : "; cin>>phone; cin.ignore(); }
        // char* getName() { return name; }
        // size_t getPhone() { return phone; }
        void displayCustomer()
        {
            cout<<"Customer Name        :   "<<name<<endl;
            cout<<"Customer Phone No.   :   "<<phone<<endl;
        }
};
class Depositor:public Customer
{
    private:
        size_t accno;
        long int balance;
    public:
        void setAccno() { cout<<"Enter Customer A/c No.     : "; cin>>accno; cin.ignore(); }
        void setBalance() { cout<<"Enter Balance               : "; cin>>balance; cin.ignore(); }
        // size_t getAccno() { return accno; }
        // long int getBalance() { return balance; }
        void displayDepositor()
        {
            cout<<"Customer A/c No.     :   "<<accno<<endl;
            cout<<"Balance              :   "<<balance<<endl;
        }
};
class Borrower:public Depositor
{
    private:
        size_t loanNo;
        size_t loanAmt;
    public:
        void setLoanNo() { cout<<"Enter Loan No     : "; cin>>loanNo; cin.ignore(); }
        void setLoanAmt() { cout<<"Enter Loan Amount    : "; cin>>loanAmt; cin.ignore(); }
        // size_t getLoanNo() { return loanNo; }
        // size_t getLoanAmt() { return loanAmt; }
        void displayBorrower()
        {
            cout<<"Loan No.             :   "<<loanNo<<endl;
            cout<<"Loan Account         :   "<<loanAmt<<endl;
        }
};
class Student
{
    private:
        int id;
        char name[30];
    public:
        void setId() { cout<<"Enter Roll No.        : "; cin>>id; cin.ignore(); }
        void setName() { cout<<"Enter Student Name      : "; cin.getline(name,30); }    
        void displayStudent()
        {
            cout<<"Roll No.         : "<<id<<endl;
            cout<<"Student Name     : "<<name<<endl;
        }
};
class studentExam:public Student
{
    private:
        int math,english,science,comp,hindi,sScience;
    public:
        void setMath() { cout<<"Enter Marks for Subject 1   : "; cin>>math; cin.ignore(); }
        void setEnglish() { cout<<"Enter Marks for Subject 2   : "; cin>>english; cin.ignore(); }
        void setScience() { cout<<"Enter Marks for Subject 3   : "; cin>>science; cin.ignore(); }
        void setComp() { cout<<"Enter Marks for Subject 4   : "; cin>>comp; cin.ignore(); }
        void setHindi() { cout<<"Enter Marks for Subject 5   : "; cin>>hindi; cin.ignore(); }
        void setSScience() { cout<<"Enter Marks for Subject 6   : "; cin>>sScience; cin.ignore(); }
        int getMath() { return math; }
        int getEnglish() { return english; }
        int getScience() { return science; }
        int getComp() { return comp; }
        int getHindi() { return hindi; }
        int getSScience() { return sScience; }
        void displayMarks()
        {
            cout<<"Marks of Suject 1    : "<<math<<endl;
            cout<<"Marks of Suject 2    : "<<english<<endl;
            cout<<"Marks of Suject 3    : "<<science<<endl;
            cout<<"Marks of Suject 4    : "<<comp<<endl;
            cout<<"Marks of Suject 5    : "<<hindi<<endl;
            cout<<"Marks of Suject 6    : "<<sScience<<endl;
        }
};
class studentResult:public studentExam
{
    private:
        float percentage;
    public:
        void setPercentage() { percentage=(getMath()+getEnglish()+getScience()+getComp()+getHindi()+getSScience())/6; }
        float getPercentage() { return percentage; }
        void displayPercentage()
        {
            cout<<"Total Percentage     : "<<percentage<<endl;
        }
};
class worker
{
    private:
        int code;
        char name[30];
        float salary;
    public:
        void setSalary() { cout<<"Enter Salary  :   "; cin>>salary; cin.ignore(); }
        void setName() { cout<<"Enter Name    :   "; cin>>name; }
        void setCode() { cout<<"Enter Code    :   "; cin>>code; cin.ignore(); }
        float getSalary() {return salary;}
        void displayWorker()
        {
            cout<<"Code         :   "<<code<<endl;
            cout<<"Name         :   "<<name<<endl;
            cout<<"Salary       :   "<<salary<<endl;
        }
};
class officer
{
    private:
        float DA;
        int HRA;
    public:
        void setDA() { cout<<"Enter DA      :   "; cin>>DA; cin.ignore(); }
        void setHRA() { cout<<"Enter HRA     :   "; cin>>HRA; cin.ignore(); }
        float getDA() { return DA; }
        int getHRA() { return HRA; }
        void displayOfficer()
        {
            cout<<"DA           :   "<<DA<<endl;
            cout<<"HRA          :   "<<HRA<<endl;
        }
};
class manger:public worker,public officer
{
    private:
        float TA,grossSalary;
    public:
        void setTA() { TA=0.1*getSalary(); }
        void setGrossSalary() { grossSalary=getSalary()+TA+getHRA()+getDA(); }
        void displayManager()
        {
            cout<<"TA           :   "<<TA<<endl;
            cout<<"Gross Salary :   "<<grossSalary<<endl;
        }
};
// class one
// {
//     private:
//         int a=5;
//     public:
//         int getA() { return a; }
//         friend void setB(int);
// };
// class twoo
// {
//     private:
//         int b;
//     public:
//         friend void setB(int);
//         int getB() {return b;}
// };
// void setB(int getA())
// {
//     b=getA();
// }
int main()
{
    cout<<endl<<endl<<"1. Define a class Person with instance members name and age. Also define member"
<<"functions setName(), setAge(), getName(), getAge(). Now define class Employee by"
<<"inheriting Person class. In the Employee class define empid and salary as instance"
<<"members. Also define setEmpid, setSalary, getEmpid, getSalary."<<endl;

    cout<<endl<<endl<<"2. Write a C++ program to add two numbers using single inheritance. Accept these two"
<<"numbers from the user in base class and display the sum of these two numbers in derived class."<<endl;
    B obj1,obj2;
    obj1.setA(5);
    obj2.setA(6);
    obj1.sum(obj2);

    cout<<endl<<endl<<"3. Write a C++ program to calculate the percentage of a student using multi-level"
<<"inheritance. Accept the marks of three subjects in base class. A class will be derived"
<<"from the above mentioned class which includes a function to find the total marks"
<<"obtained and another class derived from this class which calculates and displays the"
<<"percentage of students."<<endl;
    Z student1;
    student1.setMarks(56.32,78.21,88.34);
    student1.totalPercentage();

    cout<<endl<<endl<<"4. Write a C++ program to design a base class Person (name, address,"
<<"phone_no). Derive a class Employee (eno, ename) from Person. Derive a"
<<"class Manager (designation, department name, basic-salary) from"
<<"Employee. Write a menu driven program to:"<<endl<<endl
<<"a. Accept all details of 'n' managers."<<endl
<<"b. Display manager having highest salary"<<endl;
    int a;
    cout<<"How any Managers you want to enter? : "<<endl;
    cin>>a;
    cin.ignore();
    Manager *M1=NULL;
    M1=(Manager*)malloc(a*sizeof(Manager));
    for(int i=0;i<a;++i)
    {
        cout<<"Enter details of Manager-"<<i+1<<" : "<<endl;
        cout<<"-------------------------------"<<endl;
        M1[i].setEno();
        cout<<endl;
        cin.ignore();
        M1[i].setEname();
        cout<<endl;
        M1[i].setAddress();
        cout<<endl;
        M1[i].setPhoneno();
        cin.ignore();
        cout<<endl;
        M1[i].setDesignation();
        cout<<endl;
        M1[i].setBasicSalary();
        cout<<endl;
    }
    int highestSalary=M1[0].getBasicSalary(),index=0;
    for(int i=1;i<a;++i)
    {
        if(highestSalary<M1[i].getBasicSalary())
        {
            highestSalary=M1[i].getBasicSalary(); index=i;
        }
    }
    cout<<"Manager with Highest Salary is : "<<M1[index].getBasicSalary()<<" And, Manager Name is "<<M1[index].getEname()<<endl;
    free(M1);
    M1=NULL;

    cout<<endl<<endl<<"5. Write a C++ program to define a base class Item (item-no, name, price)."
<<"Derive a class Discounted-Item (discount-percent). A customer purchases'n' items. Display the"
<<" item-wise bill and total amount using appropriate format."<<endl;
    DiscountedItem *DI1=NULL;int b;
    cout<<"How many items your want to enter? : ";
    cin>>b;
    cin.ignore();
    DI1=(DiscountedItem*)malloc(b*sizeof(DiscountedItem));
    for(int i=0;i<b;++i)
    {
        DI1[i].setName();
        cout<<endl;
        DI1[i].setItemNo();
        cin.ignore();
        cout<<endl;
        DI1[i].setPrice();
        cout<<endl;
        DI1[i].setDiscountPercent();
        cin.ignore();
        cout<<endl<<"-------------------------------"<<endl;
    }
    for(int i=0;i<b;++i)
    {
        DI1[i].displayItem();
        DI1[i].displayDiscount();
        cout<<"--------------------------------"<<endl;
    }
    free(DI1);
    DI1=NULL;

//     cout<<endl<<endl<<"6. Write a C++ program to demonstrate how a common friend function can"
// <<"be used to exchange the private values of two classes. (Use call by reference method)."<<endl;
//     twoo tw;
//     setB();
//     cout<<"Value of b is "<<getB()<<endl;

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

    cout<<endl<<endl<<"8 - In a bank, different customers have savings account. Some customers may"
<<"have taken a loan from the bank. So bank always maintain information about bank depositors and borrowers."
<<"-Design a Base class Customer (name, phone-number)."<<endl
<<"-Derive a class Depositor(accno, balance) from Customer."<<endl
<<"-Again, derive a class Borrower (loan-no, loan-amt) from Depositor."
<<"Write necessary member functions to read and display the details of 'n' customers."<<endl;
    Borrower *B=NULL;int borrowCount;
    cout<<"Enter No. of Customer details you want: "<<endl;
    cin>>borrowCount;
    cin.ignore();
    B=(Borrower*)malloc(borrowCount*sizeof(Borrower));
    for(int i=0;i<borrowCount;++i)
    {
        B[i].setName();
        B[i].setPhone();
        B[i].setAccno();
        B[i].setBalance();
        B[i].setLoanNo();
        B[i].setLoanAmt();
        cout<<"\n----------------------------------------------\n\n";
    }
    for(int i=0;i<borrowCount;++i)
    {
        cout<<"Details of the customer\n\n";
        cout<<"----------------------------------------------\n\n";
        B[i].displayCustomer();
        B[i].displayDepositor();
        cout<<"----------------------------------------------\n\n";
        B[i].displayBorrower();
        cout<<"----------------------------------------------\n\n";
    }
    free(B);B=NULL;

    cout<<"9. Write a C++ program to implement the following class hierarchy:"
<<"Student: id, name"
<<"StudentExam (derived from Student): Marks of 6 subjects"
<<"StudentResult (derived from StudentExam) : percentage"
<<"Define appropriate functions to accept and display details."
<<"Create 'n' objects of the StudentResult class and display the marklist."<<endl;
    studentResult *SR=NULL;int totalStudent;
    cout<<"Enter No. of Students You Want? : ";
    cin>>totalStudent;
    SR=(studentResult*)malloc(totalStudent*sizeof(studentResult));
    if(SR)
    {
        for(int i=0;i<totalStudent;++i)
        {
            SR[i].setId();
            SR[i].setName();
            SR[i].setMath();
            SR[i].setEnglish();
            SR[i].setScience();
            SR[i].setComp();
            SR[i].setHindi();
            SR[i].setSScience();
            SR[i].setPercentage();
        }
    }
    cout<<"-----------------------------------------\n";
    cout<<"*********** Student Marklist ************\n";
    cout<<"-----------------------------------------\n";
    for(int i=0;i<totalStudent;++i)
    {
        SR[i].displayStudent();
        cout<<endl;
        SR[i].displayMarks();
        cout<<endl;
        SR[i].displayPercentage();
    }
    cout<<"-----------------------------------------\n";
    free(SR);SR=NULL;

    cout<<endl<<endl<<"10. Consider two base classes"<<endl
<<"worker(int code, char name, float salary),"<<endl
<<"officer(float DA, HRA)"<<endl
<<"class manger(float TA(is 10%% of salary), gross salary) is derived from both base classes."
<<"Write necessary member functions.";
    int managCount;manger *Ma1=NULL;
    cout<<"Enter Manager Count  :   ";
    cin>>managCount;
    Ma1=(manger*)malloc(managCount*sizeof(manger));
    for(int i=0;i<managCount;++i)
    {
        cout<<"Enter Worker Information for "<<i+1<<endl;
        cout<<endl<<"------------------------------\n";
        Ma1[i].setCode();
        Ma1[i].setName();
        Ma1[i].setSalary();
        Ma1[i].setDA();
        Ma1[i].setHRA();
        Ma1[i].setTA();
        Ma1[i].setGrossSalary();
        cout<<endl<<"------------------------------\n";
    }
    cout<<"Manager Information"<<endl;
    for(int i=0;i<managCount;++i)
    {
        cout<<"--------------------------------\n";
        Ma1[i].displayWorker();
        Ma1[i].displayOfficer();
        Ma1[i].displayManager();
    }
    free(Ma1);Ma1=NULL;
    return 0;
}