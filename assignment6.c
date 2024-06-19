#include<stdio.h>
int main()
{
    printf("\n\n\e[1mQuestion1. Write a program to calculate sum of first N natural numbers.\e[m");
    int one6,onesum=0;
    printf("\nEnter a number:");
    scanf("%d",&one6);
    for(int i=1;i<=one6;i++)
    {
        onesum+=i;
    }
    printf("Sum of first %d natural numbers is %d",one6,onesum);

    printf("\n\n\e[1mQuestion2. Write a program to calculate sum of first N even natural numbers.\e[m");
    int two6,twosum=0,evenum=2;
    printf("\nEnter a number:");
    scanf("%d",&two6);
    for(int a=0;a<two6;a++)
    {
        twosum+=evenum;
        evenum+=2;
    }
    printf("Sum of first %d even natural numbers is %d",two6,twosum);

    printf("\n\n\e[1mQuestion3. Write a program to calculate sum of first N odd natural numbers.\e[m");
    int three6,threesum=0,oddnum=1;
    printf("\nEnter a number:");
    scanf("%d",&three6);
    for(int b=0;b<three6;b++)
    {
        threesum+=oddnum;
        oddnum+=2;
    }
    printf("Sum of first %d odd natural numbers is %d",three6,threesum);

    printf("\n\n\e[1mQuestion4. Write a program to calculate sum of squares of first N natural numbers.\e[m");
    int four6,foursum=0;
    printf("\nEnter a number:");
    scanf("%d",&four6);
    for(int c=1;c<=four6;c++)
    {
        foursum+=(c*c);
    }
    printf("Sum of squares of first %d natural numbers is %d",four6,foursum);

    printf("\n\n\e[1mQuestion5. Write a program to calculate sum of cubes of first N natural numbers.\e[m");
    int five6,fivesum=0;
    printf("\nEnter a number:");
    scanf("%d",&five6);
    for(int x=1;x<=five6;x++)
    {
        fivesum+=(x*x*x);
    }
    printf("Sum of cubes of first %d natural numbers is %d",five6,fivesum);

    printf("\n\n\e[1mQuestion6. Write a program to calculate factorial of a number.\e[m");
    long int facto=1;int six6;
    printf("\nEnter a number for factorial:");
    scanf("%d",&six6);
    do
    {
        facto=facto*six6;
        six6--;
    } while (six6!=1);
    printf("The factorial is %ld",facto);
    
    printf("\n\n\e[1mQuestion7. Write a program to count digits in a given number.\e[m");
    int seven6,count=0;
    printf("\nEnter a number to count digits:");
    scanf("%d",&seven6);
    while(seven6!=0)
    {
        seven6/=10;
        count++;
    }
    printf("Total digit(s) in number - %d",count);

    printf("\n\n\e[1mQuestion8. Write a program to check whether a given number is a Prime number or not.\e[m");
    int eight6,cheker=2;
    printf("\nEnter a number to verify:");
    scanf("%d",&eight6);
    do
    {
        if(eight6%cheker==0)
        {
            break;
        }
        cheker++;
    } while (cheker<eight6);
    if(cheker==eight6)
    {
        printf("Number is prime.");
    }
    else
    {
        printf("Number is not prime.");
    }
    
    printf("\n\n\e[1mQuestion9. Write a program to calculate LCM of two numbers.\e[m");
    int num1,num2,check1=2,lcm=1;
    printf("\nEnter two numbers:");
    scanf("%d %d",&num1,&num2);
    while (num1!=1 || num2!=1)
    {
        if (num1%check1==0 || num2%check1==0)
        {
            lcm*=check1;
            if (num1%check1==0)
            {
                num1/=check1;
            }
            if (num2%check1==0)
            {
                num2/=check1;
            }   
        }else{
            check1++;
        }
    }
    if (num1==1 && num2==1)
    {
        printf("The LCM is %d", lcm);
    }

    printf("\n\n\e[1mQuestion10. Write a program to reverse a given number.\e[m");
    int ten6,newnum=0;
    printf("\nEnter a number to reverse:");
    scanf("%d",&ten6);
    while(ten6!=0)
    {
        newnum=newnum*10+ten6%10;
        ten6/=10;
    }
    printf("Reverse of a number is %d",newnum);

    return 0;
}