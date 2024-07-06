#include<stdio.h>
int main()
{
    printf("\e[1mQuestion1. Write a program to find the Nth term of the Fibonnaci series.\e[m");
    long int num1=0,num2=1,tempsum=0;int i=2,n;
    printf("\nEnter a number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d(st/th) term of fibonnaci series is %ld",n,num1);
        i=n;
    }
    else
    {
        while (i < n)
        {
            tempsum=num1+num2;
            num1=num2;
            num2=tempsum;
            i++;
        }
        printf("%d(nd/th) term of fibonnaci series is %ld",n,num2);
    }

    
    printf("\n\n\e[1mQuestion2. Write a program to print first N terms of Fibonacci series.\e[m");
    int seven_num1=0,seven_num2=1,newnum,a,j=2;
    printf("\nEnter a number to which you wan to print fibonacci series:");
    scanf("%d",&a);
    if(a==1)
    {
        printf("%d ",seven_num1);
    }
    else
    {
        printf("%d ",seven_num1);
        printf("%d ",seven_num2);
        while(j < a)
        {
            newnum=seven_num1+seven_num2;
            seven_num1=seven_num2;
            seven_num2=newnum;
            printf("%d ",newnum);
            j++;
        }
    }


    printf("\n\n\e[1mQuestion3. Write a program to check whether a given number is there in the Fibonacci series or not.\e[m");
    int seventhreenum1=0,seventhreenum2=1,eventhreenewnum,b;
    printf("\nEnter a number:");
    scanf("%d",&b);
    while(seventhreenum1<=b)
    {
        if (seventhreenum1<b)
        {
            eventhreenewnum=seventhreenum1+seventhreenum2;
            seventhreenum1=seventhreenum2;
            seventhreenum2=eventhreenewnum;
        }else{
            break;
        };
    };
    if (seventhreenum1==b)
    {
        printf("%d is present in the series",b);
    }else{
        printf("%d is not present in fibonaci series.",b);
    }


    printf("\n\n\e[1mQuestion4. Write a program to calculate HCF of two numbers.\e[m");
    int sevenfournume1,sevenfournume2;
    printf("\nEnter two number:");
    scanf("%d%d",&sevenfournume1,&sevenfournume2);
    if(sevenfournume2!=0 && sevenfournume1!=0)
    {
        if(sevenfournume2>sevenfournume1)
        {
            sevenfournume1=sevenfournume1+sevenfournume2;
            sevenfournume2=sevenfournume1-sevenfournume2;
            sevenfournume1=sevenfournume1-sevenfournume2;
        }
        while (sevenfournume1%sevenfournume2!=0)
        {
            sevenfournume1=sevenfournume1%sevenfournume2+sevenfournume2;
            sevenfournume2=sevenfournume1-sevenfournume2;
            sevenfournume1=sevenfournume1-sevenfournume2;
        }
        printf("The HCF of two numbers is %d",sevenfournume2);
    }
    else{
        if(sevenfournume2>sevenfournume1)
        {
            printf("The HCF of two numbers is %d",sevenfournume2);
        }
        else{
            printf("The HCF of two numbers is %d",sevenfournume1);
        }
    }

    printf("\n\n\e[1mQuestion5. Write a program to check whether two given numbers are co-prime numbers or not.\e[m");
    int sevenfournume3,sevenfournume4;
    printf("\nEnter two number:");
    scanf("%d%d",&sevenfournume3,&sevenfournume4);
    if(sevenfournume4!=0 && sevenfournume1!=0)
    {
        if(sevenfournume4>sevenfournume3)
        {
            sevenfournume3=sevenfournume3+sevenfournume4;
            sevenfournume4=sevenfournume3-sevenfournume4;
            sevenfournume3=sevenfournume3-sevenfournume4;
        }
        while (sevenfournume3%sevenfournume4!=0)
        {
            sevenfournume3=sevenfournume3%sevenfournume4+sevenfournume4;
            sevenfournume4=sevenfournume3-sevenfournume4;
            sevenfournume3=sevenfournume3-sevenfournume4;
        }
        if (sevenfournume4==1)
        {
            printf("Given numbers are co-prime numbers");
        }else{
            printf("Given numbers are not co-prime numbers");
        }
    }

    printf("\n\n\e[1mQuestion6. Write a program to print all Prime numbers under 100.\e[m");
    printf("\n");
    int sevensix=2,prime=0,checking=0,d;
    while (sevensix<100)
    {
        for (d = 2; d <= sevensix/2; d++)
        {
            if (sevensix%d==0)
            {
                checking=1;
                break; 
            };
        }
        if (checking!=1)
        {
            printf("%d ",sevensix);
        }
        sevensix++;
        checking=0;
    };

    printf("\n\n\e[1mQuestion7. Write a program to print all Prime numbers between two given numbers.\e[m");
    int primemin,primemax,prime1=0;
    printf("\nEnter starting and ending point for prime number generation:");
    scanf("%d%d",&primemin,&primemax);
    primemin++;
    if (primemin<primemax)
    {
        while (primemin<primemax)
        {
            for (int e = 2; e <= primemin/2; e++)
            {
                if (primemin%e==0)
                {
                    prime1=1;
                    break; 
                };
            };
            if (prime1!=1)
            {
                printf("%d ",primemin);
            }
            primemin++;
            prime1=0;
        };
    }else{
        printf("There is no prime number between them.");
    };


    printf("\n\n\e[1mQuestion8. Write a program to find next Prime number of a given number.\e[m");
    int eightseven,prime2=0,checkeer=0;
    printf("\nEnter a number:");
    scanf("%d",&eightseven);
    if (eightseven==0 || eightseven==1)
    {
        eightseven=2;
        printf("Next Prime number is %d",eightseven);
    }
    else{
        eightseven++;
        while (prime2!=1)
        {
            for (int g = 2; g <= eightseven/2; g++)
            {
                if(eightseven%g==0)
                {
                    checkeer=1;
                    break;
                }
            };
            if (checkeer!=1)
            {
                printf("%d",eightseven);
                prime2=1;
            }
            eightseven++;
            checkeer=0;
        };
    }
    

    printf("\n\n\e[1mQuestion9. Write a program to check whether a given number is an Armstrong number or not.\e[m");
    int h,count1=0,armstrong=0,digi=0,sum=1,original,originalcount;
    printf("\nEnter a number:");
    scanf("%d",&h);
    original=h;
    while(h!=0)
    {
        h/=10;
        count1++;
    }
    h=original;
    originalcount=count1;
    while(h!=0)
    {
        digi=h%10;
        h/=10;
        count1=originalcount;
        while (count1!=0)
        {
            sum*=digi;
            count1--;
        };
        armstrong+=sum;
        sum=1;
    };
    if (armstrong==original)
    {
        printf("The number is Armstrong.");
    }else{
        printf("The number is not Armstrong.");
    }
    

    printf("\n\n\e[1mQuestion10. Write a program to print all Armstrong numbers under 1000.\e[m");
    printf("\n");
    int armstrong1=0,digi1,sum1=1,count2=0,tempray,key;
    for(int l=11;l<1000;l++)
    {
        tempray=l;
        while(l!=0)
        {
            l/=10;
            count2++;
        }
        l=tempray;
        key=count2;
        while (l!=0)
        {
            digi1=l%10;
            l/=10;
            count2=key;
            while (count2!=0)
            {
                sum1*=digi1;
                count2--;
            }
            armstrong1+=sum1;
            sum1=1;
        }
        l=tempray;
        if (armstrong1==l)
        {
            printf("%d ",armstrong1);
        }
        armstrong1=0;
    }

    return 0;
}