//ASSIGNMENT 9 - Switch Case Problems
//Each question is made in a unique function & is named by the question serial number...
#include <stdio.h>
#include <conio.h>
#include <math.h>

int one(); int two(); void three(); void four(); void five(); void six(); void seven();
int eight(); void nine(); void ten();

int main()
{

    one();
    two(); //char date type inputs are idk why skipping off my inputs of the next question..
    three();
    four();//thus i've used %s but without specifying size, i'll learn about it.
    five();
    six();
    seven();
    eight();
    nine();
    ten();

    return 0;
}


//1.Write a program which takes the month number as an input and display number of days in that month.
int one()
{
    printf("Q1.Number of days in a month!\n");
    int month;
    printf("Enter a month(no.): ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("January - 31 Days");
        break;
        case 2:
        {
            printf("February ~28Days!"); break;

           /* char ans; //wrong input in command line, skips input for next two questions..
            printf("Is it a Leap year? (y-121/n-110) ");
            scanf("%c",&ans); //%c is misbehaving here..
            if(ans==121)
            {
                printf("February - 29 days"); break;
            }
            else if(ans==110)
            {
                printf("February - 28 Days"); break;
            }
            else
                printf("N/A"); break; */
        }

        case 3:
        printf("March - 31 Days");
        break;

        case 4:
        printf("April - 30 Days");
        break;

        case 5:
        printf("May - 31 Days");
        break;

        case 6:
        printf("June - 30 Days");
        break;

        case 7:
        printf("July - 31 Days");
        break;

        case 8:
        printf("August - 31 Days");
        break;

        case 9:
        printf("September - 30 Days");
        break;

        case 10:
        printf("October - 31 Days");
        break;

        case 11:
        printf("November - 30 Days");
        break;

        case 12:
        printf("December - 31 Days");
        break;
        default:
            printf("Not/Applicable");
    }
    printf("\n");
    printf("\n");

    return 0;
}

/*2. Write a menu driven program with the following options:
a. Addition b.Subtraction c.Multiplication d.Division e.Exit*/
int two()
{
    char x;
    printf("Q2.----MENU----\na.Addition \nb.Subtraction \nc.Multiplication \nd.Division \ne.Exit\n");
    printf("Select an option: ");
    scanf("%s",&x);
    switch(x)
    {   int a,b;
        case 'a':
            printf("+Add+ selected\n");
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("%d+%d=%d",a,b,a+b);
            break;
        case 'b':
            printf("-Sub- selected\n");
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("%d-%d=%d",a,b,a-b);
            break;
        case 'c':
            printf("*Mult* selected\n");
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("%d*%d=%d",a,b,a*b);
            break;
        case 'd':
            printf("/Division/ selected\n");
            printf("Enter two numbers ");
            scanf("%d%d",&a,&b);
            printf("%d/%d=%d",a,b,a/b);
            break;
        case 'e':
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong input");
    }

    printf("\n");
    printf("\n");

    return 0;
}

/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
void three()
{
    printf("Q3.......Greetings......\n");
    int input;
    printf("Enter a week day number ");
    scanf("%d",&input);
    switch(input)
    {
        case 1:printf("Monday, Eat Sleep C0de RePeAT!"); break;
        case 2: printf("Tuesday, Jai shri Ram!"); break;
        case 3:printf("Wednesday, Om namo: narayana"); break;
        case 4: printf("Thursday, Eat Sleep C0de RePeAT!"); break;
        case 5:printf("Friday, Eat Sleep C0de RePeAT!"); break;
        case 6: printf("Saturday,Weekend day!"); break;
        case 7:printf("Sunday, fun day!"); break;
        default: printf("N/A");
    }
    printf("\n");
    printf("\n");
}


