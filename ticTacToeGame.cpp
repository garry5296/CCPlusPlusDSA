#include<iostream>
#include<cstdlib>
using namespace std;
// #define if(i==1) x[a]='x';
// #define if(i==2) x[a]='o';

void smartComputer(char[]);
void evilComputer(char[]);
void display(char[]);
int match(char[]);
void compInput(char[],int,int[]);
void evilCompInput(char x[],int a,int b[]);
void player(char[]);
static int tC=0;
int main()
{
    int input;char a[10]={'0','1','2','3','4','5','6','7','8','9'},b;
    cout<<"Enter your choice"<<endl<<"1. Want to play with Smart Computer"<<endl<<"2. Want to play with Evil Computer"<<endl<<"3. Want to play with player"<<endl<<"4. Exit"<<endl;
    cin>>input;
    system("clear");

    switch(input)
    {
        case 1:
            smartComputer(a);
            break;

        case 2:
            evilComputer(a);
            break;

        case 3:
            player(a);
            break;

        default:
            break;
    }

    return 0;
}
//functions
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
                cout<<"Player -'"<<i<<"' turn, please enter position: ";
                cin>>a;
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
                        cout<<"Player '"<<i<<"' - You won !!"<<endl<<endl;
                        cout<<"###########################################################################"<<endl<<endl;
                        break;
                    }
                }
                else
                {
                    system("clear");
                    cout<<"\033[0;31mInvalid position!!\033[0m"<<endl<<endl;
                }
                system("clear");
            }
        }
        else
        {
            system("clear");
            display(x);
            cout<<"Game Draw !!"<<endl<<endl;
            cout<<"###########################################################################"<<endl<<endl;
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
        cout<<"Your turn, please enter position: ";
        cin>>a;
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
                cout<<"You won !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }

            evilCompInput(x,a,b);

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                cout<<"You lose !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }


            if(tC==9)
            {
                system("clear");
                display(x);
                cout<<"Game Draw !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }

            system("clear");
        }
        else
        {
            system("clear");
            cout<<"\033[0;31mInvalid position!!\033[0m"<<endl<<endl;
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
        cout<<"Your turn, please enter position: ";
        cin>>a;
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
                cout<<"You won !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }

            compInput(x,a,b);

            flag = match(x);

            if(flag)
            {
                system("clear");
                display(x);
                cout<<"You lose !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }


            if(tC==9)
            {
                system("clear");
                display(x);
                cout<<"Game Draw !!"<<endl<<endl;
                cout<<"###########################################################################"<<endl<<endl;
                break;
            }

            system("clear");
        }
        else
        {
            system("clear");
            cout<<"\033[0;31mInvalid position!!\033[0m"<<endl<<endl;
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
    cout<<endl<<"############################## Tic Tac Toe ##############################"<<endl<<endl;
    cout<<"First Player x"<<endl<<"Second Player o"<<endl<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<x[1]<<" | "<<x[2]<<" | "<<x[3]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<x[4]<<" | "<<x[5]<<" | "<<x[6]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<x[7]<<" | "<<x[8]<<" | "<<x[9]<<endl;
    cout<<"___|___|___"<<endl;
    cout<<endl<<"#########################################################################"<<endl<<endl;
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
