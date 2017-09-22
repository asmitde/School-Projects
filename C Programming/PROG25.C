/*PROG25 - Program to find factorial of a number using while*/
/*Authors: Asmit De, Shinjini Basu    Date: 14.08.2008*/

#include <stdio.h>
#include <conio.h>

float Factorial(int n)
{
    float fact=1;
    while(n>=1)
    {
	fact=fact*n;
	n--;
    }
    return fact;
}

void main()
{
    int num; float fact;
    clrscr();

    printf("\nEnter a number "); scanf("%d",&num);
    fact=Factorial(num);
    printf("\nFactorial of %d is %f",num,fact);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Enter a number 6

Factorial of 6 is 720.000000

Press any key to continue.....
*/