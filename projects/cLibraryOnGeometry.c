#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Coordinate
{
    double x,y;
} Coordinate;
typedef struct Equation
{
    int a,b;
} Equation;
double find_area(double,double,double);
double distance(Coordinate,Coordinate);
double find_angle(Equation,Equation);
double find_distance(Coordinate,Coordinate);
int main()
{

    /**************Problem-1***************/
    double angle_at_chowk;
    Equation E1,E2;
    E1.a=2;E1.b=3;E2.a=5;E2.b=1;
    angle_at_chowk = find_angle(E1,E2);
    printf("Angle at which these roads meets at 123 Chowk: %lf\n",angle_at_chowk);

    /**************Problem-2***************/
    // double distance;
    // Coordinate C4,C5;
    // C4.x=23.259933; C4.y=77.412613;
    // C5.x=12.9716; C5.y=77.5946;
    // distance = find_distance(C4,C5);
    // printf("Distance Between Saurabh Sir and Prateek Sir: %lf\n",distance);

    /**************Problem-3***************/
    double area_under_A,parameter1, parameter2, parameter3;
    Coordinate C1,C2,C3;
    C1.x=20.077; C1.y=11.598;
    C2.x=26.526; C2.y=90.138;
    C3.x=23.674; C3.y=32.579;
    parameter1=distance(C1,C2);
    parameter2=distance(C2,C3);
    parameter3=distance(C3,C1);

    area_under_A = find_area(parameter1, parameter2, parameter3);
    printf("Area to be coloured black: %lf\n",area_under_A);
    return 0;
}
double find_distance(Coordinate A,Coordinate B)
{
    return 2*6371*asin(sqrt(pow(sin(A.x-B.x),2)+(cos(A.x)*cos(B.x)*pow(sin((A.y-B.y)/2),2)))); //2r arcsin(sqrt(havQ))
}
double distance(Coordinate A,Coordinate B)
{
    return sqrt(pow(abs(A.x-B.x),2)+pow(abs(A.y-B.y),2));
}
double find_area(double a,double b,double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double find_angle(Equation E1,Equation E2)
{
    return atan(abs(((E2.a*E1.b)-(E1.a*E2.b))/((E1.a*E2.a)+(E1.b*E2.b))));
}