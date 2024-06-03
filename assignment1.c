#include<stdio.h>
int main()
{
    float r,area;
    int DD,MM,YYYY,hr,mint;

    //1. Write a program to print Hello Students on the screen.
    printf("\e[1mHello\e[m Students\n");

    //2. Write a program to print Hello in the first line and Students in the second line.
    printf("\n\e[1mHello\nStudents\e[1m\n");

    //3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
    printf("\n\e[1m\"MySirG\"\e[1m\n");

    //4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
    printf("\nEnter Radius of the circle: ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of circle is \033[0;31m%f\033[0m having the radius \033[0;31m%f\033[0m\n",area,r);

    //5. WAP to calculate the length of String using printf function.
    int x = printf("\nGurpreet");
    printf("\nlength of Gurpreet: %d\n",x);

    //6. WAP to print the name of the user in double quotes.
    printf("\n\033[0;31m\"Hello, Amit Kumar\"\033[0m\n");

    //7. WAP to print “%d” on the screen.
    printf("\n\"\033[0;31m%%d\033[0m\"\n");

    //8. WAP to print “\n” on the screen.
    printf("\n\"\033[0;31m\\n\033[0m\"\n");

    //9. WAP to print “\\” on the screen.
    printf("\n\"\033[0;31m\\\\\033[0m\"\n");

    //10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
    printf("\nEnter the date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("\033[0;31mDay - %d, Month - %d, Year - %d\033[0m\n",DD,MM,YYYY);

    //11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
    printf("\nEnter the time in HH:MM format: ");
    scanf("%d:%d",&hr,&mint);
    printf("\n\033[0;31m%d hour and %d minute\033[0m\n",hr,mint);

    //12. Find output of below code:
    printf("\n7");
    printf("\n");
    return 0;
}