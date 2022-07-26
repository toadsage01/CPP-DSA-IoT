//ASSIGNMENT 1 - Input and output in C Language
#include <stdio.h>
#include <conio.h>

void four();

void main()
{
    //1. Write a program to print Hello Students on the screen.
    printf("Hello Students");

    //2. Write a program to print Hello in the first line and Students in the second line.
    printf("Hello\nStudents");

    //3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
    printf("\"MySirG\"");

    //4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
    //Expected output format – “Area of circle is A having the radius10 R”. Replace A with area & R with radius.
    four();

    //5. WAP to calculate the length of String using printf function.
    five();

    //6. WAP to print the name of the user in double quotes.Expected output format – “Hello , Amit Kumar”
    printf(" \"Hello , Manas Ranjan\" ");

    //7. WAP to print “%d” on the screen.
    printf("%%d");

    //8. WAP to print “\n” on the screen.
    printf(" \"\\n\" ");

    //9. WAP to print “\\” on the screen.
    printf(" \"\\\\\" ");

    /*10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
    User Input date format – “DD/MM/YYYY” (27/11/2022) Output format –“Day – DD , Month – MM , Year – YYYY” */
    int d,m,y;
    printf("Input Date (DD/MM/YYYY): ");
    scanf("%d%d%d",&d,&m,&y);
    printf("Day - %d , Month - %d , Year - %d",d,m,y);

    /*11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
    User Input date format – “HH:MM” Output format – “HH hour and MM Minute” */
    int hr,min;
    printf("Enter Time: ");
    scanf("%d%d",&hr,&min);
    printf("%d hour and %d Minute",hr,min);

    /*12. Find output of below code:
    int main()
    {
        int x = printf(“ineuron”);
        printf(“%d”,x);
        return 0;
    }
    */ //!Answer - ineuron7



}

void four()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Area of Circle is %f having the radius %f ",3.14*radius*radius,radius);
}

//5. WAP to calculate the length of String using printf function.
five()
{
    int x=printf("<I am a coder & I code!>");
    printf(" %d ",x);
}




















