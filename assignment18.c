#include<stdio.h>
#include<string.h>
int strLen(char[]);
char *strRev(char*);
int strComp(char[],char[]);
char *strUpr(char*);
char *strLwr(char*);
int alphaNumeric(char[]);
int strPalindrome(char[]);
int wordCount(char[]);
// char *strTrim(char*);
char *strWordWise(char*);
void duplicateChar(char[]);
int main()
{
    // printf("\n\n\e[1mQuestion1. Write a function to calculate length of the string.\e[m");
    // char a[50];
    // printf("\nEnter a string under length 50:");
    // fgets(a,50,stdin);
    // printf("The length of the string is %d",strLen(a));

    // printf("\n\n\e[1mQuestion2. Write a function to reverse a string..\e[m");
    // char b[50];
    // printf("\nEnter a string under length 50:");
    // fgets(b,50,stdin);
    // strRev(b);
    // printf("The reverse of the string is %s",b);

    // printf("\n\n\e[1mQuestion3. Write a function to compare two strings..\e[m");
    // char c[50],d[50];
    // printf("\nEnter first string: ");
    // fgets(c,50,stdin);
    // printf("Enter second string: ");
    // fgets(d,50,stdin);
    // if(strComp(c,d))
    //     printf("Strings are equal!!");
    // else
    //     printf("Strings are not equal!!");
    
    // printf("\n\n\e[1mQuestion4. Write a function to transform string into uppercase.\e[m");
    // char e[50];
    // printf("\nEnter a string under 50 characters: ");
    // fgets(e,50,stdin);
    // printf("The Uppercase of the string is %s",strUpr(e));

    // printf("\n\n\e[1mQuestion5. Write a function to transform a string into lowercase.\e[m");
    // char f[50];
    // printf("\nEnter a string under 50 character: ");
    // fgets(f,50,stdin);
    // printf("The Lowercase of the string is %s",strLwr(f));

    // printf("\n\n\e[1mQuestion6. Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least one alphabet and one digit).\e[m");
    // char g[50];
    // printf("\nEnter a string under 50 characters: ");
    // fgets(g,50,stdin);
    // if(alphaNumeric(g))
    //     printf("The string is alphanumeric!!");
    // else
    //     printf("The string is not alphanumeric!!");


    // printf("\n\n\e[1mQuestion7. Write a function to check whether a given string is palindrome or not..\e[m");
    // char h[50];
    // printf("\nEnter a string under 50 characters: ");
    // fgets(h,50,stdin);
    // if(strPalindrome(h))
    //     printf("String is a palindrome!!");
    // else
    //     printf("String is not a palindrome!!");

    // printf("\n\n\e[1mQuestion8. Write a function to count words in a given string.\e[m");
    // char k[150];
    // printf("\nEnter a string:");
    // fgets(k,150,stdin);
    // printf("Count of words in the string are: %d",wordCount(k));


    printf("\n\n\e[1mQuestion9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” ).\e[m");
    char l[150];
    printf("\nEnter a string:");
    fgets(l,150,stdin);
    printf("The resulting string is %s",strWordWise(l));

    // printf("\n\n\e[1mQuestion10. Write a function to find the repeated character in a given string..\e[m");
    // char m[150];
    // printf("\nEnter a string:");
    // fgets(m,150,stdin);
    // duplicateChar(m);

    return 0;
}
//functions
void duplicateChar(char x[])
{
    char temp[150]={0};
    for(int i=0;x[i];i++)
        temp[(int)x[i]]++;
    // strcpy(x,"0");
    // printf("now x is %d",strLen(x));
    for(int i=32;i<123;i++)
        if(temp[i]>1)
            printf("%c ",i);
}
int strLen(char x[])
{
    int i=0;
    for(;x[i]!='\n';i++);
    return i;
}
char *strRev(char *x)
{
    int i=0,a=0,t;
    a=strLen(x);
    for(int i=0;i<a/2;i++)
    {
        t=x[a-1-i];
        x[a-1-i]=x[i];
        x[i]=t;
    }
    return x;
}
int strComp(char x[], char y[])
{
    int xcount=strLen(x),ycount=strLen(y),i=0;
    if(xcount!=ycount)
        return 0;
    else
        for(i=0;i<xcount;i++)
            if(x[i]!=y[i])
                break;
    if(xcount==i)
        return 1;
    else
        return 0;
}
char *strUpr(char *x)
{
    for (int i = 0; x[i]!='\n'; i++)
        if(x[i]>='a' && x[i]<='z')
            x[i]=x[i]-32;
    return x;
}
char *strLwr(char *x)
{
    for (int i = 0; x[i]!='\n'; i++)
        if(x[i]>='A' && x[i]<='Z')
            x[i]=x[i]+32;
    return x;
}
int alphaNumeric(char x[])
{
    int al=0,nu=0;
    for (int i = 0; x[i]!='\n'; i++)
        if((x[i]>='A' && x[i<='Z']) || (x[i]>='a' && x[i<='z']))
            al++;
        else if (x[i]>='0' && x[i<='9'])
            nu++;
        if(al>=1 && nu>=1)
            return 1;
        else
            return 0;
}
int strPalindrome(char x[])
{
    char a[strLen(x)];
    strcpy(a,x);
    return strComp(a,strRev(x));
}
int wordCount(char x[])
{
    int count=0;
    for(int i=1;x[i];i++)
    {
        if((x[i]==' ' && x[i+1]!=' ') || (x[i]!=' ' && x[i+1]=='\n'))
            count++;
    }
    return count;
}
char *strWordWise(char *x)
{
    char a[strLen(x)],temp;int count=0;
    strcpy(a,strRev(x));
    printf("%s",a);
    for(int i=0;a[i];i++)
        if(a[i]!=' ')
            count++;
        else
            for(int j=0;j<=count;j++)
            {
                temp=*(a+j);
                *(a+j)=*(a+temp-1-j);
                *(a+temp-1-j)=temp;
            }
        count=0;
    // printf("%s",a);
    strcpy(x,a);
    return x;
}

