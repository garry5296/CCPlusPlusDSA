#include<stdio.h>
#include<string.h>
void strSort(char[]);
void strRev(char[]);
int facto(int);
int validPass(char[]);
int main()
{
    printf("\n\n\e[1mQuestion1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user..\e[m");
    char a[5][100];int count=0;
    printf("\nEnter five strings: ");
    for(int i=0;i<5;i++)
        fgets(a[i],100,stdin);
    for(int i=0;i<5;i++)
    {
        a[i][strlen(a[i])-1]='\0';
        count=0;
        for(int j=0;a[i][j]!='\0';j++)
            if(a[i][j]=='a' || a[i][j]=='e' || a[i][j]=='i' || a[i][j]=='o' || a[i][j]=='u' || a[i][j]=='A' || a[i][j]=='E' || a[i][j]=='I' || a[i][j]=='O' || a[i][j]=='U')
                count++;
        printf("%s has %d vowels\n",a[i],count);
    }

    printf("\n\n\e[1mQuestion2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user..\e[m");
    char b[10][50], t[50], flag='f';
    printf("\nEnter 10 city names: ");
    for(int i=0;i<10;i++)
        gets(b[i]);
    for(int i=0;i<10;i++)
        for(int j=0;j<10-1;j++)
            if(strcmp(b[j],b[j+1])>0)
            {
                strcpy(t,b[j]);
                strcpy(b[j],b[j+1]);
                strcpy(b[j+1],t);
            }
    printf("The strings in sorted order are:\n");
    for(int i=0;i<10;i++)
        printf("%s\n",b[i]);

    printf("\n\n\e[1mQuestion3. Write a program to read and display a 2D array of strings in C language..\e[m");
    char c[5][20];
    // {{"Brazil"},{"Russia"},{"India"},("China"),{"South Africa"}}
    printf("\nEnter 5 strings:");
    for(int i=0;i<5;i++)
        fgets(c[i],20,stdin);
    for(int i=0;i<5;i++)
        printf("%s",c[i]);
    
    printf("\n\n\e[1mQuestion4. Write a program to search a string in the list of strings..\e[m");
    char d[5][20]={"Brazil","Russia","India","China","South Africa"}, dcandidate[20],dflag='f';
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

    printf("\n\n\e[1mQuestion5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out..\e[m");
    char emailAddresses[10][35] = {
        "user@example.com",
        "test.email@gmail.com",
        "invalid_email",
        "another.invalid.email",
        "name@domain",
        "valid_email@domain.org",
        "@missingusername.com",
        "missingatsymbol.com",
        "invalid@domain@extra.com",
        "user_with_special@chars!.com"
    },eflag='f';
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(!strchr(emailAddresses[i],'@'))
            printf("%s\n",emailAddresses[i]);
    }

    printf("\n\n\e[1mQuestion6. Write a program to print the strings which are palindrome in the list of strings..\e[m");
    char words[10][20] = {"radar", "level", "hello", "world", "madam", "noon", "example", "civic", "rotor", "test"},temp[20];
    printf("\n");
    for(int i=0;i<10;i++)
    {
        strcpy(temp,words[i]);
        strRev(words[i]);
        if(strcmp(words[i],temp)==0)
            printf("%s\n",words[i]);
    }

    //not working//
    printf("\n\n\e[1mQuestion7. From the list of IP addresses, check whether all ip addresses are valid..\e[m");
    char ipAddresses[10][20] = {
        "192.168.1.1",
        "255.255.255.255",
        "0.0.0.0",
        "127.0.0.1",
        "300.168.1.1",
        "192.168.1",
        "192.168.1.256",
        "192.168..1",
        "192.168.1.-1",
        "192.168.1.1.1"
    };
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(strcmp("255.255.255.255",ipAddresses[i])>=0)
            printf("%s is valid!!\n",ipAddresses[i]);
        else
            printf("%s is not valid!!\n",ipAddresses[i]);
    }

    printf("\n\n\e[1mQuestion8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words. (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 ).\e[m");
    
    printf("\n\n\e[1mQuestion9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed.\e[m");
    char loggedusers[10][20]={
        "harish.gupta",
        "navalkataria",
        "parmodrana",
        "sunielshetty",
        "sammershinde",
        "kumarverma",
        "hasinabegam",
        "rananaidu",
        "gunjanbansal",
        "partapsingh"
    },input[30],iflag='f';int factnumber=0;
    printf("\nEnter a username: ");
    fgets(input,30,stdin);
    input[strlen(input)-1]='\0';
    for(int i=0;i<10;i++)
    {
        if(strcmp(loggedusers[i],input)==0)
        {
            iflag='t';
            printf("Welcome %s,\n\nEnter a number to calculate factorial: ",loggedusers[i]);
            scanf("%d",&factnumber);
            printf("The factorial is %d!!",facto(factnumber));
            break;
        }
    }
    if(iflag=='f')
        printf("\033[0;31mError: user not authenticated!!\033[0m\n");

    printf("\n\n\e[1mQuestion10. Create an authentication system. It should be menu driven..\e[m");
    int l,number=0;char lEmail[10][40],luser[10][40],lpass[10][40],lrepass[20],secAns[10][40],secure[40],checkpass[40],password[40],username[40],email[40],askLogin;
    mainmenu:
    printf("\nWelcome to \e[1mMySirG Education Services\e[m\n\nChoose from below option:\n1. Signup!!\n2. Login\n3. Forgot Password?\n4. Exit");
    scanf("%d",&l);
    while (getchar() != '\n');
    switch (l)
    {
    case 1:
        printf("\n-----------------SignUp Module-----------------");
    label1:
        printf("\n\e[1mEnter a valid email address: \e[m");
        fgets(lEmail[number],40,stdin);
        if(!strstr(lEmail[number],"@"))
        {
            printf("\n\t\t\033[0;31mError: Not a valid email address!!\033[0m");
            goto label1;
        }
    label:
        printf("\n\e[1mCreate a username: \e[m");
        fgets(luser[number],40,stdin);
    
    label2:
        printf("\n\e[1mCreate a password:\e[m\n-(atleast 8 character)\n-(atleast 1 digit)\n-(atleast 1 uppercase letter)\n-(atleast 1 lowercase letter)\n-(atleast 1 speacial character)");
        fgets(checkpass,40,stdin);
        if(strlen(checkpass)>8)
        {
            if(!validPass(checkpass))
            {
                printf("\n\t\tSecurity caution: Not a strong password!!");
                goto label2;
            }
        }else{
            printf("\n\t\tSecurity caution: Not a strong password!!");
            goto label2;
        }

    label3:
        printf("\nRe-enter password: ");
        fgets(lrepass,20,stdin);
        if(!strcmp(lrepass,checkpass))
        {
            strcpy(lpass[number],lrepass);
        }else{
            printf("Password didn't matched!!");
            goto label3;
        }

        printf("\nSecurity question:\nWhat car brand you like the most?\n(case sensitive)");
        fgets(secAns[number],40,stdin);

        printf("\n\t\tAccount created successfully!!");
        number++;

        printf("\nDo you want to login? - Press 'Y/y' to Login.\nPress 'E/e' to exit.\nPress 'm/M' for Main menu.\n");
        scanf("%c",&askLogin);
        while (getchar() != '\n');

        if(askLogin == 'Y' || askLogin == 'y')
            goto acctologin;
        else if (askLogin == 'm' || askLogin == 'M')
            goto mainmenu;
        else if(askLogin == 'e' || askLogin == 'E')
            break;
        else
            goto askexit;


    case 2:
        acctologin:
        if(number)
        {
            printf("\n-----------------Login Module-----------------");
            int i=0;char uflag='f';
        loginlabel:
            printf("\nEnter username: ");
            fgets(username,40,stdin);
            for(i=0;i<10;i++)
                if(!strcmp(username,luser[i]))
                {
                    uflag='t';
                    break;
                }
            if(uflag=='f')
            {
                printf("\nno account found with username!!\n\n\t\tRestarting Login...");
                goto loginlabel;
            }

            printf("\nEnter password: ");
        passlabel:
            fgets(password,40,stdin);
            if(strcmp(lpass[i],password))
            {
                printf("\nError: Incorrect password!!\n\nRe-enter password:");
                goto passlabel;
            }else{
                printf("\nWelcome %s",luser[i]);
            }
        }
        else{
            printf("\e[1mInformation:\e[m No user account!!\nPlease create one to login");
        }
        
        askexit:
        printf("\nPress 'e/E' to Exit\nPress 'm/M' for Main menu?");
        scanf("%c",&askLogin);
        while (getchar() != '\n');

        if(askLogin == 'e' || askLogin == 'E')
            break;
        else if (askLogin == 'm' || askLogin == 'M')
            goto mainmenu;
        else
            goto askexit;

    case 3:
        if(number)
        {
            printf("\n-----------------Reset Module-----------------");
            char mflag='f';int j;
        passreset:
            printf("Enter email: ");
            fgets(email,40,stdin);
            for(j=0;j<10;j++)
                if(!strcmp(lEmail[j],email))
                {
                    mflag='t';
                    printf("Account found!!\n\nHello %s\n",luser[j]);
                    break;
                }
            if(mflag=='f')
            {
                printf("\nno account found with this email!!\n\nRestarting Reset...\n");
                goto passreset;
            }

        passsecurity:
            printf("\nSecurity question:\nWhat car brand you like the most?\n(case sensitive): ");
            fgets(secure,40,stdin);
            if(strcmp(secAns[j],secure))
            {
                printf("\nsecurity answer is incorrect!!\n");
                goto passsecurity;
            }
        
        passrenter:
            printf("\nChoose a new password\n-(atleast 8 character)\n-(atleast 1 digit)\n-(atleast 1 uppercase letter)\n-(atleast 1 lowercase letter)\n-(atleast 1 speacial character)");
            fgets(password,40,stdin);
            if(strlen(checkpass)>8)
            {
                if(!validPass(password))
                {
                    printf("\n\t\tSecurity caution: Not a strong password!!");
                    goto passrenter;
                }else if(validPass(password)){
                    if(!strcmp(password,lpass[j]))
                    {
                        printf("\nThis is your old password, Press 'y/Y' to restore or 'n/N' to create new.");
                        scanf("%c",&askLogin);
                        while (getchar() != '\n');
                        if(askLogin == 'n' || askLogin == 'N')
                            goto passrenter;
                        else if (askLogin == 'y' || askLogin == 'Y')
                            goto reenterpass;
                    }
                }
            }
        reenterpass:
            printf("\nRe-enter password: ");
            fgets(lrepass,40,stdin);
            if(!strcmp(password,lrepass))
            {
                strcpy(lpass[j],lrepass);
                printf("\nPassword reset successfull!!");
            }
            else
            {
                printf("Password mismatch");
                goto passrenter;
            }
        }else{
            printf("No user account!!\nPlease create one");
            goto label1;
        }
        printf("\nPress 'e/E' to Exit\nPress 'm/M' for Main menu?");
        scanf("%c",&askLogin);
        while (getchar() != '\n');

        if(askLogin == 'e' || askLogin == 'E')
            break;
        else if (askLogin == 'm' || askLogin == 'M')
            goto mainmenu;
        else
            goto askexit;

    default:
        break;
    }

    return 0;
}
//functions
int facto(int a)
{
    if(a==0)
        return 1;
    return a*facto(a-1);
}
void strRev(char x[])
{
    int len=strlen(x);char temp;
    for(int i=0;i<len/2;i++)
    {
        temp=x[i];
        x[i]=x[len-1-i];
        x[len-1-i]=temp;
    }
}
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
int validPass(char x[])
{
    int l=0,u=0,n=0,s=0;
    for(int i=0;x[i];i++)
    {
        if(x[i]>='a' && x[i]<='z')
            l++;
        else if(x[i]>='A' && x[i]<='Z')
            u++;
        else if(x[i]>='0' && x[i]<='9')
            n++;
        else if((x[i]>='!' && x[i]<='/') || x[i]=='@')
            s++;
    }
    if(l & u & n & s)
        return 1;
    else
        return 0;
}
