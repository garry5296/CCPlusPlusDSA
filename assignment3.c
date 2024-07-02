#include<stdio.h>
int main()
{
    //1. Write a program to check whether a given number is positive or non-positive.
    printf("\e[1mQuestion1. Write a program to check whether a given number is positive or non-positive.\e[m");
    int a;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Solution1: The number is positive.");
    }
    else{
        printf("Solution1: The number is negative.");
    };

    //2. Write a program to check whether a given number is divisible by 5 or not.
    printf("\n\n\e[1mQuestion2. Write a program to check whether a given number is divisible by 5 or not.\e[m");
    int b;
    printf("\nEnter a number: ");
    scanf("%d",&b);
    if(b%5==0)
    {
        printf("Solution2: The number is divisible by 5.");
    }
    else{
        printf("Solution2: The number is not divisible by 5.");
    };

    //3. Write a program to check whether a given number is an even number or an odd number.
    printf("\n\n\e[1mQuestion3. Write a program to check whether a given number is an even number or an odd number.\e[m");
    int a_3;
    printf("\nEnter a number: ");
    scanf("%d",&a_3);
    if(a_3%2==1)
    {
        printf("Solution3: The number is odd.");
    }
    else{
        printf("Solution3: The number is even.");
    };

    //4. Write a program to check whether a given number is an even number or an odd number without using % operator.
    printf("\n\n\e[1mQuestion4. Write a program to check whether a given number is an even number or an odd number without using %% operator.\e[m");
    int c;
    printf("\nEnter a number: ");
    scanf("%d",&c);
    if(c&1==1)
    {
        printf("Solution4: The number is odd.");
    }
    else{
        printf("Solution4: The number is even.");
    };

    //5. Write a program to check whether a given number is a three-digit number or not.
    printf("\n\n\e[1mQuestion5. Write a program to check whether a given number is a three-digit number or not.\e[m");
    int e;
    printf("\nEnter a number: ");
    scanf("%d",&e);
    if(e>=100 && e<=999)
    {
        printf("Solution5: The number is a three-digit number.");
    }else{
        printf("Solution5: The number is not a three-digit number.");
    };

    //6. Write a program to print greater between two numbers. Print one number of both are the same.
    printf("\n\n\e[1mQuestion6. Write a program to print greater between two numbers. Print one number of both are the same.\e[m");
    int k,l;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&k,&l);
    if(k==l){
        printf("%d",k);
    }
    else{
        if(k<l)
        {
            printf("Solution6: %d is greater than %d",l,k);
        }
        else{
            printf("Solution6: %d is greater than %d",k,l);
        };
    };
    
    // 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
    printf("\n\n\e[1mQuestion7. Write a program to check whether roots of a given quadratic equation \nare real & distinct, real & equal or imaginary roots.\e[m");
    int f,g,h,i;
    printf("\nEnter the value of quadratic equation: ");
    scanf("%d%d%d",&f,&g,&h);
    i = g*g-4*f*h;
    if(i<=0)
    {
        printf("Solution7: The roots are real & equal or imaginary.");
    }
    else{
        printf("Solution7: The roots are real and distinct.");
    };
    // 8. Write a program to check whether a given year is a leap year or not.
    printf("\n\n\e[1mQuestion8. Write a program to check whether a given year is a leap year or not.\e[m");
    int j;
    printf("\nEnter the year: ");
    scanf("%d",&j);
    if(j%4)
    {
        printf("Solution8: The %d is not a leap year",j);
    }
    else{
        printf("Solution8: The %d is a leap year",j);
    };

    // 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
    printf("\n\n\e[1mQuestion9. Write a program to find the greatest among three given numbers. Print number once if \nthe greatest number appears two or three times.\e[m");
    int m,n,o;
    printf("\nEnter three numbers: ");
    scanf("%d%d%d",&m,&n,&o);
    if(m>n)
    {
        if(m>o)
        {
            printf("Solution9: %d is greatest",m);
        }
        else{
            printf("Solution9: %d is greatest",o);
        };
    }
    else{
        if(n>o)
        {
            printf("Solution9: %d is greatest",n);
        }
        else{
            printf("Solution9: %d is greatest",o);
        }
    };
    
    // 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
    printf("\n\n\e[1mQuestion10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.\e[m");
    double sp,cp,profit,loss;
    printf("\nEnter cost price and selling price: ");
    scanf("%lf%lf",&sp,&cp);
    if(sp==cp)
    {
        printf("No profit no loss!!");
    }
    else{
        if(sp>cp)
        {
            profit = (sp-cp)/cp*100;
            printf("Solution10: The profit percentage is %lf",profit);
        }
        if(cp>sp)
        {
            loss = (cp-sp)/cp*100;
            printf("Solution10: The loss percentage is %lf",loss);
        }
    }

    // 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
    printf("\n\n\e[1mQuestion11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.\e[m");
    float a_11,b_11,c_11,d_11,e_11;
    printf("\nEnter a marks of all 5 subjects: ");
    scanf("%f%f%f%f%f",&a_11,&b_11,&c_11,&d_11,&e_11);
    if((a_11>=33)&&(b_11>=33)&&(c_11>=33)&&(d_11>=33)&&(e_11>=33))
    {
        printf("Solution11: The candidate passed the examination.");
    }
    else{
        printf("Solution11: The candidate failed the examination.");
    };

    // 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
    printf("\n\n\e[1mQuestion12. Write a program to check whether a given alphabet is in uppercase or lowercase.\e[m");
    char a_12;int b_12;
    printf("\nEnter a character in upper or lower case: ");
    scanf(" %c",&a_12);
    b_12=a_12;
    if(b_12>=65 && b_12<=90)
    {
        printf("Solution12: %c is an UpperCase alphabet",a_12);
    };
    if(b_12>=97 && b_12<=122)
    {
        printf("Solution12: %c is an LowerCase alphabet",a_12);
    };

    // 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
    printf("\n\n\e[1mQuestion13. Write a program to check whether a given number is divisible by 3 and divisible by 2.\e[m");
    long int a_13;
    printf("\nEnter a number: ");
    scanf("%ld",&a_13);
    if(a_13%2==0 && a_13%3==0)
    {
        printf("Solution13: %ld is divisible by both 3 and 2",a_13);
    }else{
        printf("Solution13: %ld is not divisible by both 3 and 2",a_13);
    };

    // 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
    printf("\n\n\e[1mQuestion14. Write a program to check whether a given number is divisible by 7 or divisible by 3.\e[m");
    long int a_14;
    printf("\nEnter a number: ");
    scanf("%ld",&a_14);
    if(a_14%7==0 || a_14%3==0)
    {
        printf("Solution14: %ld is divisible by both 3 or 7",a_14);
    }else{
        printf("Solution14: %ld is not divisible by both 3 or 7",a_14);
    };

    // 15. Write a program to check whether a given number is positive, negative or zero.
    printf("\n\n\e[1mQuestion15. Write a program to check whether a given number is positive, negative or zero.\e[m");
    float a_15;
    printf("\nEnter a number: ");
    scanf("%f",&a_15);
    if(a_15>0)
    {
        printf("Solution15: %f is a positive number",a_15);
    }
    else{
        printf("Solution15: %f is a negative number",a_15);
    };

    // 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
    printf("\n\n\e[1mQuestion16. Write a program to check whether a given character is an alphabet (uppercase), \nan alphabet (lower case), a digit or a special character.\e[m");
    char a_16;int b_16;
    printf("\nEnter a character in upper or lower case: ");
    scanf(" %c",&a_16);
    b_16=a_16;
    if(b_16>=48 && b_16<=57)
    {
        printf("Solution16: %c is a digit",a_16);
    };
    if(b_16>=65 && b_16<=90)
    {
        printf("Solution16: %c is an UpperCase alphabet",a_16);
    };
    if(b_16>=97 && b_16<=122)
    {
        printf("Solution16: %c is an LowerCase alphabet",a_16);
    };
    if((b_16>=33 && b_16<=47) || (b_16>=58 && b_16<=64) || (b_16>=91 && b_16<=96) || (b_16>=123 && b_16<=126))
    {
        printf("Solution16: %c is a Special Character",a_16);
    };

    // 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
    printf("\n\n\e[1mQuestion17. Write a program which takes the length of the sides of a triangle as an input.\nDisplay whether the triangle is valid or not.\e[m");
    float a_17,b_17,c_17;
    printf("\nEnter sides of the triangle: ");
    scanf("%f%f%f",&a_17,&b_17,&c_17);
    if(a_17+b_17>c_17)
    {
        printf("Solution17: Triangle is valid");
    }
    else{
        printf("Solution17: Triangle is not valid");
    };

    // 18. Write a program which takes the month number as an input and display number of days in that month.
    printf("\n\n\e[1mQuestion18. Write a program which takes the month number as an input and display number of days in that month.\e[m");
    int a_18;
    printf("\nEnter the month number to display number of days in that month: ");
    scanf("%d",&a_18);
    if(a_18>12 || a_18<1)
    {
        printf("Solution18: This month doesn't exist in the universe.\n\n");
    }
    else{
        if((a_18==1)||(a_18==3)||(a_18==5)||(a_18==7)||(a_18==8)||(a_18==10)||(a_18==12))
        {
            printf("Solution18: %d has 31 days.\n\n",a_18);
        };
        if((a_18==4)||(a_18==6)||(a_18==9)||(a_18==11))
        {
            printf("Solution18: %d has 30 days.\n\n",a_18);
        };
        if(a_18==2)
        {
            printf("Solution18: %d has 29 or 28 days depending upon a leap and non-leap year respectively.\n\n",a_18);
        };
    };

    return 0;
}