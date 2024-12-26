#include<iostream>
using namespace std;
struct cuboid{
    float len;
    float bre;
    float hei;
};
int main()
{
    printf("\e[1mQuestion1. Write a C++ program to print Hello MySirG on the screen..\e[m");
    cout<<"\n\e[1mHello MySirG\e[m";

    printf("\n\n\e[1mQuestion2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl..\e[m");
    cout<<endl<<"\e[1mHello\e[m"<<endl<<"\e[1mMySirG\e[m"<<endl;

    printf("\n\n\e[1mQuestion3. Write a C++ program to calculate the sum of two numbers..\e[m");
    int *c1=NULL,*c2=NULL;
    c1=(int*)malloc(sizeof(int));
    c2=(int*)malloc(sizeof(int));
    cout<<"\nEnter two numbers: ";
    if(c1!=NULL && c2!=NULL)
    {
        cin>>*c1>>*c2;
    }
    else
    {
        cout<<"Memory Allocation failed!!";
        return 0;
    }
    cout<<"Sum of both the numbers is "<<*c1+*c2;
    free(c1);
    free(c2);
    c1=NULL;
    c2=NULL;


    printf("\n\n\e[1mQuestion4. Write a C++ program to calculate the area of a circle.\e[m");
    float *d1,*dArea;
    d1=(float*)malloc(sizeof(char));
    dArea=(float*)malloc(sizeof(char));
    cout<<endl<<"Enter radius to calculate Area of circle: ";
    if(d1!=NULL && dArea!=NULL)
    {
        cin>>*d1;
    }
    else
    {
        cout<<"Memory Allocation failed!!";
        return 0;
    }
    *dArea=(3.14*(*d1)*(*d1));
    cout<<"Area of circle is "<<*dArea;
    free(d1);
    free(dArea);
    d1=NULL;
    dArea=NULL;

    printf("\n\n\e[1mQuestion5. Write a C++ program to calculate the volume of a cuboid..\e[m");
    struct cuboid *e1=NULL;
    float *eVol=NULL;
    e1=(struct cuboid *)malloc(sizeof(struct cuboid));
    eVol=(float*)malloc(sizeof(float));
    cout<<endl<<"Enter length,breadth and height of a cuboid: ";
    if(e1!=NULL && eVol!=NULL)
        cin>>e1->len>>e1->bre>>e1->hei;
    else{
        cout<<"Memory Allocation Failed!!";
        return 0;
    }
    *eVol=(e1->len)*(e1->bre)*(e1->hei);
    cout<<"Volume of cuboid is "<<*eVol;
    free(e1);
    free(eVol);
    e1=NULL;
    eVol=NULL;

    printf("\n\n\e[1mQuestion6. Write a C++ program to calculate an average of 3 numbers..\e[m");
    int *f1=NULL,*f2=NULL,*f3=NULL;float *fAvg=NULL;
    f1=(int*)malloc(sizeof(int));
    f2=(int*)malloc(sizeof(int));
    f3=(int*)malloc(sizeof(int));
    fAvg=(float*)malloc(sizeof(int));
    cout<<endl<<"Enter 3 numbers to calculate it's average: ";
    if(f1!=NULL && f2!=NULL && f3!=NULL && fAvg!=NULL)
    {
        cin>>*f1>>*f2>>*f3;
    }
    else{
        cout<<"Memory allocation failed!!";
        return 0;
    }
    *fAvg=((*f1)+(*f2)+(*f3))/3.0;
    cout<<"The average of 3 numbers is "<<*fAvg;
    free(f1);
    free(f2);
    free(f3);
    free(fAvg);
    f1=NULL;
    f2=NULL;
    f3=NULL;
    fAvg=NULL;

    printf("\n\n\e[1mQuestion7. Write a C++ program to calculate the square of a number.\e[m");
    int g;
    cout<<endl<<"Enter a number to calculate it's square: ";
    cin>>g;
    cout<<"The square of number is "<<g*g;

    printf("\n\n\e[1mQuestion8. Write a C++ program to swap values of two int variables without using third variable.\e[m");
    int h1,h2;
    cout<<endl<<"Enter two numbers: ";
    cin>>h1>>h2;
    h1=h1+h2;
    h2=h1-h2;
    h1=h1-h2;
    cout<<"After swapping of two variable first is "<<h1<<" and second is "<<h2;

    printf("\n\n\e[1mQuestion9. Write a C++ program to find the maximum of two numbers..\e[m");
    int i1,i2;
    cout<<endl<<"Enter two numbers: ";
    cin>>i1>>i2;
    cout<<"Maximum of two numbers is "<<((i1>i2)?i1:i2);

    printf("\n\n\e[1mQuestion10. Write a C++ program to add all the numbers of an array of size 10..\e[m");
    int *j=NULL,j1=0,jsum=0;
    j=(int*)calloc(10,sizeof(int));
    cout<<endl<<"Enter 10 numbers: ";
    if(j!=NULL)
    {
        while(j1<10)
        {
            cin>>j[j1];
            jsum+=j[j1];
            j1++;
        }
    }
    else{
        cout<<"Memory allocation failed!!";
        return 0;
    }
    cout<<"Addition of 10 numbers is "<<jsum;
    free(j);
    j=NULL;
    


    return 0;
}