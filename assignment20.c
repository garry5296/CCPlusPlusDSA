#include<stdio.h>
#include<string.h>
void swap(int*,int*);
void swapStr(char*,char*);
void sortInt(int*,int);
int maX(int*,int*);
int main()
{
    // printf("\e[1mQuestion1. Write a function to swap values of two in variables of calling function.\e[m");
    // int a1,a2;
    // printf("\nEnter two numbers: ");
    // scanf("%d%d",&a1,&a2);
    // while (getchar() != '\n');//fflush(stdin) not working
    // swap(&a1,&a2);
    // printf("After swaping, first variable is %d and second is %d now.",a1,a2);

    // printf("\n\n\e[1mQuestion2. Write a function to swap strings of two char arrays of calling functions.\e[m");
    // char b1[50],b2[50];
    // printf("\nEnter first string: ");
    // fgets(b1,50,stdin);
    // printf("\nEnter second string: ");
    // fgets(b2,50,stdin);
    // swapStr(b1,b2);
    // printf("After swaping, first string is %s and\nsecond is %s",b1,b2);

    // printf("\n\n\e[1mQuestion3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ].\e[m");
    // int c[10];
    // printf("\nEnter 10 numbers: ");
    // for(int i=0;i<10;i++)
    //     scanf("%d",&c[i]);
    // sortInt(c,10);
    // for(int i=0;i<10;i++)
    //     printf("%d ",c[i]);

    // printf("\n\n\e[1mQuestion4. Write a program in C to demonstrate how to handle the pointers in the program..\e[m");
    // int d[5]={10,5,7,90,1},*p4,**q4,***r4;
    // p4=&d[0];
    // q4=&p4;
    // r4=&q4;
    // printf("\n%p %p %p %p %p\n",d,d+1,d+2,d+3,d+4);
    // printf("%d %d %d %d\n",*d,*(d+1),*(d+2),*(d+3));
    // printf("%p %p %p %p\n",d,p4,q4,r4);
    // printf("%d %d %d %d\n",*d,*p4,**q4,***r4);

    printf("\n\n\e[1mQuestion5. Write a program to find the maximum number between two numbers using a pointer.\e[m");
    int e,f;
    printf("\nEnter two number: ");
    scanf("%d%d",&e,&f);
    while(getchar() != '\n');
    printf("Maximum number b/w two numbers is %d",maX(&e,&f));

    printf("\n\n\e[1mQuestion6. Write a program to calculate the length of the string using a pointer.\e[m");
    char g[50],*k;int p;
    printf("\nEnter a string under 50 characters: ");
    fgets(g,50,stdin);
    k=g;
    for (p = 0; *(k+p); p++);
    printf("Length of string is %d",p-1);

    printf("\n\n\e[1mQuestion7. Write a program to count the number of vowels and consonants in a string using a pointer..\e[m");
    char h[100],*l;int q,countV=0,countC=0;
    printf("\nEnter a string under 50 characters: ");
    fgets(h,100,stdin);
    l=h;
    for (q = 0; *(l+q); q++)
    {
        if(*(l+q)=='a' || *(l+q)=='e' || *(l+q)=='i' || *(l+q)=='o' || *(l+q)=='u' || *(l+q)=='A' || *(l+q)=='E' || *(l+q)=='I' || *(l+q)=='O' || *(l+q)=='U')
            countV++;
        else if ((*(l+q)>='b' && *(l+q)<='d') || (*(l+q)>='f' && *(l+q)<='h') || (*(l+q)>='j' && *(l+q)<='n') || (*(l+q)>='p' && *(l+q)<='t') || (*(l+q)>='v' && *(l+q)<='z') || (*(l+q)>='B' && *(l+q)<='D') || (*(l+q)>='F' && *(l+q)<='H') || (*(l+q)>='J' && *(l+q)<='N') || (*(l+q)>='P' && *(l+q)<='T') || (*(l+q)>='V' && *(l+q)<='Z'))
            countC++;
    }
    printf("Total number of vowels in string are %d\nTotal number of consonants in string are %d",countV,countC);

    printf("\n\n\e[1mQuestion8. Write a program to compute the sum of all elements in an array using pointers..\e[m");
    int a8[10],*y,sum=0;
    printf("\nEnter 10 numbers: ");
    for(int z=0;z<10;z++)
        scanf("%d",&a8[z]);
    y=a8;
    for(int z=0;z<10;z++)
        sum+=*(y+z);
    printf("Sum of all elements of an array is %d",sum);


    printf("\n\n\e[1mQuestion9. Write a program to print the elements of an array in reverse order..\e[m");
    int a9[10]={3,4,1,8,6,4,3,6,7,8},*p9;
    p9=a9;
    for(int z=9;z>=0;z--)
        printf("%d ",*(p9+z));

    printf("\n\n\e[1mQuestion10. Write a program to print a string in reverse using a pointer.\e[m");
    char a10[70]="kcals emoceb ot GNAAF rof mia ruoy tel ton od",*p10;
    p10=a10;
    printf("\n");
    for(int z=45;z>=0;z--)
        printf("%c",*(p10+z));
    return 0;
}
//functions
int maX(int *x, int *y)
{
    if(*x>*y)
        return *x;
    else
        return *y;
}
void sortInt(int *x,int y)
{
    int temp;
    for(int i=0;i<y;i++)
        for(int j=0;j<y-1-i;j++)
            if(*(x+j)>*(x+1+j))
            {
                temp=*(x+j);
                *(x+j)=*(x+1+j);
                *(x+1+j)=temp;
            }
}
void swap(int *x1,int *x2)
{
    int t;
    t=*x1;
    *x1=*x2;
    *x2=t;
}
void swapStr(char *y1,char *y2)
{
    char t;
    for(int i=0;i<10;i++)
    {
        t=y1[i];
        y1[i]=y2[i];
        y2[i]=t;        
    }
}