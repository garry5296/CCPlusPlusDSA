#include<stdio.h>
int main()
{
    printf("\e[1mQuestion:1\e[m\n");
    for(int i=0;i<5;i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        };
        printf("\n");
    };

    printf("\n\n\e[1mQuestion:2\e[m\n");
    for(int m=1;m<=5;m++)
    {
        for(int n=0;n<5;n++)
        {
            if(n<5-m)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:3\e[m\n");
    for(int p=0;p<5;p++)
    {
        for(int q=0;q<5-p;q++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:4\e[m\n");
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b>=a)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:5\e[m\n");
    for(int c=0;c<5;c++)
    {
        for(int d=0;d<10;d++)
        {
            if(d>=4-c && d<=4+c){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    };

    printf("\n\n\e[1mQuestion:6\e[m\n");
    for(int e=0;e<5;e++)
    {
        for(int f=0;f<9;f++)
        {
            if(f>=e && f<9-e)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:7\e[m\n");
    for(int g=0;g<5;g++)
    {
        for(int h=0;h<10;h++)
        {
            if(h<5-g||h>=5+g)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:8\e[m\n");
    int cc,count;
    for(int k=1;k<=4;k++)
    {
        count=1;
        for(int l=1;l<=k;l++)
        {
            cc=k-1;
            while(count<4-k+1)
            {
                printf(" ");
                count++;
            }
            printf("%d",l);
            while (cc!=0 && l==k)
            {
                printf("%d",cc);
                cc--;
            }
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion:9\e[m\n");
    int count1,ccc;
    for (int o = 1; o <= 4; o++)
    {
        count1=1;
        ccc=4-o;
        for (int p = 1; p <= 7; p++)
        {
            if (p>=o && p<=4)
            {
                printf("%d",count1);
                count1++;
            }
            if(p<o)
            {
                printf(" ");
            }
            if(ccc!=0 && p>4)
            {
                printf("%d",ccc);
                ccc--;
            }
        }
        printf("\n");
    }
    

    printf("\n\n\e[1mQuestion:10\e[m\n");
    int count2,cccc=1;
    for(int q=0;q<4;q++)
    {
        count2=2*q-1;cccc=4-q;
        for(int r=0;r<7;r++)
        {
            if(r>=0 && r<4-q)
            {
                printf("%d",r+1);
            }
            if(count2>0 && r>=4-q)
            {
                printf(" ");
                count2--;
            }
            if (cccc!=0 && r>=4+q-1)
            {
                printf("%d",cccc);
                cccc--;
            }
            if (cccc==4)
            {
                cccc--;
            }
        }
        printf("\n");
    }

    // printf("\n\n\e[1mQuestion:11\e[m\n");
    // printf("\n\n\e[1mQuestion:12\e[m\n");
    // printf("\n\n\e[1mQuestion:13\e[m\n");
    // printf("\n\n\e[1mQuestion:14\e[m\n");
    // printf("\n\n\e[1mQuestion:15\e[m\n");
    // printf("\n\n\e[1mQuestion:16\e[m\n");
    // printf("\n\n\e[1mQuestion:17\e[m\n");
    // printf("\n\n\e[1mQuestion:18\e[m\n");
    // printf("\n\n\e[1mQuestion:19\e[m\n");
    return 0;
}