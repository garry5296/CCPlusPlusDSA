#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    // printf("\n\n\e[1mQuestion1. Write a program which takes the month number as an input and display number of days in that month..\e[m");
    // int n;
    // printf("\nEnter month:");
    // scanf("%d",&n);
    // switch (n)
    // {
    // case 2:
    //     printf("28/29 days.");
    //     break;
    
    // case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    //     printf("31 days.");
    //     break;
    
    // case 4:case 6:case 9:
    //     printf("30 days.");
    //     break;

    // default:
    //     printf("Enter number ranging from 1 to 12 next time.");
    //     break;
    // }

    // printf("\n\n\e[1mQuestion2. Write a menu driven program with the following options:.\e[m");
    // int a,b,ab,c;
    // printf("\n1. Addition");
    // printf("\n2. Substraction");
    // printf("\n3. Multiplication");
    // printf("\n4. Division");
    // printf("\n5. Exit");
    // printf("\nChoose from obove options to continue..");
    // scanf("%d",&ab);
    // switch (ab)
    // {
    // case 1:
    //     printf("Enter two numbers to perform the operation:");
    //     scanf("%d%d",&a,&b);
    //     c=a+b;
    //     printf("Sum is %d",c);
    //     break;

    // case 2:
    //     printf("Enter two numbers to perform the operation:");
    //     scanf("%d%d",&a,&b);
    //     c=a-b;
    //     printf("Difference is %d",c);
    //     break;

    // case 3:
    //     printf("Enter two numbers to perform the operation:");
    //     scanf("%d%d",&a,&b);
    //     c=a*b;
    //     printf("Multiplication is %d",c);
    //     break;

    // case 4:
    //     printf("Enter two numbers to perform the operation:");
    //     scanf("%d%d",&a,&b);
    //     c=a/b;
    //     printf("Quotient is %d",c);
    //     break;

    // default:
    //     break;
    // }

    // printf("\n\n\e[1mQuestion3. Write a program which takes the day number of a week and displays a unique greeting message for the day..\e[m");
    // int e;
    // printf("\nEnter a number for a week:");
    // scanf("%d",&e);
    // switch (e)
    // {
    // case 1:
    //     printf("It's a brand new week, and you've got the power to make it amazing.\nLet Monday kickstart your journey to success. Have a motivating week!");
    //     break;

    // case 2:
    //     printf("As Tuesday arrives, embrace the challenges at work with confidence.\nMay this week's efforts lead to great achievements. Have an industrious week ahead!");
    //     break;

    // case 3:
    //     printf("Happy Wednesday! Let this day remind you to stay mindful of your health and happiness.\nMay the rest of the week be as radiant as you are!");
    //     break;

    // case 4:
    //     printf("Thankful Thursday is a reminder to cherish the good in your life.\nMay your week be blessed with positivity, love, and countless reasons to be grateful.");
    //     break;

    // case 5:
    //     printf("Friday is here, bringing smiles and excitement. May your weekend be a\npreview of the joyous week that awaits you. Enjoy the moments!");
    //     break;

    // case 6:
    //     printf("Happy Saturday! May your weekend be a joyful adventure filled with the\nwarmth of friends and the love of family. Have an unforgettable weekend ahead!");
    //     break;

    // case 7:
    //     printf("On this sacred Sunday, may your spirit be renewed, your soul be at peace, and your\nheart be filled with blessings for the week ahead. Have a blessed new week!");
    //     break;

    // default:
    //     break;
    // }

    // printf("\n\n\e[1mQuestion4. Write a menu driven program with the following options:.\e[m");
    // int  f,first,second,third;
    // printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    // printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    // printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
    // printf("\n4. Exit");
    // printf("\nMake your choice:");
    // scanf("%d",&f);
    // switch (f)
    // {
    // case 1:
    //     printf("\nEnter sides of the triangle:");
    //     scanf("%d%d%d",&first,&second,&third);
    //     if(first==second || first==third || second==third)
    //         printf("It is a isosceles triangle.");
    //     else
    //         printf("It is not an isoscles triangle.");
    //     break;

    // case 2:
    //     printf("\nEnter sides of the triangle:");
    //     scanf("%d%d%d",&first,&second,&third);
    //     if((first*first)==(second*second)+(third*third) || (second*second)==(first*first)+(third*third) || (third*third)==(first*first)+(second*second))
    //         printf("It is a right angled triangle.");
    //     else
    //         printf("It is not a rightangled triangle.");
    //     break;

    // case 3:
    //     printf("\nEnter sides of the triangle:");
    //     scanf("%d%d%d",&first,&second,&third);
    //     if(first==second && second==third)
    //         printf("It is an equilateral triangle");
    //     else
    //         printf("It is not an equilateral triangle.");
    //     break;

    // case 4:
    //     exit(0);

    // default:
    //     break;
    // }

    // printf("\n\n\e[1mQuestion5. Convert the following if-else-if construct into switch case:.\e[m");
    // int g;
    // printf("\nEnter a number for degree of adjective:");
    // scanf("%d",&g);
    // switch (g)
    // {
    // case 1:
    //     printf("good");
    //     break;

    // case 2:
    //     printf("better");
    //     break;

    // case 3:
    //     printf("best");
    //     break;

    // default:
    //     printf("invalid");
    //     break;
    // }

    // printf("\n\n\e[1mQuestion6. Program to check whether a year is a leap year or not. Using switch statement.\e[m");
    // int year,rem;
    // printf("\nEnter the year:");
    // scanf("%d",&year);
    // rem=year%4;
    // switch (rem)
    // {
    // case 1 ... 3:
    //     printf("It is not leap year.");
    //     break;
    
    // case 0:
    //     printf("It is a leap year.");
    //     break;
    // }

    // printf("\n\n\e[1mQuestion7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to\nthe given condition . Using the switch statement..\e[m");
    // int unit;float total;
    // printf("\nEnter the units:");
    // scanf("%d",&unit);
    // switch (unit)
    // {
    // case 1 ... 50:
    //     total=1.2*(unit*0.5);
    //     printf("Total electricity bill is %f",total);
    //     break;

    // case 51 ... 150:
    //     total=1.2*((50*0.5)+((unit-50)*0.75));
    //     printf("Total electricity bill is %f",total);
    //     break;

    // case 151 ... 250:
    //     total=1.2*((50*0.5)+(100*0.75)+((unit-150)*1.20));
    //     printf("Total electricity bill is %f",total);
    //     break;

    // default:
    //     total=1.2*unit*1.50;
    //     printf("Total electricity bill is %f",total);
    //     break;
    // }

    // printf("\n\n\e[1mQuestion8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement..\e[m");


    // printf("\n\n\e[1mQuestion9. Program to Convert even number into its upper nearest odd number Switch Statement..\e[m");


    printf("\n\n\e[1mQuestion10. C program to find all roots of a quadratic equation using switch case.\e[m");
    int i,j,k,l,root1,root2;
    printf("Enter the values of the equation:");
    scanf("%d%d%d",&i,&j,&k);
    l=j*j-4*i*k;  
    switch (l>0?1:(l<0?2:3))
    {
    case 1://real and different

        break;

    case 2://complex or imaginary
        break;

    case 3://real
        break;

    return 0;
}