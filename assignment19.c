#include<stdio.h>
#include<string.h>
void strSort(char[]);
int main()
{
    // printf("\n\n\e[1mQuestion1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user..\e[m");
    // char a[5][100];int count=0;
    // printf("\nEnter five strings: ");
    // for(int i=0;i<5;i++)
    //     fgets(a[i],100,stdin);
    // for(int i=0;i<5;i++)
    // {
    //     a[i][strlen(a[i])-1]='\0';
    //     count=0;
    //     for(int j=0;a[i][j]!='\0';j++)
    //         if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u')
    //             count++;
    //     printf("%s has %d vowels\n",a[i],count);
    // }

    // printf("\n\n\e[1mQuestion2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user..\e[m");
    // char b[10][50], t[50], flag='f';
    // printf("\nEnter 10 city names: ");
    // for(int i=0;i<10;i++)
    //     gets(b[i]);
    // for(int i=0;i<10;i++)
    //     for(int j=0;j<10-1;j++)
    //         if(strcmp(b[j],b[j+1])>0)
    //         {
    //             strcpy(t,b[j]);
    //             strcpy(b[j],b[j+1]);
    //             strcpy(b[j+1],t);
    //         }
    // printf("The strings in sorted order are:\n");
    // for(int i=0;i<10;i++)
    //     printf("%s\n",b[i]);

    // printf("\n\n\e[1mQuestion3. Write a program to read and display a 2D array of strings in C language..\e[m");
    // char c[5][20];
    // // {{"Brazil"},{"Russia"},{"India"},("China"),{"South Africa"}}
    // printf("\nEnter 5 strings:");
    // for(int i=0;i<5;i++)
    //     fgets(c[i],20,stdin);
    // for(int i=0;i<5;i++)
    //     printf("%s",c[i]);
    
    printf("\n\n\e[1mQuestion4. Write a program to search a string in the list of strings..\e[m");
    char d[5][20]={{"Brazil"},{"Russia"},{"India"},("China"),{"South Africa"}}, dcandidate[20],dflag='f';
    printf("\nEnter a string to search: ");
    fgets(dcandidate,20,stdin);
    dcandidate[strlen(dcandidate)-1]='\0';
    for(int i=0;i<5;i++)
        if(strcmp(dcandidate,d[i])==0)
        {
            printf("String found!!");
            dflag='t';
            break;
        }
    if(dflag=='f')
        printf("String not found!!");





    // printf("\n\n\e[1mQuestion5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out..\e[m");
    // printf("\n\n\e[1mQuestion6. Write a program to print the strings which are palindrome in the list of strings..\e[m");
    // printf("\n\n\e[1mQuestion7. From the list of IP addresses, check whether all ip addresses are valid..\e[m");
    // printf("\n\n\e[1mQuestion8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words. (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 ).\e[m");
    // printf("\n\n\e[1mQuestion9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed.\e[m");
    // printf("\n\n\e[1mQuestion10. Create an authentication system. It should be menu driven..\e[m");

    return 0;
}
//functions
void strSort(char x[])
{
    int len=strlen(x),temp=0;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}