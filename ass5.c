//ASSIGNMENT 5 - More on Iterative Control Statements

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

//1. Write a program to print MySirG N times on the screen
one()
{
    int n;
    printf("Enter a nubmer ");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("MySirG ");
        n--;
    }
    printf("\n");
}

//2. Write a program to print the first N natural numbers.
two()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d, ",i++);
    }
    printf("\n");
}

//3. Write a program to print the first N natural numbers in reverse order
three()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>=1)
        printf("%d,",n--);
    printf("\n");
}

//4. Write a program to print the first N odd natural numbers
four()
{
    int n,i;
    printf("Input n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d, ",i*2+1);
    printf("\n");
}

//5. Write a program to print the first N odd natural numbers in reverse order.
five()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d, ",2*n-1);
        n--;
    }
    printf("\n");
}

//6. Write a program to print the first N even natural numbers
six()
{
    int n,i=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*2);
        i++;
    }
    printf("\n");
}

//7. Write a program to print the first N even natural numbers in reverse order
seven()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d ",n*2);
        n--;
    }printf("\n");
}

//8. Write a program to print squares of the first N natural numbers
eight()
{
    int i=1,sq;
    printf("Enter N ");
    scanf("%d",&sq);
    while(i<=sq)
    {
        printf("%d ",i*i);
        i++;
    }
    printf("\n");
}

//9. Write a program to print cubes of the first N natural numbers
nine()
{
    int i=1,cb;
    printf("Enter a number ");
    scanf("%d",&cb);
    for(i;i<=cb;i++)
        printf("%d ",i*i*i);
        printf("\n");
}

//10. Write a program to print a table of N.
ten()
{
    printf("\nPrinting table of Input nubmer\n");
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        printf("%d ",n*i);
        i++;
    }while(i<=10);
    printf("\n");
}
