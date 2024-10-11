#include<stdio.h>
void input(int[], int);
void sort(int[]);
int main()
{
    printf("\e[1mQuestion1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user..\e[m");
    int a[10],sums=0;
    input(a,10);
    for(int i=0;i<=9;i++)
        sums+=a[i];
    printf("Sum of all the elements of array a: %d",sums);

    printf("\n\n\e[1mQuestion2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user..\e[m");
    int c[10],sum=0,avg,count=0;
    input(c,10);
    for(int i=0;i<=9;i++)
    {
        sum+=c[i];
        ++count;
    }
    printf("%d",count);
    avg=sum/count;
    printf("\nAverage of numbers entered by user is %d",avg);

    printf("\n\n\e[1mQuestion3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user..\e[m");
    int d[10],sumEven=0,sumOdd=0;
    input(d,10);
    for(int i=0;i<=9;i++)
    {
        if(d[i]&1)
            sumOdd+=d[i];
        else
            sumEven+=d[i];
    }
    printf("Sum of all even items is %d\nSum of all odd items is %d",sumEven,sumOdd);

    printf("\n\n\e[1mQuestion4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user..\e[m");
    int e[10],greatest=0;
    input(e,10);
    greatest=e[0];
    for(int i=0;i<=9;i++)
    {
        if(e[i]>greatest)
            greatest=e[i];
    }
    printf("Greatest item in the array is %d",greatest);

    printf("\n\n\e[1mQuestion5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user..\e[m");
    int g[10],smallest;
    input(g,10);
    smallest=g[0];
    for (int i = 0; i <= 9; i++)
        if(g[i]<smallest)
            smallest=g[i];
    printf("The smallest number in the array is %d",smallest);
    
    printf("\n\n\e[1mQuestion6. Write a program to sort elements of an array of size 10. Take array values from the user..\e[m");
    int h[10];
    input(h,10);
    sort(h);
    for(int i=0;i<=9;i++)
        printf("%d ",h[i]);

    printf("\n\n\e[1mQuestion7. Write a program to find second largest in an array.Take array values from the user..\e[m");
    int l[10];
    input(l,10);
    sort(l);
    int largest=l[9];
    for(int i=8;i>=0;i--)
        if(l[i]<largest)
        {
            printf("Second largest item in the array is: %d",l[i]);
            break;
        }

    printf("\n\n\e[1mQuestion8. Write a program to find the second smallest number in an array.Take array values from the user..\e[m");
    int x[10];
    input(x,10);
    sort(x);
    int smallest=x[0];
    for(int i=1;i<=9;i++)
        if(x[i]>smallest)
        {
            printf("Second smallest item in the array is: %d",x[i]);
            break;
        }

    printf("\n\n\e[1mQuestion9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user..\e[m");
    int asize;
    printf("\nEnter the size of array:");
    scanf("%d",&asize);
    int m[asize];
    input(m,asize);
    for(int i=asize-1;i>=0;i--)
        printf("%d ",m[i]);

    printf("\n\n\e[1mQuestion10. Write a program in C to copy the elements of one array into another array.Take array values from the user..\e[m");
    int arraySize;
    printf("\nEnter the size of array:");
    scanf("%d",&arraySize);
    int j[arraySize],newK[arraySize];
    input(j,arraySize);
    for(int i=0;i<arraySize;i++)
    {
        newK[i]=j[i];
        printf("%d ",newK[i]);
    }
    return 0;
}
//functions
void input(int b[],int x)
{
    printf("\nEnter %d numbers:",x);
    for(int i=0;i<x;i++)
        scanf("%d",&b[i]);
}
void sort(int b[])
{
    char tag='f';
    for(int j=0;j<=9;j++)
    {
        tag='f';
        for(int i=0;i<9-j;i++)
        {
            if(b[i]>b[i+1])
            {
                tag='t';
                b[i]=b[i]+b[i+1];
                b[i+1]=b[i]-b[i+1];
                b[i]=b[i]-b[i+1];
            }
        }
        if(tag=='f')
            break;
    }
}