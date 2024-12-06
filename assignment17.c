#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    // printf("\n\n\e[1mQuestion1. Write a program to calculate the length of the string. (without using built-in method).\e[m");
    // char a[50];int z=0;
    // printf("\nEnter string of length less than 50 :");
    // fgets(a,50,stdin);
    // for (z = 0; a[z]!='\n'; z++);
    // printf("The length of the string is:%d",z);

    // printf("\n\n\e[1mQuestion2. Write a program to count the occurrence of a given character in a given string..\e[m");
    // char b1[50],b2; int bCount=0;
    // printf("\nEnter string of length less than 50 :");
    // fgets(b1,50,stdin);
    // printf("Enter a char to find it's frequency in the string:");
    // fflush(stdin);
    // scanf("%c",&b2);
    // fflush(stdin);
    // for (int i = 0; b1[i]; i++)
    //     if(b2==b1[i])
    //         bCount++;
    // printf("The count of occurrence of character in the string is:%d",bCount);

    // printf("\n\n\e[1mQuestion3. Write a program to count vowels in a given string.\e[m");
    // char c1[50],c2[5]={'a','e','i','o','u'};int cCount=0;
    // printf("\nEnter string of length less than 50 :");
    // fflush(stdin);
    // fgets(c1,50,stdin);
    // for (int i = 0; c1[i]; i++)
    //     if(c1[i]==c2[0] || c1[i]==c2[1] || c1[i]==c2[2] || c1[i]==c2[3] || c1[i]==c2[4])
    //         cCount++;
    // printf("The count of vowels in the string is:%d",cCount);

    // printf("\n\n\e[1mQuestion4. Write a program to convert a given string into uppercase.\e[m");
    // char d1[50];
    // printf("\nEnter string of length less than 50 :");
    // fgets(d1,50,stdin);
    // for (int i = 0; d1[i]!='\n'; i++)
    //     if(d1[i]>='a' && d1[i]<='z')
    //         d1[i]=d1[i]-32;
    // printf("The string in uppercase is:%s",d1);

    // printf("\n\n\e[1mQuestion5. Write a program to convert a given string into lowercase.\e[m");
    // char e1[50];
    // printf("\nEnter string of length less than 50 :");
    // fgets(e1,50,stdin);
    // for (int i = 0; e1[i]!='\n'; i++)
    //     if(e1[i]>='A' && e1[i]<='Z')
    //         e1[i]=e1[i]+32;
    // printf("The string in lowercase is:%s",e1);
    
    printf("\n\n\e[1mQuestion6. Write a program to reverse a string..\e[m");
    char g[50],temp;int y=0;
    printf("\nEnter string of length less than 50 :");
    fgets(g,50,stdin);
    for (y = 0; g[y]!='\n'; y++);
    for(int j=0;j<y/2;j++)
    {
        // printf("%c %c",g[j],g[y-1-j]);
        temp=g[j];
        g[j]=g[y-1-j];
        g[y-1-j]=temp;
    }
    printf("reverse %s",g);

    // printf("\n\n\e[1mQuestion7. Write a program in C to count the total number of alphabets, digits and special characters in a string..\e[m");
    // char h1[50];int hCountAlphabet=0,hCountDigits=0,hCountSpecialCharacter=0;
    // printf("\nEnter string of length less than 50 :");
    // fgets(h1,50,stdin);
    // for (int i = 0; h1[i]; i++)
    // {
    //     if((h1[i]>='A' && h1[i]<='Z') || (h1[i]>='a' && h1[i]<='z'))
    //         hCountAlphabet++;
    //     else if (h1[i]>='0' && h1[i]<='9')
    //         hCountDigits++;
    //     else if ((h1[i]>='!' && h1[i]<='/') || (h1[i]>=':' && h1[i]<='@') || (h1[i]>='[' && h1[i]<='`') || (h1[i]>='{' && h1[i]<='~'))
    //         hCountSpecialCharacter++;
    // }
    // printf("The total number of alphabets, digits and special characters in a string is:%d,%d and %d",hCountAlphabet,hCountDigits,hCountSpecialCharacter);

    // printf("\n\n\e[1mQuestion8. Write a program in C to copy one string to another string..\e[m");
    // char j1[50],j2[50];
    // printf("\nEnter string of length less than 50 :");
    // fgets(j1,50,stdin);
    // for(int i=0;j1[i]!='\n';i++)
    //     j2[i] = j1[i];
    // printf("New String is:%s",j2);

    // printf("\n\n\e[1mQuestion9. Write a C program to sort a string array in ascending order..\e[m");
    // char k1[50];int kCount;
    // printf("\nEnter string of length less than 50 :");
    // fgets(k1,50,stdin);
    // for (kCount = 0; k1[kCount]!='\n'; kCount++);
    // for (int i = 0; i<kCount; i++)
    // {
    //     for(int j = 0; j<kCount-i-1; j++)
    //     {
    //         if(k1[j]>k1[j+1])
    //         {
    //             k1[j]=k1[j]+k1[j+1];
    //             k1[j+1]=k1[j]-k1[j+1];
    //             k1[j]=k1[j]-k1[j+1];
    //         }
    //     }
    // }
    // printf("Sorted string is %s",k1);
    
    // printf("\n\n\e[1mQuestion10. Write a program in C to Find the Frequency of Characters..\e[m");
    // char l[50],charFrequency[150]={0};
    // printf("\nEnter a string of length under 50 characters:");
    // fgets(l,50,stdin);
    // for(int i=0;l[i];i++)
    //     charFrequency[(int)l[i]]+=1;
    // for(int j=65;j<123;j++)
    //     if(charFrequency[j]>0)
    //         printf("\nThe frequency of '%c' is %d in the string",j,charFrequency[j]);
    return 0;
}