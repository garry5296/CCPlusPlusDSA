#include<stdio.h>
// #define cRows
// #define cColumns
void input(int[3][3],int);
int main()
{
    printf("\n\n\e[1mQuestion1. Write a program to calculate the sum of two matrices each of order 3x3..\e[m");
    int a1[3][3],a2[3][3];
    input(a1,3);
    input(a2,3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a1[i][j]+=a2[i][j];
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion2. Write a program to calculate the product of two matrices each of order 3x3..\e[m");
    int b1[3][3],b2[3][3],b3[3][3]={{0},{0}};
    input(b1,3);
    input(b2,3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                b3[i][j]+=(b1[i][k]*b2[k][j]);
            }
        }
    }
    for (int p = 0; p < 3; p++)
    {
        for (int q=0; q < 3; q++)
            printf("%d ",b3[p][q]);
        printf("\n");
    }

    printf("\n\n\e[1mQuestion3. Write a program in C to find the transpose of a given matrix..\e[m");
    int cRows,cColumns;
    printf("\nEnter size of matrix:");
    scanf("%d%d",&cRows,&cColumns);
    int c1[cRows][cColumns],c2[cColumns][cRows];
    printf("\nEnter %d elements for %dX%d matrix:",cRows*cColumns,cRows,cColumns);
    for (int i = 0; i < cRows; i++)
    {
        for (int j = 0; j < cColumns; j++)
        {
            scanf("%d",&c1[i][j]);
        }
    }
    for (int i = 0; i < cColumns; i++)
    {
        for (int j = 0; j < cRows; j++)
        {
            c2[i][j]=c1[j][i];
            printf("%d ",c2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion4. Write a program in C to find the sum of right diagonals of a matrix..\e[m");
    int dSizeOfArray,sum=0;
    printf("\nEnter size of array:");
    scanf("%d",&dSizeOfArray);
    int d[dSizeOfArray][dSizeOfArray];
    printf("\nEnter %d elements for %dX%d matrix:",dSizeOfArray*dSizeOfArray,dSizeOfArray,dSizeOfArray);
    for (int i = 0; i < dSizeOfArray; i++)
        for (int j = 0; j < dSizeOfArray; j++)
        {
            scanf("%d",&d[i][j]);
            if(i==j)
                sum+=d[i][j];
        }
    printf("\nThe sum of right diagonal elements of matrix is:%d",sum);

    printf("\n\n\e[1mQuestion5. Write a program in C to find the sum of left diagonals of a matrix..\e[m");
    int eSizeOfArray,esum=0;
    printf("\nEnter size of array:");
    scanf("%d",&eSizeOfArray);
    int e[eSizeOfArray][eSizeOfArray];
    printf("\nEnter %d elements for %dX%d matrix:",eSizeOfArray*eSizeOfArray,eSizeOfArray,eSizeOfArray);
    for (int i = 0; i < eSizeOfArray; i++)
        for (int j = 0; j < eSizeOfArray; j++)
        {
            scanf("%d",&e[i][j]);
            if(i+j==eSizeOfArray-1)
                esum+=e[i][j];
        }
    printf("\nThe sum of left diagonal elements of matrix is:%d",esum);

    printf("\n\n\e[1mQuestion6. Write a program in C to find the sum of rows and columns of a Matrix..\e[m");
    int fSizeOfArray,rsum=0,csum=0;
    printf("\nEnter size of array:");
    scanf("%d",&fSizeOfArray);
    int f[fSizeOfArray][fSizeOfArray];
    printf("\nEnter %d elements for %dX%d matrix:",fSizeOfArray*fSizeOfArray,fSizeOfArray,fSizeOfArray);
    for (int i = 0; i < fSizeOfArray; i++)
        for (int j = 0; j < fSizeOfArray; j++)
            scanf("%d",&f[i][j]);
    for (int i = 0; i < fSizeOfArray; i++)
    {
        for (int j = 0; j < fSizeOfArray; j++)
            rsum+=f[i][j];
        printf("Sum of %dst row is:%d",i+1,rsum);
        printf("\n");
        rsum=0;
    }
    for (int i = 0; i < fSizeOfArray; i++)
    {
        for (int j = 0; j < fSizeOfArray; j++)
            csum+=f[j][i];
        printf("Sum of %dst column is:%d",i+1,csum);
        printf("\n");
        csum=0;
    }

    printf("\n\n\e[1mQuestion7. Write a program in C to print or display the lower triangular of a given matrix..\e[m");
    int gSizeOfArr;
    printf("\nEnter size of array:");
    scanf("%d",&gSizeOfArr);
    int g[gSizeOfArr][gSizeOfArr];
    printf("\nEnter %d elements for %dX%d matrix:",gSizeOfArr*gSizeOfArr,gSizeOfArr,gSizeOfArr);
    for (int i = 0; i < gSizeOfArr; i++)
        for (int j = 0; j < gSizeOfArr; j++)
            scanf("%d",&g[i][j]);

    for (int i = 0; i < gSizeOfArr; i++)
    {
        for (int j = 0; j < gSizeOfArr; j++)
        {
            if(j<i)
                printf("%d ",g[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    

    printf("\n\n\e[1mQuestion8. Write a program in C to print or display an upper triangular matrix..\e[m");
    int hSizeOfArr;
    printf("\nEnter size of array:");
    scanf("%d",&hSizeOfArr);
    int h[hSizeOfArr][hSizeOfArr];
    printf("\nEnter %d elements for %dX%d matrix:",hSizeOfArr*hSizeOfArr,hSizeOfArr,hSizeOfArr);
    for (int i = 0; i < hSizeOfArr; i++)
        for (int j = 0; j < hSizeOfArr; j++)
            scanf("%d",&h[i][j]);

    for (int i = 0; i < hSizeOfArr; i++)
    {
        for (int j = 0; j < hSizeOfArr; j++)
        {
            if(j>i)
                printf("%d ",h[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n\n\e[1mQuestion9. Write a program in C to accept a matrix and determine whether it is a sparse matrix..\e[m");
    int iSizeOfArr, countOne=0;
    printf("\nEnter size of array:");
    scanf("%d",&iSizeOfArr);
    int k[iSizeOfArr][iSizeOfArr];
    printf("\nEnter %d elements for %dX%d matrix:",iSizeOfArr*iSizeOfArr,iSizeOfArr,iSizeOfArr);
    for (int i = 0; i < iSizeOfArr; i++)
        for (int j = 0; j < iSizeOfArr; j++)
        {
            scanf("%d",&k[i][j]);
            if(k[i][j]!=0)
                countOne++;
        }
    if(countOne<(iSizeOfArr*iSizeOfArr)/2)
        printf("Matrix is SPARSE!!");
    else
        printf("Matrix is DENSE!!");


    printf("\n\n\e[1mQuestion10. Write a program in C to find the row with maximum number of 1s..\e[m");
    int jSizeOfArr, largest=0,count=0,row=-1;
    printf("\nEnter size of array:");
    scanf("%d",&jSizeOfArr);
    int l[jSizeOfArr][jSizeOfArr];
    printf("\nEnter %d elements for %dX%d matrix:",jSizeOfArr*jSizeOfArr,jSizeOfArr,jSizeOfArr);
    for (int i = 0; i < jSizeOfArr; i++)
    {
        for (int j = 0; j < jSizeOfArr; j++)
        {
            scanf("%d",&l[i][j]);
            if(l[i][j] == 1)
                count++;
        }
        if(count>largest)
        {
            largest=count;
            row=i;
        }
        count=0;
    }
    if(row>=0)
        printf("The row with maximum number of 1s is: %d",row);
    return 0;
}
//functions
void input(int x[3][3],int a)
{
    printf("\nEnter 9 elements for 3X3 matrix:");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d",&x[i][j]);
}
// void userInput(int x[cRows][cColumns])
// {
//     printf("\nEnter 9 elements for 3X3 matrix:");
//     for (int i = 0; i < cRows; i++)
//         for (int j = 0; j < cColumns; j++)
//             scanf("%d",&x[i][j]);
// }