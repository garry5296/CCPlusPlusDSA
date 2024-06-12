#include<stdio.h>
int main()
{
    int a;
    //1. Write a program to print unit digit of a given number.
    printf("\e[1mQuestion1. Write a program to print unit digit of a given number\e[m");
    printf("\nEnter a number to print it's unit digit: ");
    scanf("%d",&a);
    printf("\e[1mSolution1:\e[m The unit digit of %d is: \033[0;31m%d\033[0m\n",a,a%10);

    //2. Write a program to print a given number without its last digit.
    printf("\n\e[1mQuestion2.Write a program to print a given number without its last digit.\e[m");
    printf("\n\e[1mSolution2:\e[m %d without it's last digit is: \033[0;31m%d\033[0m\n",a,a/10);

    //3. Write a program to swap values of two int variables
    printf("\n\e[1mQuestion3. Write a program to swap values of two int variables.\e[m");
    int b,c,d,e,f;
    printf("\nEnter two variables: ");
    scanf("%d%d",&b,&c);
    d=b;b=c;c=d;
    printf("\e[1mSolution3: \e[mFirst number is now \033[0;31m%d\033[0m and second number is now \033[0;31m%d\033[0m\n",b,c);

    //4. Write a program to swap values of two int variables without using a third variable.
    printf("\n\e[1mQuestion4. Write a program to swap values of two int variables without using a third variable.\e[m");
    printf("\nEnter two variables: ");
    scanf("%d%d",&e,&f);
    e+=f;f=e-f;e-=f;
    printf("e[1mSolution4:\e[m First number is now \033[0;31m%d\033[0m and second number is now \033[0;31m%d\033[0m\n",e,f);

    //5. Write a program to input a three-digit number and display the sum of the digits.
    printf("\n\e[1mQuestion5. Write a program to input a three-digit number and display the sum of the digits.\e[m");
    printf("\nEnter three variables: ");
    scanf("%d",&b);
    printf("\e[1mSolution5:\e[m The sum of all the three digits is: \033[0;31m%d\033[0m\n",(b/10)%10+(b/10)/10+(b%10));

    //6. Write a program which takes a character as an input and displays its ASCII code.
    printf("\n\e[1mQuestion6. Write a program which takes a character as an input and displays its ASCII code.\e[m\n");
    char s;
    printf("Enter a character: ");
    scanf("%c",&s);
    printf("\n\e[1mSolution6:\e[m The ASCII code of the charcter is: \033[0;31m%d\033[0m\n\n",s);

    // 7. Write a program to find the position of first 1 in LSB.
    printf("\n\e[1mQuestion7. Write a program to find the position of first 1 in LSB.\e[m");
    int h,result=0,count=0;
    printf("\nEnter a number: ");
    scanf("%d",&h);
    while(result!=1)
    {
        result=h&1;
        count++;
        if(result==1)
        {
            printf("\n\e[1mSolution7:\e[m The first '1' in LSD is at position \033[0;31m%d\033[0m",count);
            break;
        }
        h=h>>1;
    }

    //8. Write a program to check whether the given number is even or odd using a bitwise operator.
    printf("\n\n\e[1mQuestion8. Write a program to check whether the given number is even or odd using a bitwise operator.\e[m");
    int p;
    printf("\nEnter a number to check whether it's a even or odd: ");
    scanf("%d",&p);
    p=p&1;
    if(p==1)
    {
        printf("\e[1mSolution8:\e[m The number is \033[0;31mOdd\033[0m\n");
    }
    else
    {
        printf("\e[1mSolution8:\e[m The number is \033[0;31mEven\033[0m\n");
    }

    // 9. Write a program to print size of an int, a float, a char and a double type variable.
    printf("\n\e[1mQuestion9. Write a program to print size of an int, a float, a char and a double type variable.\e[m");
    int x=10;float y=3.44;char z='A';double i=567.34;
    printf("\nThis is the input - int x=10;float y=3.44;char z='A';double i=567.34;");
    printf("\n\e[1mSolution9:\e[m\n");
    printf("x is of size: \033[0;31m%lu\033[0m\n",sizeof(x));
    printf("y is of size: \033[0;31m%lu\033[0m\n",sizeof(y));
    printf("z is of size: \033[0;31m%lu\033[0m\n",sizeof(z));
    printf("i is of size: \033[0;31m%lu\033[0m\n",sizeof(i));

    //10.Write a program to make the last digit of a number stored in a variable as zero.
    printf("\n\e[1mQuestion10. Write a program to make the last digit of a number stored in a variable as zero.\e[m");
    long int k;
    printf("\nEnter a number to make the last digit as zero: ");
    scanf("%ld",&k);
    k=k/10;k=k*10;
    printf("\e[1mSolution10:\e[m The result is: \033[0;31m%ld\033[0m\n",k);

    //11. Write a program to input a number from the user and also input a digit. Append a
    // digit in the number and print the resulting number. (Example - number=234 and
    // digit=9 then the resulting number is 2349)
    printf("\n\e[1mQuestion11. Write a program to input a number from the user and also input a digit. Append a \
digit in the number and print the resulting number. (Example - number=234 and \
digit=9 then the resulting number is 2349)\e[m");
    long int m;
    short int j;
    printf("\nEnter a number and a digit: ");
    scanf("%ld%hu",&m,&j);
    m=m*10+j;
    printf("\e[1mSolution11:\e[m The final result is: \033[0;31m%ld\033[0m\n",m);

    //12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
    printf("\n\e[1mQuestion12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.\e[m");
    double q;
    printf("\nEnter an amount in INR: ");
    scanf("%lf",&q);
    q=q*76.23;
    printf("\e[1mSolution11:\e[m Amount in USD is: \033[0;31m%lf\033[0m\n",q);

    //13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
    printf("\n\e[1mQuestion13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.\e[m");
    short int r;
    printf("\nEnter a three digit number: ");
    scanf("%hd",&r);
    r=((r%10)*100)+(r/10);
    printf("\nThe rotated number is \033[0;31m%d\033[0m",r);
    return 0;
}