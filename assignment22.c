#include<stdio.h>
#include<stdlib.h>
struct employee{
    int empId;
    char empName[50];
    float empWeight;
};
int input();
int main()
{
    // printf("\e[1mQuestion1. Define a function to input variable length string and store it in an array without memory wastage..\e[m");
    // int p;




    printf("\n\n\e[1mQuestion2. Write a program to ask the user to input a number of data values he would\nlike to enter then create an array dynamically to accommodate the data values. Now take the\ninput from the user and display the average of data values..\e[m");
    int b1,*b2=NULL,bSum=0;float bAvg;
    printf("\nEnter total number of data values: ");
    scanf("%d",&b1);
    b2=(int*)calloc(b1,sizeof(int));
    printf("Enter %d values: ",b1);
    for(int i=0;i<b1;i++)
    {
        if(b2!=NULL)
        {
            scanf("%d",b2+i);
            bSum+=b2[i];
        }
    }
    free(b2);
    b2=NULL;
    bAvg=bSum/(b1*1.00);
    printf("Average of the values is %.3f",bAvg);

    printf("\n\n\e[1mQuestion3. Write a program to calculate the sum of n numbers entered by the user using malloc and free..\e[m");
    int c1,*c2=NULL,cSum=0;
    printf("\nEnter total no. of veriables for which you want to calculate the sum: ");
    scanf("%d",&c1);
    c2=(int*)malloc((sizeof(int))*c1);
    printf("Enter %d numbers: ",c1);
    for(int i=0;i<c1;i++)
    {
        if(c2!=NULL)
        {
            scanf("%d",c2+i);
            cSum+=c2[i];
        }
    }
    while(getchar()!='\n');
    free(c2);
    c2=NULL;
    printf("Sum all the values is %d",cSum);

    printf("\n\n\e[1mQuestion4. Write a program to input and print text using dynamic memory allocation..\e[m");
    char *d1=NULL;
    d1=(char*)malloc((sizeof(char))*50);
    printf("\nEnter any text under 50 characters: ");
    if(d1!=NULL)
        fgets(d1,50,stdin);
    printf("The text entered by you is %s",d1);
    free(d1);
    d1=NULL;

    printf("\n\n\e[1mQuestion5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements\nusing dynamic memory allocation..\e[m");
    int e1[6]={4,8,12,54,21,23},*e2=NULL,eSum=0;
    e2=(int*)malloc((sizeof(int))*10);
    printf("\nEnter elements to sum up with existing list: ");
    for(int i=0;i<10;i++)
    {
        if(e2!=NULL)
        {
            scanf("%d",e2+i);
            eSum+=e2[i];
        }
        if(i<6)
            eSum+=e1[i];
    }
    free(e2);
    e2=NULL;
    printf("Total of all the values including the giving array is %d",eSum);

    printf("\n\n\e[1mQuestion6. Write a program in C to find the largest element using Dynamic Memory Allocation..\e[m");
    int *f1=NULL,*f2=NULL;
    f1=(int*)malloc(sizeof(int));
    f2=(int*)malloc(sizeof(int));
    printf("\nEnter two numbers: ");
    if(f1!=NULL && f2!=NULL)
    {
        scanf("%d%d",f1,f2);
    }
    (*f1>*f2)?printf("%d is greater",*f1):printf("%d is greater",*f2);
    free(f1);
    free(f2);
    f1=NULL;
    f2=NULL;

    printf("\n\n\e[1mQuestion7. Write a program to demonstrate memory leak in C..\e[m");
    int g1;
    g1=input();
    printf("\nValue is %d but the memory allocated in the associated function is leaked now!!",g1);

    printf("\n\n\e[1mQuestion8. Write a program to demonstrate dangling pointers in C..\e[m");
    int *h1;
    h1=(int*)malloc(sizeof(int));
    printf("\nEnter a value: ");
    scanf("%d",h1);
    free(h1);
    printf("The value of %d",*h1);

    printf("\n\n\e[1mQuestion9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed..\e[m");
    int i1; struct employee *i2=NULL;
    printf("\nEnter the size in bytes for your data: ");
    scanf("%d",&i1);
    i2=(struct employee*)malloc(sizeof(i1));
    if(i2==NULL)
        i2=(struct employee*)malloc(sizeof(struct employee));//handling case of memory allocation fail.
    printf("Enter empId, empName and empWeight: ");
    if(i2!=NULL)
    {
        scanf("%d",&i2->empId);
        while(getchar()!='\n');
        fgets(i2->empName,50,stdin);
        scanf("%f",&i2->empWeight);
        while(getchar()!='\n');
    }
    printf("Employee id - %d\nEmployee name is %s\nEmployee weight is %f",i2->empId,i2->empName,i2->empWeight);
    free(i2);
    i2=NULL;

    printf("\n\n\e[1mQuestion10. Find out the maximum and minimum from an array using dynamic memory allocation in C..\e[m");
    int j1,*j2=NULL,jMin,jMax;
    printf("\nEnter size of array: ");
    scanf("%d",&j1);
    j2=(int*)malloc(sizeof(int));
    printf("Enter the %d elements: ",j1);
    for(int i=0;i<j1;i++)
        scanf("%d",j2+i);
    jMin=j2[0];
    jMax=j2[0];
    for(int i=0;i<j1;i++)
    {
        if(j2[i]>jMax)
            jMax=j2[i];
        if(j2[i]<jMin)
            jMin=j2[i];
    }
    printf("Maximum is %d\nMinimum is %d",jMax,jMin);
    free(j2);
    j2=NULL;
    return 0;
}
int input()
{
    int *e=NULL;
    e=(int*)malloc(sizeof(int));
    if(e!=NULL)
        *e=5;
    return *e;
}