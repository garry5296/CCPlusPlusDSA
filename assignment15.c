#include<stdio.h>
void input(int[],int);
int sort(int[],int);
int largest(int[],int);
int smallest(int[],int);
int rotation(int[],int,int,char);
int adjacentDuplicate(int[],int);
void reverse(int[],int);
void duplicate(int[],int);
int main()
{
    // printf("\n\n\e[1mQuestion1. Write a function to find the greatest number from the given array of any size. (TSRS).\e[m");
    // int n;
    // printf("\nEnter size of array:");
    // scanf("%d",&n);
    // int a[n];
    // input(a,n);
    // printf("Greatest number in array is: %d",largest(a,n));
    
    // printf("\n\n\e[1mQuestion2. Write a function to find the smallest number from the given array of any size. (TSRS).\e[m");
    // int m;
    // printf("\nEnter size of array:");
    // scanf("%d",&m);
    // int a[m];
    // input(a,m);
    // printf("Smallest number in array is: %d",smallest(a,m));

    // printf("\n\n\e[1mQuestion3. Write a function to sort an array of any size. (TSRS).\e[m");
    // int t;
    // printf("\nEnter size of array:");
    // scanf("%d",&t);
    // int p[t];
    // input(p,t);
    // p[t]=sort(p,t);
    // for(int i=0;i<t;i++)
    //     printf("%d ",p[i]);

    // printf("\n\n\e[1mQuestion4. Write a function to rotate an array by n position in d direction. \
    // The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70];\
    //  n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ).\e[m");
    // int count,numb; char direc;
    // printf("\nEnter size of array:");
    // scanf("%d",&count);
    // int a[count];
    // input(a,count);
    // printf("Enter by how many positions 'p' and direction 'd' you want to rotate your array:");
    // scanf("%d %c",&numb,&direc);
    // a[count] = rotation(a,count,numb,direc);
    // for(int i=0;i<count;i++)
    //     printf("%d ",a[i]);
    
    // printf("\n\n\e[1mQuestion5. Write a function to find the first occurrence of adjacent duplicate values \
    //  in the array. Function has to return the value of the element..\e[m");
    // int n5;
    // printf("\nEnter the size of the array:");
    // scanf("%d",&n5);
    // int new5[n5];
    // input(new5,n5);
    // printf("%d",adjacentDuplicate(new5,n5));

    // printf("\n\n\e[1mQuestion6. Write a function in C to read n number of values in an array and display it in reverse order..\e[m");
    // int n6;
    // printf("Enter the size of array:");
    // scanf("%d",&n6);
    // int new6[n6];
    // input(new6,n6);
    // reverse(new6,n6);

    printf("\n\n\e[1mQuestion7. Write a function in C to count a total number of duplicate elements in an array..\e[m");
    int n7;
    printf("\nEnter the size of array:");
    scanf("%d",&n7);
    int new7[n7];
    input(new7,n7);
    duplicate(new7,n7);

    // printf("\n\n\e[1mQuestion8. Write a function in C to print all unique elements in an array..\e[m");
    // printf("\n\n\e[1mQuestion9. Write a function in C to merge two arrays of the same size sorted in descending order..\e[m");
    // printf("\n\n\e[1mQuestion10. Write a function in C to count the frequency of each element of an array..\e[m");

    return 0;
}
void input(int b[],int n)
{
    printf("Enter %d numbers:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}
int sort(int b[],int n)
{
    char tag='f';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1])
            {
                tag = 't';
                b[j]=b[j]+b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]=b[j]-b[j+1];
            }
        }
        if(tag=='f')
            break;
    }
    // for(int i=0;i<n;i++)
    return b[n];
}
int largest(int b[],int n)
{
    int largest=b[0];
    for(int i=1;i<n;i++)
    {
        if(largest<b[i])
        {
            largest=b[i];
        }
    }
    return largest;
}
int smallest(int b[],int n)
{
    int smallest=b[0];
    for(int i=1;i<n;i++)
    {
        if(smallest>b[i])
        {
            smallest=b[i];
        }
    }
    return smallest;
}
int rotation(int b[],int count,int m,char n)
{
    int temp[m];
    if(n=='l')
    {
        for(int i=0;i<m;i++)
            temp[i]=b[i];
        for(int i=m;i>0;i--)
        {
            for(int j=i;j<count-m+i;j++)
            {
                b[j-1]=b[j];
            }
        }
        for(int i=0;i<m;i++)
            b[count-m+i]=temp[i];
    }else if (n=='r')
    {
        for(int i=0;i<m;i++)
            temp[i]=b[count-m+i];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<count-m;j++)
            {
                b[count-m-j+i]=b[count-m-j+i-1];
            }
        }
        for(int i=0;i<m;i++)
            b[i]=temp[i];
    }
    return b[count];
}
int adjacentDuplicate(int n[], int m)
{
    int compar=n[0],flag=0;
    for(int i=1;i<m;i++)
    {
        if(n[i]==compar)
        {
            flag=1;
            break;
        }else{
            compar=n[i];
        }
    }
    if(flag==1)
        return compar;
}
void reverse(int n[],int m)
{
    for(int i=m-1;i>=0;i--)
    {
        printf("%d ",n[i]);
    }
}
void duplicate(int n[], int m)
{
    int count=0;
    for(int i=0;i<m-1;i++)
        for(int j=i+1;j<m;j++)
            if (n[i]==n[j])
            {
                count++;
            }
    printf("%d",count);    
}