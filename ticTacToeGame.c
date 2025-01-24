#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void smartComputer(char[]);
void evilComputer(char[]);
void display(char[]);
int match(char[]);
void compInput(char[],int,int[]);
void evilCompInput(char x[],int a,int b[]);
void player(char[]);
int ask(char[]);
int tC=0;
int main()
{
    int input;char a[10]={'0','1','2','3','4','5','6','7','8','9'};
    begin:
    printf("Enter your choice\n1. Want to play with Smart Computer\n2. Want to play with Evil Computer\n3. Want to play with player\n4. Exit\n\n");
    scanf("%d",&input);
    system("clear");

    switch(input)
    {
        case 1:
            for(int i=0;i<=9;i++)
                printf("%c ",a[i]);
            smartComputer(a);
            if(ask(a))
                goto begin;
            break;

        case 2:
            evilComputer(a);
            if(ask(a))
                goto begin;
            break;

        case 3:
            player(a);
            if(ask(a))
                goto begin;
            break;

        default:
            break;
    }

    return 0;
}
//functions
int ask(char a[])
{
    char x;
    printf("Do you want to play again ? - enter Y/y for yes or press any other key to exit.");
    while(getchar()!='\n');
    scanf("%c",&x);
    if(x=='y' || x=='Y')
    {
        strcpy(a,"0123456789");
        tC=0;
        return 1;
    }
    else
        return 0;
}
void player(char x[])
{
    int flag=0,a,b[10]={0};
    do
    {
        if(tC<9)
        {
            for(int i=1;i<=2;i++)
            {
                display(x);
                printf("Player -'%d' turn, please enter position: ",i);
                scanf("%d",&a);
                if(b[a]==0 && a>=1 && a<=9)
                {
                    b[a]=1;
                    tC++;
                    if(i==1)
                        x[a]='x';
                    else
                        x[a]='o';

                    flag = match(x);

                    if(flag)
                    {
                        system("clear");
                        display(x);
                        printf("Player '%d' - You won !!\n\n",i);
                        printf("###########################################################################\n\n");
                        break;
                    }
                }
                else
                {
                    system("clear");
                    printf("\033[0;31mInvalid position!!\033[0m\n\n");
                }
                system("clear");
            }
        }
        else
        {
            system("clear");
            display(x);
            printf("Game Draw !!\n\n");
            printf("###########################################################################\n\n");
            break;
        }
    }
    while(!flag);
}
void evilComputer(char x[])
{
    int flag=0,a,b[10]={0};
    do
    {
        display(x);
        printf("Your turn, please enter position: ");
                scanf("%d",&a);
        if(b[a]==0 && a>=1 && a<=9)
        {
            b[a]=1;
            tC++;
            x[a]='x';

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                printf("You won !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }

            evilCompInput(x,a,b);

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                printf("You lose !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }


            if(tC==9)
            {
                system("clear");
                display(x);
                printf("Game Draw !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }

            system("clear");
        }
        else
        {
            system("clear");
            printf("\033[0;31mInvalid position!!\033[0m");
        }
    }
    while(!flag);
}
void smartComputer(char x[])
{
    int flag=0,a,b[10]={0};
    do
    {
        display(x);
        printf("Your turn, please enter position: ");
        scanf("%d",&a);
        if(b[a]==0 && a>=1 && a<=9)
        {
            b[a]=1;
            tC++;
            x[a]='x';

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                printf("You won !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }

            compInput(x,a,b);

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                printf("You lose !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }


            if(tC==9)
            {
                system("clear");
                display(x);
                printf("Game Draw !!\n\n");
                printf("###########################################################################\n\n");
                break;
            }

            system("clear");
        }
        else
        {
            system("clear");
            printf("\033[0;31mInvalid position!!\033[0m\n\n");
        }
    }
    while(!flag);
}
void evilCompInput(char x[],int a,int b[])
{
    if(b[7]!=1 && x[1]=='o' && x[4]=='o')
        {x[7]='o';b[7]=1;tC++;}
    if(b[8]!=1 && x[2]=='o' && x[5]=='o')
        {x[8]='o';b[8]=1;tC++;}
    if(b[9]!=1 && x[3]=='o' && x[6]=='o')
        {x[9]='o';b[9]=1;tC++;}
    if(b[1]!=1 && x[4]=='o' && x[7]=='o')
        {x[1]='o';b[1]=1;tC++;}
    if(b[2]!=1 && x[5]=='o' && x[8]=='o')
        {x[2]='o';b[2]=1;tC++;}
    if(b[3]!=1 && x[6]=='o' && x[9]=='o')
        {x[3]='o';b[3]=1;tC++;}

    if(b[3]!=1 && x[1]=='o' && x[2]=='o')
        {x[3]='o';b[3]=1;tC++;}
    if(b[6]!=1 && x[4]=='o' && x[5]=='o')
        {x[6]='o';b[6]=1;tC++;}
    if(b[9]!=1 && x[7]=='o' && x[8]=='o')
        {x[9]='o';b[9]=1;tC++;}
    if(b[1]!=1 && x[2]=='o' && x[3]=='o')
        {x[1]='o';b[1]=1;tC++;}
    if(b[4]!=1 && x[5]=='o' && x[6]=='o')
        {x[4]='o';b[4]=1;tC++;}
    if(b[7]!=1 && x[8]=='o' && x[9]=='o')
        {x[7]='o';b[7]=1;tC++;}

    if(b[9]!=1 && x[1]=='o' && x[5]=='o')
        {x[9]='o';b[5]=1;tC++;}
    if(b[1]!=1 && x[5]=='o' && x[9]=='o')
        {x[1]='o';b[1]=1;tC++;}
    if(b[3]!=1 && x[7]=='o' && x[5]=='o')
        {x[3]='o';b[3]=1;tC++;}
    if(b[7]!=1 && x[5]=='o' && x[3]=='o')
        {x[7]='o';b[7]=1;tC++;}

    if(b[2]!=1 && x[1]=='o' && x[3]=='o')
        {x[2]='o';b[2]=1;tC++;}
    if(b[5]!=1 && x[4]=='o' && x[6]=='o')
        {x[5]='o';b[5]=1;tC++;}
    if(b[8]!=1 && x[7]=='o' && x[9]=='o')
        {x[8]='o';b[8]=1;tC++;}
    if(b[4]!=1 && x[1]=='o' && x[7]=='o')
        {x[4]='o';b[4]=1;tC++;}
    if(b[5]!=1 && x[2]=='o' && x[8]=='o')
        {x[5]='o';b[5]=1;tC++;}
    if(b[6]!=1 && x[3]=='o' && x[9]=='o')
        {x[6]='o';b[6]=1;tC++;}
    if(b[5]!=1 && x[1]=='o' && x[9]=='o')
        {x[5]='o';b[5]=1;tC++;}
    if(b[5]!=1 && x[3]=='o' && x[7]=='o')
        {x[5]='o';b[5]=1;tC++;}

    if(b[7]!=1 && x[1]=='x' && x[4]=='x')
        {x[7]='o';b[7]=1;tC++;}
    if(b[8]!=1 && x[2]=='x' && x[5]=='x')
        {x[8]='o';b[8]=1;tC++;}
    if(b[9]!=1 && x[3]=='x' && x[6]=='x')
        {x[9]='o';b[9]=1;tC++;}
    if(b[1]!=1 && x[4]=='x' && x[7]=='x')
        {x[1]='o';b[1]=1;tC++;}
    if(b[2]!=1 && x[5]=='x' && x[8]=='x')
        {x[2]='o';b[2]=1;tC++;}
    if(b[3]!=1 && x[6]=='x' && x[9]=='x')
        {x[3]='o';b[3]=1;tC++;}

    if(b[9]!=1 && x[1]=='x' && x[5]=='x')
        {x[9]='o';b[5]=1;tC++;}
    if(b[1]!=1 && x[5]=='x' && x[9]=='x')
        {x[1]='o';b[1]=1;tC++;}
    if(b[3]!=1 && x[7]=='x' && x[5]=='x')
        {x[3]='o';b[3]=1;tC++;}
    if(b[7]!=1 && x[5]=='x' && x[3]=='x')
        {x[7]='o';b[7]=1;tC++;}

    if(b[3]!=1 && x[1]=='x' && x[2]=='x')
        {x[3]='o';b[3]=1;tC++;}
    if(b[6]!=1 && x[4]=='x' && x[5]=='x')
        {x[6]='o';b[6]=1;tC++;}
    if(b[9]!=1 && x[7]=='x' && x[8]=='x')
        {x[9]='o';b[9]=1;tC++;}
    if(b[1]!=1 && x[2]=='x' && x[3]=='x')
        {x[1]='o';b[1]=1;tC++;}
    if(b[4]!=1 && x[5]=='x' && x[6]=='x')
        {x[4]='o';b[4]=1;tC++;}
    if(b[7]!=1 && x[8]=='x' && x[9]=='x')
        {x[7]='o';b[7]=1;tC++;}

    if(b[2]!=1 && x[1]=='x' && x[3]=='x')
        {x[2]='o';b[2]=1;tC++;}
    if(b[5]!=1 && x[4]=='x' && x[6]=='x')
        {x[5]='o';b[5]=1;tC++;}
    if(b[8]!=1 && x[7]=='x' && x[9]=='x')
        {x[8]='o';b[8]=1;tC++;}
    if(b[4]!=1 && x[1]=='x' && x[7]=='x')
        {x[4]='o';b[4]=1;tC++;}
    if(b[5]!=1 && x[2]=='x' && x[8]=='x')
        {x[5]='o';b[5]=1;tC++;}
    if(b[6]!=1 && x[3]=='x' && x[9]=='x')
        {x[6]='o';b[6]=1;tC++;}
    if(b[5]!=1 && x[1]=='x' && x[9]=='x')
        {x[5]='o';b[5]=1;tC++;}
    if(b[5]!=1 && x[3]=='x' && x[7]=='x')
        {x[5]='o';b[5]=1;tC++;}
    if(tC<9)
    {
        for(int i=1;i<=9;i++)
        {
            if(b[i]==0)
            {
                x[i]='o';
                b[i]=1;
                tC++;
                break;
            }
        }
    }
}
void compInput(char x[],int a,int b[])
{
    if(b[7]!=1 && x[1]=='o' && x[4]=='o')
        {x[7]='o';b[7]=1;tC++;}
    else if(b[8]!=1 && x[2]=='o' && x[5]=='o')
        {x[8]='o';b[8]=1;tC++;}
    else if(b[9]!=1 && x[3]=='o' && x[6]=='o')
        {x[9]='o';b[9]=1;tC++;}
    else if(b[1]!=1 && x[4]=='o' && x[7]=='o')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[2]!=1 && x[5]=='o' && x[8]=='o')
        {x[2]='o';b[2]=1;tC++;}
    else if(b[3]!=1 && x[6]=='o' && x[9]=='o')
        {x[3]='o';b[3]=1;tC++;}

    else if(b[3]!=1 && x[1]=='o' && x[2]=='o')
        {x[3]='o';b[3]=1;tC++;}
    else if(b[6]!=1 && x[4]=='o' && x[5]=='o')
        {x[6]='o';b[6]=1;tC++;}
    else if(b[9]!=1 && x[7]=='o' && x[8]=='o')
        {x[9]='o';b[9]=1;tC++;}
    else if(b[1]!=1 && x[2]=='o' && x[3]=='o')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[4]!=1 && x[5]=='o' && x[6]=='o')
        {x[4]='o';b[4]=1;tC++;}
    else if(b[7]!=1 && x[8]=='o' && x[9]=='o')
        {x[7]='o';b[7]=1;tC++;}

    else if(b[2]!=1 && x[1]=='o' && x[3]=='o')
        {x[2]='o';b[2]=1;tC++;}
    else if(b[5]!=1 && x[4]=='o' && x[6]=='o')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[8]!=1 && x[7]=='o' && x[9]=='o')
        {x[8]='o';b[8]=1;tC++;}
    else if(b[4]!=1 && x[1]=='o' && x[7]=='o')
        {x[4]='o';b[4]=1;tC++;}
    else if(b[5]!=1 && x[2]=='o' && x[8]=='o')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[6]!=1 && x[3]=='o' && x[9]=='o')
        {x[6]='o';b[6]=1;tC++;}
    else if(b[5]!=1 && x[1]=='o' && x[9]=='o')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[5]!=1 && x[3]=='o' && x[7]=='o')
        {x[5]='o';b[5]=1;tC++;}

    else if(b[9]!=1 && x[1]=='o' && x[5]=='o')
        {x[9]='o';b[5]=1;tC++;}
    else if(b[1]!=1 && x[5]=='o' && x[9]=='o')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[3]!=1 && x[7]=='o' && x[5]=='o')
        {x[3]='o';b[3]=1;tC++;}
    else if(b[7]!=1 && x[5]=='o' && x[3]=='o')
        {x[7]='o';b[7]=1;tC++;}

    else if(b[7]!=1 && x[1]=='x' && x[4]=='x')
        {x[7]='o';b[7]=1;tC++;}
    else if(b[8]!=1 && x[2]=='x' && x[5]=='x')
        {x[8]='o';b[8]=1;tC++;}
    else if(b[9]!=1 && x[3]=='x' && x[6]=='x')
        {x[9]='o';b[9]=1;tC++;}
    else if(b[1]!=1 && x[4]=='x' && x[7]=='x')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[2]!=1 && x[5]=='x' && x[8]=='x')
        {x[2]='o';b[2]=1;tC++;}
    else if(b[3]!=1 && x[6]=='x' && x[9]=='x')
        {x[3]='o';b[3]=1;tC++;}

    else if(b[3]!=1 && x[1]=='x' && x[2]=='x')
        {x[3]='o';b[3]=1;tC++;}
    else if(b[6]!=1 && x[4]=='x' && x[5]=='x')
        {x[6]='o';b[6]=1;tC++;}
    else if(b[9]!=1 && x[7]=='x' && x[8]=='x')
        {x[9]='o';b[9]=1;tC++;}
    else if(b[1]!=1 && x[2]=='x' && x[3]=='x')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[4]!=1 && x[5]=='x' && x[6]=='x')
        {x[4]='o';b[4]=1;tC++;}
    else if(b[7]!=1 && x[8]=='x' && x[9]=='x')
        {x[7]='o';b[7]=1;tC++;}

    else if(b[9]!=1 && x[1]=='x' && x[5]=='x')
        {x[9]='o';b[5]=1;tC++;}
    else if(b[1]!=1 && x[5]=='x' && x[9]=='x')
        {x[1]='o';b[1]=1;tC++;}
    else if(b[3]!=1 && x[7]=='x' && x[5]=='x')
        {x[3]='o';b[3]=1;tC++;}
    else if(b[7]!=1 && x[5]=='x' && x[3]=='x')
        {x[7]='o';b[7]=1;tC++;}

    else if(b[2]!=1 && x[1]=='x' && x[3]=='x')
        {x[2]='o';b[2]=1;tC++;}
    else if(b[5]!=1 && x[4]=='x' && x[6]=='x')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[8]!=1 && x[7]=='x' && x[9]=='x')
        {x[8]='o';b[8]=1;tC++;}
    else if(b[4]!=1 && x[1]=='x' && x[7]=='x')
        {x[4]='o';b[4]=1;tC++;}
    else if(b[5]!=1 && x[2]=='x' && x[8]=='x')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[6]!=1 && x[3]=='x' && x[9]=='x')
        {x[6]='o';b[6]=1;tC++;}
    else if(b[5]!=1 && x[1]=='x' && x[9]=='x')
        {x[5]='o';b[5]=1;tC++;}
    else if(b[5]!=1 && x[3]=='x' && x[7]=='x')
        {x[5]='o';b[5]=1;tC++;}
    else
    {
        for(int i=1;i<=9;i++)
        {
            if(b[i]==0)
            {
                x[i]='o';
                b[i]=1;
                tC++;
                break;
            }
        }
    }
}
void display(char x[])
{
    printf("\n############################## Tic Tac Toe ##############################\n\n");
    printf("First Player x\nSecond Player o\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",x[1],x[2],x[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",x[4],x[5],x[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",x[7],x[8],x[9]);
    printf("___|___|___\n");
    printf("\n#########################################################################\n\n");
}
int match(char x[])
{
    if((x[1]==x[2] && x[2]==x[3]) ||
        (x[4]==x[5] && x[5]==x[6]) ||
        (x[7]==x[8] && x[8]==x[9]) ||
        (x[1]==x[4] && x[4]==x[7]) ||
        (x[2]==x[5] && x[5]==x[8]) ||
        (x[3]==x[6] && x[6]==x[9]) ||
        (x[1]==x[5] && x[5]==x[9]) ||
        (x[3]==x[5] && x[5]==x[7]))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
