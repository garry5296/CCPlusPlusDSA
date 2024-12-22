#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[40];
    long salary;
};
struct Student{
    int roll_num;
    char s_name[40];
    int class;
};
struct Marks{
    int roll_no;
    char name[40];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct Time{
    int hr;
    int min;
    int sec;
};
struct Employee input();
int highst(struct Employee []);
void display(struct Employee);
void sort(struct Employee []);
void sortByString(struct Employee []);
struct Student newinput();
void newdisplay(struct Student);
float percentagee(int,int,int);
int main()
{
    printf("\n\n\e[1mQuestion1. Define a structure Employee with member variables id, name, salary.\e[m");

    printf("\n\n\e[1mQuestion2. Write a function to take input employee data from the user. [ Refer structure from question 1 ].\e[m");
    struct Employee Temp;
    Temp = input();

    printf("\n\n\e[1mQuestion3. Write a function to display employee data. [ Refer structure from question 1 ].\e[m");
    display(Temp);

    printf("\n\n\e[1mQuestion4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1].\e[m");
    struct Employee E[10]={
        {1,"Emanual",1500},
        {2,"Naval",2000},
        {3,"Pratham",1750},
        {4,"Gurpreet",3100},
        {5,"Hans",1050},
        {6,"Kawal",3000},
        {7,"Naman",3050},
        {8,"Sarang",2100}
    };int t4;
    t4=highst(E);
    printf("\n%s with id - %d is the highest paying employee with salary of %ld",E[t4].name,E[t4].id,E[t4].salary);

    printf("\n\n\e[1mQuestion5. Write a function to sort employees according to their salaries [ refer structure from question 1].\e[m");
    sort(E);
    printf("\n");
    for (int i = 0; i < 8; i++)
        printf("%d %s %ld\n",E[i].id,E[i].name,E[i].salary);
    
    printf("\n\n\e[1mQuestion6. Write a function to sort employees according to their names [refer structure from question 1].\e[m");
    sortByString(E);
    for (int i = 0; i < 8; i++)
        printf("\n%d %s %ld",E[i].id,E[i].name,E[i].salary);

    printf("\n\n\e[1mQuestion7. Write a program to calculate the difference between two time periods..\e[m");
    struct Time T1,T2;
    printf("\nEnter start time(use format \e[1mhh:mm:ss\e[m): ");
    scanf("%d:%d:%d",&T1.hr,&T1.min,&T1.sec);
    printf("Enter stop time(use format \e[1mhh:mm:ss\e[m): ");
    scanf("%d:%d:%d",&T2.hr,&T2.min,&T2.sec);
    if(T2.sec<T1.sec)
    {
        T2.min--;
        T2.sec+=60;
    }
    if(T2.min<T1.min)
    {
        T2.hr--;
        T2.min+=60;
    }
    printf("The difference between time periods is \e[1m%d:%d:%d\e[m",T2.hr-T1.hr,T2.min-T1.min,T2.sec-T1.sec);

    printf("\n\n\e[1mQuestion8. Write a program to store information of 10 students and display them using structure..\e[m");
    struct Student S[10];
    printf("\nEnter roll number, name, class for 10 students: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&S[i].roll_num);
        while (getchar() != '\n');
        fgets(S[i].s_name,40,stdin);
        scanf("%d",&S[i].class);
        while (getchar() != '\n');
        S[i].s_name[strlen(S[i].s_name)-1]='\0';
    }
    for (int i = 0; i < 10; i++)
        printf("\n%d %s %d",S[i].roll_num,S[i].s_name,S[i].class);

    printf("\n\n\e[1mQuestion9. Write a program to store information of n students and display them using structure.\e[m");
    int ts;
    printf("\nEnter total number of students: ");
    scanf("%d",&ts);
    struct Student S1[ts];
    printf("\nEnter roll no., name, class of %d students: ",ts);
    for (int i = 0; i < ts; i++)
    {
        scanf("%d",&S[i].roll_num);
        while (getchar() != '\n');
        fgets(S[i].s_name,40,stdin);
        scanf("%d",&S[i].class);
        S[i].s_name[strlen(S[i].s_name)-1]='\0';
    }
    for (int i = 0; i < ts; i++)
        printf("\n%d %s %d",S[i].roll_num,S[i].s_name,S[i].class);

    printf("\n\n\e[1mQuestion10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student..\e[m");
    struct Marks M[5] = {
        {1,"Hassan"},
        {2,"Neha"},
        {3,"Sourav"},
        {4,"Captain"},
        {5,"Prithvi"}
    };
    printf("\nEnter Chemistry, Mathematics and Physics marks of students: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&M[i].chem_marks);
        scanf("%d",&M[i].maths_marks);
        scanf("%d",&M[i].phy_marks);
    }
    for (int i = 0; i < 5; i++)
        printf("\n\e[1m%s\e[m roll no. - \e[1m%d\e[m got a total percentage of \e[1m%.2f%%\e[m",M[i].name,M[i].roll_no,percentagee(M[i].chem_marks,M[i].phy_marks,M[i].maths_marks));

    return 0;
}
//funcions
float percentagee(int x,int y,int z)
{
    return (x+y+z)/3.0;
}
void newdisplay(struct Student a)
{
    printf("\n%d %s %d",a.roll_num,a.s_name,a.class);
}
struct Student newinput()
{
    struct Student temp;
    scanf("%d",&temp.roll_num);
    fgets(temp.s_name,40,stdin);
    scanf("%d",&temp.class);
    return temp;
}
void sortByString(struct Employee t[])
{
    struct Employee temp;int flag=0;
    for(int i=1;i<8;i++)
    {
        for(int j=0;j<=8-1-i;j++)
            if(strcmp(t[j].name,t[j+1].name)>0)
            {
                flag=1;
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        if(!flag)
            break;
    }
}
void sort(struct Employee t[])
{
    struct Employee temp;
    for(int i=1;i<8;i++)
        for(int j=0;j<=8-1-j;j++)
            if(t[j].salary>t[j+1].salary)
            {
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
}
int highst(struct Employee t[])
{
    int a = 0;
    for(int i=1;i<8;i++)
        if(t[i].salary>t[a].salary)
            a=i;
    return a;
}
void display(struct Employee t)
{
    printf("\nid of the employee is %d\nname of the employee is %s\nsalary of the employee is %ld",t.id,t.name,t.salary);
}
struct Employee input()
{
    struct Employee E1;
    printf("\nEnter Employee data(id,name,salary): ");
    scanf("%d",&E1.id);
    while(getchar()!='\n');
    fgets(E1.name,40,stdin);
    E1.name[strlen(E1.name)-1] = '\0';
    scanf("%ld",&E1.salary);
    return E1;
}

