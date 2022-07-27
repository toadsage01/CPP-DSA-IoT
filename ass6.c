//ASSIGNMENT 6 - Use any loop

#include <stdio.h>
#include <conio.h>
void main()
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
//1. Write a program to calculate sum of first N natural numbers
one()
{
    printf("Sum of N naturals\n");
    int i=1,n,s=0;
    printf("Enter value of N ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("%d",s);
    printf("\n");
}

//2. Write a program to calculate sum of first N even natural numbers
two()
{   printf("Sum of first N even naturals\n");
    int i=2,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(n;n>=1;n--)
    {
        s=s+i;
        i+=2;
    }
    printf("sum = %d",s);
    printf("\n");
}

//3. Write a program to calculate sum of first N odd natural numbers
three()
{   printf("Sum of first N odd naturals\n");
    int i=1,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(n;n>=1;n--)
    {
        s=s+i;
        i+=2;
    }
    printf("sum = %d",s);
    printf("\n");
}

//4. Write a program to calculate sum of squares of first N natural numbers
four()
{
    printf("Sum of squares of first N naturals\n");
    int i=1,n,s=0;
    printf("Enter value of N ");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        s=s+(i*i);
    }
    printf("%d",s);
    printf("\n");

}
//5. Write a program to calculate sum of cubes of first N natural numbers
five()
{
    printf("Sum of cubes of first N naturals\n");
    int i=1,n,s=0;
    printf("Enter value of N ");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        s=s+(i*i*i);
    }
    printf("%d",s);
    printf("\n");
}

//6. Write a program to calculate factorial of a number
six()
{
    printf("Factorial!\n");
    int i=1,n,f=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial is %d",f);
}

//7. Write a program to count digits in a given number
//!(zeroes unable to operate upon)
seven()
{
    printf("Counting digits\n");
    int num,cnt=0;
    printf("Input a number ");
    scanf("%d",&num);
    while(num>=1)
    {
        num/=10;
        cnt++;
    }
    printf("No. of digit, %d",cnt);
}

//8. Write a program to check whether a given number is a Prime number or not
eight()
{
    int n,i=2;
    printf("Enter any number ");
    scanf("%d",&n);
    while(n>=i)
    {
        if(n%i==0)
        {
            if(n==i)
            {
                printf("is a Prime no.");
                break;
            }
            else
            {
                printf("Not a prime no.");
                break;
            }
        }
        i++;
    }
}
//9. Write a program to calculate LCM of two numbers
nine()
{
    printf("LCM\n");
    int a,b,i=2,st=1;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    while(a!=1 || b!=1)
    {
        if(a%i==0 || b%i==0)
        {
            if(a%i==0 && b%i==0)
            {
                st*=i;
                a/=i;
                b/=i;
            }
            else if(a%i==0 && b%i!=0)
            {
                st*=i;
                a/=i;
            }
            else if(a%i!=0 && b%i==0)
            {
                st*=i;
                b/=i;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i=i+1;
        }
    }
    printf("LCM: %d",st);

}

//10. Write a program to reverse a given number
ten()
{
    printf("Reverse\n");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d",n%10);
        n/=10;
    }
}
