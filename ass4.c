//ASSIGNMENT 4 - Iterative Control Statements
#include <stdio.h>
#include <conio.h>

main()
{
    one();
    two();
    three();
    four();
    five();
    six();
    seven();
    eight();
    nine();
    ten();
}

//1. Write a program to print MySirG 5 times on the screen
one()
{
    int i=1;
    while(i<=5)
    {
        printf("MySirG ");
        i++;
    }

}

//2. Write a program to print the first 10 natural numbers.
two()
{
    int i=1;
    for(;i<=10;i++)
        printf("%d ",i);
}

//3. Write a program to print the first 10 natural numbers in reverse order
three()
{
    int z;
    for(z=10;z>=1;z--)
        printf("%d ",z);
}

//4. Write a program to print the first 10 odd natural numbers
four()
{
    int x;
    for(x=1;x<=19;x=x+2)
    {
        printf("%d ",x);
    }
}

//5. Write a program to print the first 10 odd natural numbers in reverse order.
five()
{
    int rev;
    for(rev=19;rev>=1;rev-=2)
    {
        printf("%d ",rev);
    }
}

//6. Write a program to print the first 10 even natural numbers
six()
{
    int even=1;
    while(even<=10)
    {
        printf("%d ",2*even++);
    }

}

//7. Write a program to print the first 10 even natural numbers in reverse order
seven()
{
    int rev_e;
    for(rev_e=20;rev_e>=2;rev_e-=2)
        printf("%d ",rev_e);
}

//8. Write a program to print squares of the first 10 natural numbers
eight()
{
    int sq;
    for(sq=1;sq<=10;sq++)
        printf("%d ",sq*sq);
}

//9. Write a program to print cubes of the first 10 natural numbers
nine()
{
    int cube=1;
    do
    {
        printf("%d ",cube*cube*cube);
        cube++;
    }while(cube<=10);
}

//10. Write a program to print a table of 5
ten()
{
    int _5;
    for(_5=1;_5<=10;_5++)
        printf("%d ",_5*5);
}
