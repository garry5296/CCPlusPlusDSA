#include<stdio.h>
float areaOfCircle(float);
float simpleInterest(float,float,float);
int checkPrime();
void natural();
void oddNatural();
int facto();
int checkDigit();
void generatePrimeFactor();
int main()
{
    // printf("\e[1mQuestion1. Write a function to calculate the area of a circle. (TSRS).\e[m");
    // float a;
    // printf("\nEnter the radius:");
    // scanf("%f",&a);
    // printf("Area of Circle is %f",areaOfCircle(a));

    // printf("\n\n\e[1mQuestion2. Write a function to calculate simple interest. (TSRS).\e[m");
    // float b,c,d;
    // printf("\nEnter principal, time, rate");
    // scanf("%f%f%f",&b,&c,&d);
    // b=simpleInterest(b,c,d);
    // printf("Simple interest of your amount is %f",b);

    // printf("\n\n\e[1mQuestion3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS).\e[m");
    // int e;
    // printf("\nEnter a number:");
    // scanf("%d",&e);
    // if(checkPrime(e))
    //     printf("Number is odd");
    // else
    //     printf("Number is even");

    // printf("\n\n\e[1mQuestion4. Write a function to print first N natural numbers (TSRN).\e[m");
    // int g;
    // printf("\nEnter a number:");
    // scanf("%d",&g);
    // natural(g);

    // printf("\n\n\e[1mQuestion5. Write a function to print first N odd natural numbers. (TSRN).\e[m");
    // int h;
    // printf("\nEnter a number");
    // scanf("%d",&h);
    // oddNatural(h);

    // printf("\n\n\e[1mQuestion6. Write a function to calculate the factorial of a number. (TSRS).\e[m");
    // int l;
    // printf("\nEnter a number:");
    // scanf("%d",&l);
    // printf("The factorial of number is %d",facto(l));

    printf("\n\n\e[1mQuestion7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS).\e[m");
    //let n is b7 and r is a7.
    int b7,a7;
    printf("");


    // printf("\n\n\e[1mQuestion8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS).\e[m");
    

    // printf("\n\n\e[1mQuestion9. Write a function to check whether a given number contains a given digit or not. (TSRS).\e[m");
    // int m,n;
    // printf("\nEnter the number:");
    // scanf("%d",&m);
    // printf("\nEnter a digit:");
    // scanf("%d",&n);
    // if(checkDigit(m,n))
    // {
    //     printf("%d is present in the number",n);
    // }
    // else{
    //     printf("%d is not present in the number",n);
    // }

    printf("\n\n\e[1mQuestion10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN).\e[m");
    int o;
    printf("\nEnter a number:");
    scanf("%d",&o);
    generatePrimeFactor(o);


    return 0;
}
float areaOfCircle(float x)
{
    return 3.14*x*x;
}
float simpleInterest(float i,float j,float k)
{
    return i*j*k/100;
}
int checkPrime(int x)
{
    return x&1;
}
void natural(int x)
{
    int a=1;
    while(a<=x)
    {
        printf("%d ",a);
        a++;
    }
}
void oddNatural(int y)
{
    int b=1,count=0;
    while(count<=y)
    {
        printf("%d ",b);
        b+=2;
        ++count;
    }
}
int facto(int x)
{
    int mul=1;
    while(x!=0)
    {
        mul*=x;
        x--;
    }
    return mul;
}
int checkDigit(int i,int j)
{
    while(i!=0)
    {
        if(i%10==j)
        {
            i=1;
            break;
        }
        i=i/10;
    }
    return i;
}
void generatePrimeFactor(int n)
{
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
            n/=i;
        }
        else
            i++;
    }
}