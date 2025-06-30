#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
    char name[20];
    int age;
    float GPA;
};
struct Student** studentSearch(struct Student*,int);
void input(struct Student**,int*,int*);
void showDatabase(struct Student*,int);
void highScorer(struct Student*,int);
void updateStudent(struct Student*);
int main()
{
    struct Student *S1=NULL;int choice,i=0,j=1;
    printf("#############  This is CLI based Student Record System #############\n\n");
    if(!S1)
        S1=(struct Student*)malloc(j*sizeof(struct Student));
    begin:
    printf("1. Add Students\n2. View All Students\n3. Find the top scorer\n4. Search Student\n5. Update Student Record\n6. Exit\n");
    scanf("%d",&choice);
    while(getchar()!='\n');
    // fflush(stdin);
    switch(choice)
    {
        case 1:
        addStudent:
        {
            char temp;
            input(&S1,&i,&j);
            while(getchar()!='\n');
            printf("\nPress 'Enter' to add more students or Press 'any key' for Main Menu");
            temp=getchar();
            if(temp=='\n')
            {
                fflush(stdin);
                system("clear\n");
                goto addStudent;
            }
            else if(temp!='\n')
            {
                system("clear\n");
                goto begin;
            }
        }

        case 2:
            showDatabase(S1,i);
            goto begin;
        
        case 3:
            if(i==0 && j==1)
            {
                printf("\nNo Students to show!!\n");
                goto begin;
            }
            highScorer(S1,j);
            goto begin;
        
        case 4:
            struct Student **fear=studentSearch(S1,i);
            free(fear);
            fear=NULL;
            goto begin;
        
        case 5:
            struct Student **sear=studentSearch(S1,i);int ind;
            if(sear)
            {
                printf("\nEnter the index of student you want to update: ");
                scanf("%d",&ind);
                updateStudent(*sear+ind);
                free(sear);
                sear=NULL;
            }
            goto begin;
        
        case 6:
            

        default:
            break;
    }
    free(S1);
    S1=NULL;
    return 0;
}
void input(struct Student **P,int *a,int *b)
{
    printf("Enter name: ");
    fgets(((*P)+(*a))->name,20,stdin);
    ((*P)+(*a))->name[strlen(((*P)+(*a))->name)-1]='\0';
    printf("Enter age: ");
    scanf("%d",&((*P)+(*a))->age);
    printf("Enter GPA: ");
    scanf("%f",&((*P)+(*a))->GPA);
    ++(*a);++(*b);
    // *P=(struct Student*)realloc(*P,(*b)*sizeof(struct Student));
}
void highScorer(struct Student *P,int y)
{
    if(y>1)
    {
        struct Student temp;
        temp=*P;
        for(int l=1;l<y;l++)
        {
            if(temp.GPA<(P+l)->GPA)
            {
                temp=*(P+l);
            }
        }
        printf("name=%s, age=%d and GPA=%f\n",temp.name,temp.age,temp.GPA);
    }
    else
        printf("No student Found!!");
}
void showDatabase(struct Student *P,int x)
{
    if(x>0)
    {
        printf("####### Student Database #######\n\n");
        for(int l=0;l<x;l++)
            printf("name=%s, age=%d, GPA=%f\n",(P+l)->name,(P+l)->age,(P+l)->GPA);    
    }
    else
        printf("No student Found!!");
}
struct Student** studentSearch(struct Student *P,int x)
{
    char temp[20];int flag=0,m=0;struct Student **X=NULL;
    X=(struct Student**)calloc(1,sizeof(struct Student*));
    printf("Enter the name of student: ");
    fgets(temp,20,stdin);
    temp[strlen(temp)-1]='\0';
    // if(temp[0]>96 && temp[0]<123)
    //     temp[0]+=32;
    for(int i=0;i<x;i++)
    {
        if(!strcmp(temp,(P+i)->name))
        {
            printf("Index(%d) -> name=%s, age=%d, GPA=%f\n",m,(P+i)->name,(P+i)->age,(P+i)->GPA);
            m++;
            X=(struct Student**)realloc(X,(m+1)*sizeof(struct Student*));
            *(X+m-1)=(P+i);
            flag=1;
        }
    }
    if(!flag)
    {
        printf("No student Found!!\n");
        return NULL;
    }
    else
        return X;
}
void updateStudent(struct Student *P)
{
    int x;
    printf("\nLooking for an update in:\n1. Name\n2. Age\n3. GPA\n");
    scanf("%d",&x);
    // while(getchar()!='\n')
    switch(x)
    {
        case 1:
            printf("\nEnter new name: ");
            fgets(P->name,20,stdin);
            P->name[strlen(P->name)-1]='\0';
            break;

        case 2:
            printf("\nEnter new age: ");
            scanf("%d",&P->age);
            break;

        case 3:
            printf("\nEnter new GPA: ");
            scanf("%f",&P->GPA);
            break;
    }
}