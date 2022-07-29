//ASSIGNMENT 7 - Iterative Control Statements (Part - 2)

#include <stdio.h>
#include <conio.h>
#include <math.h>

void one(); void two(); void three(); void four(); void five(); void six();
void seven(); void eight(); void nine(); void ten();

int main()
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

    return 0;
}

//1. Write a program to find the Nth term of the Fibonnaci series.
void one()
{
    printf("Nth term of the Fibonnaci series\n");
    int a=-1,b=1,n,s,i=1;
    printf("Enter the value of N ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=a+b;
        a=b;
        b=s;
        i++;
    }
    printf("%dth term is %d ",n,s);
    printf("\n\n");
}


//2. Write a program to print first N terms of Fibonacci series
void two()
{
    printf("Printing first N terms of Fibonnaci series\n");
    int a=-1,b=1,n,s,i=1;
    printf("Enter the value of N ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
        i++;
    }
    printf("\n\n");
}


//3. Write a program to check whether a given number is there in the Fibonacci series or not.
//! It's working on online compilers & vs code, but malfunctioning when ran from code-blocks.
void three()
{
    printf("N is in Fibonnaci series or not\n");
    int a=-1,b=1,n,s;
    printf("Enter any number ");
    scanf("%d",&n);
    while(n>=s)
    {
        s=a+b;
        if(n==s)
        {
            printf("yes, Input no. is in the Fibonacci series",s);
            break;
        }
        a=b;
        b=s;
    }
    if(n!=s)
        printf("Not in the Fibonacci series");

    printf("\n\n");
}


//4. Write a program to calculate HCF of two numbers
void four()
{
    printf("HCF\n");
    int a,b,i=2,s=1;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    while(i<=a)
    {
        if(a%i==0 && b%i==0)
        {
            s=s*i;
            a=a/i; b=b/i;
        }
        else
            i++;
    }
    printf("HCF = %d",s);
    printf("\n\n");
}


//5. Write a program to check whether two given numbers are co-prime numbers or not
void five()
{
    printf("Co-Prime or not!\n");
    int a,b,i=2,s=1;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    while(i<=a)
    {
        if(a%i==0 && b%i==0)
        {
            s=s*i;
            a=a/i; b=b/i;
        }
        else
            i++;
    }
    if(s!=1)
    {
        printf("Not co-Prime!");
    }
    else
        printf("co-prime");
    printf("\n\n");
}


//6. Write a program to print all Prime numbers under 100
void six()
{
    printf("All Prime nos. under 100\n");
    int s=2;
    for(int i=2;i<=100;i++)
    {
        while(i>=s)
        {
            if(i%s==0)
            {
                if(i==s)
                {
                    printf("%d ",i);
                    break;
                }
                else
                    break; //putting a continue instead, will cause the program to recurse the while loop!
            }
            else
                s++;
        }
        s=2;
    }
    printf("\n\n");
}


//7. Write a program to print all Prime numbers between two given numbers
void seven()
{
    printf("Prime nos. b/w an input range (exclusive)\n");
    int x,y,i=2;
    printf("Enter a range ");
    scanf("%d%d",&x,&y);
    for(x++;x<y;x++)
    {
        while(x>=i)
        {
            if(x%i==0)
            {
                if(x==i)
                {
                    printf("%d ",x);
                    break;
                }
                else
                    break;
            }
            else i++;
        }
        i=2;
    }
    printf("\n\n");
}


//8. Write a program to find next Prime number of a given number
void eight()
{
    printf("Next prime no. of a input prime no.\n");
    printf("Enter any number ");
    int n,i=2;
    scanf("%d",&n);
    n++;
    while(i<=n)
    {
        if(n%i==0)
        {
            if(n==i)
            {
                printf("%d",n);
                break;
            }
            else{n++;i=2;}
        }
        else{i++;}
    }
    printf("\n\n");
}


//9. Write a program to check whether a given number is an Armstrong number or not
void nine()
{
    printf("Q9.Armstrong no. or Not?...\n");
    int n;
    printf("Enter any number ");
    scanf("%d",&n);

    int c=n,i=0,_n=1,_n2=1,_n3=1,_n4=1,_n5=1,_n6=1,_n7=1,_n8=1,_n9=1;
    int x;
        while(c>0) //to find no. of digits
        {
            c=c/10;
            i++;
        }
        while(i>0) //to power the digit n-th time & sum
        {
            if(n<=9)
            {
               _n=n;
               if(_n==n)
                  x=1;
            }
            else if(n>=10 && n<=99)
            {
                _n=_n*(n%10);
                _n2=_n2*(n/10)%10;
                if(_n+_n2==n)
                    x=1;
            }
            else if(n>=100&&n<=1000)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                if(_n+_n2+_n3==n)
                    x=1;
            }
            else if(n>=1000&&n<=9999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                if(_n+_n2+_n3+_n4==n)
                    x=1;
            }
            else if(n>=10000&&n<=99999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                _n5*=(n/10000)%10;
                if(_n+_n2+_n3+_n4+_n5==n)
                    x=1;
            }
            else if(n>=100000&&n<=999999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                _n5*=(n/10000)%10;
                _n6*=(n/100000)%10;
                if(_n+_n2+_n3+_n4+_n5+_n6==n)
                    x=1;
            }
            else if(n>=1000000&&n<=9999999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                _n5*=(n/10000)%10;
                _n6*=(n/100000)%10;
                _n7*=(n/1000000)%10;
                if(_n+_n2+_n3+_n4+_n5+_n6+_n7==n)
                    x=1;
            }
            else if(n>=10000000&&n<=99999999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                _n5*=(n/10000)%10;
                _n6*=(n/100000)%10;
                _n7*=(n/1000000)%10;
                _n8*=(n/10000000)%10;
                if(_n+_n2+_n3+_n4+_n5+_n6+_n7+_n8==n)
                    x=1;
            }
            else if(n>=100000000&&n<=999999999)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                _n4*=(n/1000)%10;
                _n5*=(n/10000)%10;
                _n6*=(n/100000)%10;
                _n7*=(n/1000000)%10;
                _n8*=(n/10000000)%10;
                _n9*=(n/100000000)%10;
                if(_n+_n2+_n3+_n4+_n5+_n6+_n7+_n8+_n9==n)
                    x=1;
            }
            else{};

            i--;
        }
        x==1?printf("It is an Armstrong no."):printf("It is not an Armstrong number");
    printf("\n\n\n");
}


//10. Write a program to print all Armstrong numbers under 1000
void ten()
{
    printf("All Armstrong no. under 1000\n");
     //0-9,153,370,371,407

    for(int n=0;n<1000;n++)
    {   int c=n,i=0,_n=1,_n2=1,_n3=1;
        while(c>0)
        {
            c=c/10;
            i++; //2
        }
        while(i>0) //2,1
        {
            if(n<=9)
            {
               _n=n;
               if(_n==n)
                    printf("%d ",n);
            }
            else if(n>=10 && n<=99)
            {
                _n=_n*(n%10);
                _n2=_n2*(n/10)%10;

                if(_n+_n2==n)
                    printf("%d ",n);
            }
            else if(n>=100&&n<=1000)
            {
                _n*=(n%10);
                _n2*=(n/10)%10;
                _n3*=(n/100)%10;
                if(_n+_n2+_n3==n)
                    printf("%d ",n);
            }
            else{};

            i--;
        }
    }
printf("\n\n\n");
}
