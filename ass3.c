//ASSIGNMENT 3 - Decision Control Statements
//Each question is solved with a function made & called within the main()
//Comment a call to stop it's execution

#include <stdio.h>
#include <conio.h>

void one(); void two(); void three(); void four(); void five(); void six(); void seven(); void eight(); void nine(); void ten();
void eleven(); void twelve(); void thirteen(); void fourteen(); void fifteen(); void sixteen(); void seventeen(); void eighteen();


void main() //....
{
    one();
                printf("\n\n");
    two();
                printf("\n\n");
    three();
                printf("\n\n");
    four();
                printf("\n\n");
    five();
                printf("\n\n");
    six();
                printf("\n\n");
    seven();
                printf("\n\n");
    eight();
                printf("\n\n");
    nine();
                printf("\n\n");
    ten();
                printf("\n\n");
    eleven();
                printf("\n\n");
    twelve();
                printf("\n\n");
    thirteen();
                printf("\n\n");
    fourteen();
                printf("\n\n");
    fifteen();
                printf("\n\n");
    sixteen();
                printf("\n\n");
    seventeen();
                printf("\n\n");
    eighteen();
}


//1. WAP to check whether a given number is positive or non-positive.
void one()
{
    printf("1.Positive/Non-Positive\n");
    int x;
    printf("Enter a nubmer ");
    scanf("%d",&x);
    x>0?printf("Positive"):printf("Non-positive");
}

//2. WAP to check whether a given number is divisible by 5 or not
void two()
{
    printf("2.Checking divisibility by 5\n");
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x%5==0)
        printf("Divisible by 5");
    else
        printf("Non-Divisible by 5");
}

//3. WAP to check whether a given number is an even number or an odd number.
void three()
{
    printf("3.Even or Odd\n");
    int n;
    printf("Enter an Integer: ");
    scanf("%d",&n);
    n%2==0?printf("Even"):printf("Odd");
}

//4. WAP to check whether a given number is an even number or and odd number without using % operator.
void four()
{
    printf("4.Checking even/odd without using %% operator\n");
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x==x/2*2)
        printf("Even");
    else
        printf("Odd");
}

//5. WAP to check whether a given number is a three-digit number or not.
void five()
{
    printf("5.Checking number is 3-digit or not\n");
    int num,s=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num>0)
    {
        s++;
        num/=10;
    }
    s==3?printf("It is a 3 digit no."):printf("Not a 3-digit number");
}

//6. Write a program to print greater between two numbers. Print one number *if both are the same.
void six()
{
    printf("6.Comparing two nos.\n");
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    a>b?printf("%d is greater",a):a==b?printf("Both are same"):printf("%d is greater",b);

}

//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
void seven()
{
    printf("7.Checking nature of Quadratic roots\n");
    int a,b,c,D;
    printf("Enter coefficients/constants: ");
    scanf("%d%d%d",&a,&b,&c); //!for now, only expecting integer values...
    D=b*b-4*a*c;
    D>0?printf("Real & Distinct"):D==0?printf("Real & Equal"):printf("Roots are Imaginary");
}

//8. Write a program to check whether a given year is a leap year or not.
void eight()
{
    printf("8.Checking Leap year or not!..\n");
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leap year");
    }
    else
        printf("Not a leap year!");
}

//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
void nine()
{
    printf("9.Comparing b/w three numbers\n");
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greatest!",a);
        else
            printf("%d is greatest!",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("%d is greatest!",b);
        else
            printf("%d is greatest!",c);
    }
}

//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
void ten()
{
    printf("10.Profit/loss %\n");
    float cp,sp;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);

    if(cp>sp)
    {
        float loss=cp-sp;
        printf("Loss percent = %f ",loss/cp*100);
    }
    else
    {
        float profit=sp-cp;
        printf("Profit percent = %f",profit/cp*100);
    }
}

//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
void eleven()
{
    printf("11.----Score card----\n");
    float j,k,l,m,n;
    printf("Marks obtained in Hindi: ");
    scanf("%f",&j);
    printf("Marks obtained in Phy: ");
    scanf("%f",&k);
    printf("Marks obtained in Chem: ");
    scanf("%f",&l);
    printf("Marks obtained in Bio: ");
    scanf("%f",&m);
    printf("Marks obtained in Eng: ");
    scanf("%f",&n);

    if(j>32&&k>32&&l>32&&m>32&&n>32)
        printf("Student have passed the examination with aggregate percentage of %f%%",(j+k+l+m+n)/5.0);
    else
        printf("Student has failed the examination");
}

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
void twelve()
{
    printf("12.lowercase / UPPERCASE\n");
    char x;
    printf("Input any alphabet: ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("UPPERCASE");
    else if(x>=97 && x<=122)
        printf("lowercase");
    else
        printf("N/A");
}

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
void thirteen()
{
    printf("13.Divisible by 3 & 2\n");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
        printf("Divisible by both!");
    else
        printf("Not-Divisible by both!");
}

//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
void fourteen()
{
    printf("14.Checking if divisible by 7 or 3\n");
    int n,z;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0 && n%3!=0)
    {
        z=7;
        printf("Input value %d is divisible by %d only",n,z);
    }
    else if(n%3==0 && n%7!=0)
    {
        z=3;
        printf("Input value %d is divisible by %d only",n,z);
    }
    else if(n%7==0&&n%3==0)
    {
        printf("Input value is divisible by both 7 & 3");
    }
    else
        printf("Not divisible by any");
}

//15. Write a program to check whether a given number is positive, negative or zero.
void fifteen()
{
    printf("15.Positive, Negative or Zero\n");
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    x>0?printf("Positive"):x<0?printf("Negative"):printf("Zero");

}

//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
void sixteen()
{
    printf("16. ...Checking if - ABC..., abc..., 0-9, *special character*\n");
    char input;
    printf("Enter any character ");
    scanf("%c",&input);

    if(input>=65 && input<=90)
        printf("UPPERCASE");
    else if(input>=97 && input<=122)
        printf("lowercase");
    else if(input>=48 && input<=57)
        printf("Digit");
    else if((input>=33 && input<=47)|| (input>=58 && input<=64) || (input>=91 && input<=96) || (input>=123 && input<=126))
        printf("Special character!");
    else
        printf("N/A");
}

//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
void seventeen()
{
    printf("17.Validity of a Triangles\n");
    float s1,s2,s3;
    printf("Enter value of sides: ");
    scanf("%f%f%f",&s1,&s2,&s3);

    s1+s2>s3 ? s2+s3>s1 ? s1+s3>s2 ? printf("Valid Triangle"):printf("Invalid"):printf("Invalid"):printf("Invalid");

}

//18. Write a program which takes the month number as an input and display number of days in that month
void eighteen()
{
    printf("18.No. of days in a month!\n");
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
            int ans;
            printf("Is it a Leap year? (y-121/n-110) ");
            scanf("%d",&ans);
            if(ans==121)
            {
                printf("February - 29 days"); break;
            }
            else if(ans==110)
            {
                printf("February - 28 Days"); break;
            }
            else
                printf("N/A"); break;
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
}