/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit */
void four()
{
    char x;
    printf("Q4.Check MENU:-\n");
    printf("a.Three numbers are lengths of an isosceles triangle or not\nb.Three numbers are lengths of sides of a right angled triangle or not \nc.Three numbers are equilateral triangle or not \nd.Exit\n");
    printf("Select an option: ");
    scanf("%s",&x);
    switch(x)
    {   int a,b,c;
        case 'a':
            printf("Option a. selected \nEnter sides of the triangle ");
            scanf("%d%d%d",&a,&b,&c);
            a==b?printf("Yes, sides of an Isoceles"):b==c?printf("Yes, sides of an Isoceles"):c==a?printf("Yes, sides of an Isoceles"):printf("No, not sides of an Isoceles Tri.");
            break;
        case 'b':
            printf("Option b. selected \nEnter sides of the triangle ");
            scanf("%d%d%d",&a,&b,&c);
            a*a+b*b==c*c?printf("Yes, sides of right an. Tri."):b*b+c*c==a*a?printf("Yes, sides of right an. Tri."):c*c+a*a==b*b?printf("Yes, sides of right an. Tri."):printf("No, not sides of right an. Tri.");
            break;
        case 'c':
            printf("Option a. selected \nEnter sides of the triangle ");
            scanf("%d%d%d",&a,&b,&c);
            a==b&&b==c?printf("Yes, Equilateral"):printf("Not sides of an equilateral triangle");
            break;
        case 'd':
            printf("Exiting...");
            break;
    }
    printf("\n");
    printf("\n");
}


/*5. Convert the following if-else-if construct into switch case:
if(var == 1) System.out.println("good");
else if(var == 2) System.out.println("better");
else if(var == 3) System.out.println("best");
else System.out.println("invalid");
*/
void five()
{
    printf("Q5.Select a number 1.\t2.\t3.\n");
    int var;
    scanf("%d",&var);
    switch(var)
    {
        case 1: printf("good"); break;//System.out.println() doesn't work in c!?
        case 2: printf("better"); break;
        case 3: printf("best"); break;
        default: printf("invalid");
    }
    printf("\n");
    printf("\n");

}

//6. Program to check whether a year is a leap year or not. Using switch statement
void six()
{
    int year;
    printf("Q6.Enter any year ");
    scanf("%d",&year);
    switch(year%4)
    {
        case 0: printf("leap year"); break;
        default: printf("not a leap year"); break;
    }
    printf("\n");
    printf("\n");
}

/*7. Program to take the value from the user as input electricity unit chargesand calculate
total electricity bill according to the given condition. Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
void seven()
{
    int unit; float charge=0.0;
    printf("Q7.Input consumed Electricity unit ");
    scanf("%d",&unit); //%f is misbehaving
    switch(unit)
    {
        default:
            charge+=1.50*(unit-250);
        case 151 ... 250:
            if(unit>250)
            {
                charge+=1.20*100;
            }
            else
            {
                charge+=1.20*(unit-150);
            }
        case 51 ... 150: //100
            if(unit>150)
            {
                charge+=0.75*100;
            }
            else
            {
                charge+=0.75*(unit-50);
            }

        case 0 ... 50:
            if(unit>50)
            {
                charge+=0.50*50 ;
            }
            else
            {
                charge+=(0.50*unit);
            }
    }
    printf("Charge: Rs.%f\nBill: Rs.%f",charge,charge+charge*0.2);
    printf("\n");
    printf("\n");
}


//8.Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
int eight()
{
    int num;
    printf("Q8.Enter any +ve/-ve number ");
    scanf("%d",&num);

    switch(num)
    {
        case -999999999 ... -1: //notable: 4 byte var. limit < 10-digit no.
            num = -num;
            printf("%d",num);
            break;
        case 1 ... 999999999:
                num = -1*num;
                printf("%d",num);
                break;
        default:
            printf("Zero is neither -ve nor +ve");
    }
    printf("\n");
    printf("\n");
    return 0;
}

//9.Program to Convert even number into its upper nearest odd number Switch Statement.
void nine()
{
    int num;
    printf("Q9.Enter any even number: ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
            num+=1;
            printf("%d",num);
            break;
        default: printf("Please input even no. only!"); break;
    }
    printf("\n");
    printf("\n");
}

//10.C program to find all roots of a quadratic equation using switch case
void ten()
{
    int a,b,c,_D,root1,root2;
    printf("Q10.Enter co-efficients of a Quadratic equation,a,b,c as (ax^2+bx+c): ");
    scanf("%d%d%d",&a,&b,&c);

    _D=b*b-4*a*c;

    switch(_D)
    {
    case 0: //two equal real roots
        root1=(-b+sqrt(b*b-4*a*c))/2*a;
        root2=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("Roots are %d and %d which are real & equal.",root1,root2);
        break;

    case 1 ... 999999999: //Real & Distinct roots
        root1=(-b+sqrt(b*b-4*a*c))/2*a;
        root2=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("Roots are %d and %d which are real & distinct.",root1,root2);
        break;

    default: printf("NO REAL ROOTS!");
    }
    printf("\n");
    getch();
}

