#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
#include<unistd.h>

char getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);         // Get current terminal attributes
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);       // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();                         // Read a single character
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // Restore old attributes
    return ch;
};
int main()
{
    char *user=NULL,u_input[3],temp[3],reconf,a[4][4][3]={{"1 ","6 ","14","9 "},{"13","2 ","7 ","8 "},{"4 ","10","11","12"},{"5 ","3 ","15","  "}};//,startConf;
    int i=0,pos_i=3,pos_j=3;

    user=(char*)malloc(sizeof(char)*30);
    printf("Enter player name: ");
    if(user==NULL)
    {
        printf("\nMemory allocation failed!!");
        return 0;
    }
    else if(user!=NULL)
        fgets(user,30,stdin);
    user[strlen(user)-1]='\0';

    /*Game Rules*/
    printf("Hello %s,\n",user);
    replay:
    printf("\n\n\t\t\e[1mGame Rules :\e[m");
    printf("\n1. You can move only 1 step at a time with the arrow key.");
    printf("\n2. You can move numbers at an empty position only.");
    printf("\n3. For each valid move : your total number of moves will decrease by 1.\n");

    /*Winning Situations*/
    printf("\n\n\t\t\e[1mWinning Situation :\e[m");
    printf("\n1. Number in a 4*4 matrix should be in order from 1 to 15");
    printf("\n---------------------");
    printf("\n| 1  | 2  | 3  | 4  |\n| 5  | 6  | 7  | 8  |\n| 9  | 10 | 11 | 12 |\n| 13 | 14 | 15 |    |");
    printf("\n---------------------");

    printf("\n\nPress any key to start...  ");
    if(getch())
    {
        while(i<20)
        {
            int p=0;
            printf("\n\n\t\tMoves left: %d",20-i);

            //
            printf("\n\n---------------------");
            printf("\n| %s | %s | %s | %s |\n| %s | %s | %s | %s |\n| %s | %s | %s | %s |\n| %s | %s | %s | %s |",a[0][0],a[0][1],a[0][2],a[0][3],a[1][0],a[1][1],a[1][2],a[1][3],a[2][0],a[2][1],a[2][2],a[2][3],a[3][0],a[3][1],a[3][2],a[3][3]);
            printf("\n---------------------");

            user_input:
            while(p<3)
            {
                u_input[p]=getch();
                p++;
            }

            if((pos_i==0 && u_input[2]=='A') || (pos_i==3 && u_input[2]=='B') || (pos_j==0 && u_input[2]=='D') || (pos_j==3 && u_input[2]=='C'))
            {
                printf("\nInvalid Move, Please try again ...");
                p=0;
                goto user_input;
            }

            switch(u_input[2])
            {
            /* UP Movement */
            case 'A':
                strcpy(temp,a[pos_i][pos_j]);
                strcpy(a[pos_i][pos_j],a[pos_i-1][pos_j]);
                strcpy(a[pos_i-1][pos_j],temp);
                pos_i--;
                break;
            /* DOWN Movement */
            case 'B':
                strcpy(temp,a[pos_i][pos_j]);
                strcpy(a[pos_i][pos_j],a[pos_i+1][pos_j]);
                strcpy(a[pos_i+1][pos_j],temp);
                pos_i++;
                break;
            /* RIGHT Movement */
            case 'C':
                strcpy(temp,a[pos_i][pos_j]);
                strcpy(a[pos_i][pos_j],a[pos_i][pos_j+1]);
                strcpy(a[pos_i][pos_j+1],temp);
                pos_j++;
                break;
            /* LEFT Movement */
            case 'D':
                strcpy(temp,a[pos_i][pos_j]);
                strcpy(a[pos_i][pos_j],a[pos_i][pos_j-1]);
                strcpy(a[pos_i][pos_j-1],temp);
                pos_j--;
                break;
            default:
                printf("\n\nInvalid Move, Please try again ...");
                p=0;
                goto user_input;
            }

            if(a[0][0]=="1 " && a[0][1]=="2 " && a[0][2]=="3 " && a[0][3]=="4 " && a[1][0]=="5 " && a[1][1]=="6 " && a[1][2]=="7 " && a[1][3]=="8 " && a[2][0]=="9 " && a[2][1]=="10" && a[2][2]=="11" && a[2][3]=="12" && a[3][0]=="13" && a[3][1]=="14" && a[3][2]=="15")
            {
                printf("You Won!!");
                break;
            }
            i++;
        }
    }
    if(i==20)
    {
        printf("\n\nOh, you lose..\n\n\e[1mDo you want to play again?\e[m - Press 'y/Y' for Yes (or) Press any key to exit ");
        reconf=getch();
        if(reconf=='y' || reconf=='Y')
        {
            i=0;
            pos_i=3;
            pos_j=3;
            goto replay;
        }
        else
            return 0;
    }

    // printf("");
    return 0;
}