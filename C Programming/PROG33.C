/*PROG33 - Program to calculate coefficient of X^r in binomial expansion of (1+X)^n*/
/*Authors: Asmit De, Shinjini Basu    Date: 04.09.2008*/

#include <stdio.h>
#include <conio.h>

double Factorial(int num)
{
    double fact=1;
    while(num>=1)
	 fact=fact*num--;
    return fact;
}

void main()
{
    int n,r; double fn,fr,fnr,nCr;
    clrscr();

    printf("Expression: (1+X)^n\n");
    printf("Enter the value of n "); scanf("%d",&n);
    printf("Enter the value of r for calculating coefficient of X^r "); scanf("%d",&r);

    fn=Factorial(n);
    fr=Factorial(r);
    fnr=Factorial(n-r);
    nCr=fn/(fr*fnr);

    printf("\nThe coefficient of X^%d in binomial expansion of (1+X)^%d is %lf",r,n,nCr);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Expression: (1+X)^n
Enter the value of n 8
Enter the value of r for calculating coefficient of X^r 2

The coefficient of X^2 in binomial expansion of (1+X)^8 is 28

Press any key to continue.....
*/
/*Output 2:
Expression: (1+X)^n
Enter the value of n 15
Enter the value of r for calculating coefficient of X^r 3

The coefficient of X^3 in binomial expansion of (1+X)^15 is 455.000000

Press any key to continue.....
*/
/*Output 3:
Expression: (1+X)^n
Enter the value of n 5
Enter the value of r for calculating coefficient of X^r 5

The coefficient of X^5 in binomial expansion of (1+X)^5 is 1.000000

Press any key to continue.....
*/
/*Output 4:
Expression: (1+X)^n
Enter the value of n 15
Enter the value of r for calculating coefficient of X^r 0

The coefficient of X^0 in binomial expansion of (1+X)^15 is 1.000000

Press any key to continue.....
*/