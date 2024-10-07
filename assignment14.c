#include<stdio.h>
void input(int[], int);
int main()
{
    // printf("\e[1mQuestion1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user..\e[m");
    // int a[10],sum=0;
    // input(a,10);
    // for(int i=0;i<=9;i++)
    //     sum+=a[i];
    // printf("Sum of all the elements of array a: %d",sum);

    // printf("\n\n\e[1mQuestion2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user..\e[m");
    // int c[10],sum=0,avg,count=0;
    // input(c,10);
    // for(int i=0;i<=9;i++)
    // {
    //     sum+=c[i];
    //     ++count;
    // }
    // printf("%d",count);
    // avg=sum/count;
    // printf("Average of numbers entered by user is %d",avg);

    printf("\n\n\e[1mQuestion3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion6. Write a program to sort elements of an array of size 10. Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion7. Write a program to find second largest in an array.Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion8. Write a program to find the second smallest number in an array.Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user..\e[m");
    // printf("\n\n\e[1mQuestion10. Write a program in C to copy the elements of one array into another array.Take array values from the user..\e[m");

    return 0;
}
//functions
void input(int b[],int x)
{
    printf("\nEnter %d numbers:",x);
    for(int i=0;i<x;i++)
        scanf("%d",&b[i]);
}