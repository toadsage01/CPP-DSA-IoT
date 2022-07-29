//ASSIGNMENT - Operators in C Language
//Please check.
#include <stdio.h>
#include <conio.h>

void one(); void two(); void three(); void four(); void five(); void six(); void seven();
void eight(); void nine(); void ten(); void eleven(); void twelve(); void thirteen();

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
    eleven();
    twelve();
    thirteen();

}

//1. Write a program to print unit digit of a given number
one()
{
    printf("Q1.print unit digit of no.\n");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d \n",n%10);
    printf("\n");
}

//2. Write a program to print a given number without its last digit.
two()
{
    printf("Q2.print no. without last digit\n");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d\n",n/10);
    printf("\n");
}



//3. Write a program to swap values of two int variables
three()
{
    printf("Q3.Swap variables value\n");
    int a,b,swapper;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    swapper=a;
    a=b;
    b=swapper;
    printf("%d %d\n",a,b);
    printf("\n");
}

//4. Write a program to swap values of two int variables without using a third variable.
four()
{
    printf("Q4. Swap variables value without 3rd variable\n");
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    printf("\n");

}

//5. Write a program to input a three-digit number and display the sum of the digits.
five()
{
    printf("Q5.sum of digits of a 3-digit no.\n");
    int a,s;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    s=a%10;
    a=a/10;
    s+=a%10;
    a=a/10;
    s+=a%10;
    printf("%d\n",s);
    printf("\n");
}



//6. Write a program which takes a character as an input and displays its ASCII code.
six()
{
    printf("Q6. ASCII code of input\n");
    char x;
    printf("Enter a character ");
    scanf("%s",&x);
    printf("ASCII code of input is %d\n",x);
    printf("\n");
}

//7. Write a program to find the position of first 1 in LSB(Least Significant Bit).
seven()
{
    int x,i=1;
    printf("Q7.Enter a number ");
    scanf("%d",&x);
    while(x!=1)
    {
        x=x/2;
        i++;
    }
    printf("Position of first 1 in LSB is %d",i);
    printf("\n");
    printf("\n");
}

//8. Write a program to check whether the given number is even or odd using a bitwise operator.
eight()
{
    printf("Q8.Number is even or odd using a bitwise operator\n");
    int num;
    printf("Enter number ");
    scanf("%d",&num);
    int ans = num%2 | 0;
    ans==0?printf("Even"):printf("Odd");
    printf("\n");
    printf("\n");
}

//9. Write a program to print size of an int, a float, a char and a double type variable
nine()
{
   printf("Q9.Size of each data types\n");
   char c;
   int d;
   float f;
   double lf;
   printf("%d byte\n",sizeof(c));
   printf("%d byte\n",sizeof(d));
   printf("%d byte\n",sizeof(f));
   printf("%d byte\n",sizeof(lf));
   printf("\n");
}


//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
ten()
{
    printf("Q10.Make the last digit of a number stored in a variable as zero\n");
    int xyz;
    printf("Enter a number ");
    scanf("%d",&xyz);

    printf("%d",xyz-xyz%10);
    printf("\n");
    printf("\n");
}

/*11. Write a program to input a number from the user and also input a digit. Append a digit in the number
and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)*/
eleven()
{
    int p,q;
    printf("Q11.Enter a number: ");
    scanf("%d",&p);
    printf("Enter a digit: ");
    scanf("%d",&q);
    printf("Result: %d",p*10+q);
    printf("\n");
}

/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
twelve()
{
    printf("Q12.Ruppee to Dollar converter\n");
    float rs;
    printf("Enter amount in Rs");
    scanf("%f",&rs);
    printf("USD $ %f",rs*76.23);
    printf("\n");
}


/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
thirteen()
{
    printf("Q13.Rotating digits towards right\n");
    int input,x;
    printf("Input a 3-digit number ");
    scanf("%d",&input); //123
    x=input%10;
    printf("Result: %d",x*100+input/10);
    printf("\n");
}
