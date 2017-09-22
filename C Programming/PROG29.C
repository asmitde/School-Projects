/*PROG29 - Program to reverse the digits of a number*/
/*Authors: Asmit De, Shinjini Basu    Date: 28.08.2008*/

#include <stdio.h>
#include <conio.h>

long int RevDig(long int n)
{
    long int r=0; int d;
    do
    {
       d=n%10; n=n/10;
       r=(r+d)*10;
    }while(n!=0);
    return r/10;
}

void main()
{
    long int num,rev;
    clrscr();

    printf("\nEnter a number "); scanf("%ld",&num);
    rev=RevDig(num);
    printf("\nReverse digit number: %ld",rev);

    if(num==rev)
      printf("\nReverse digit number is same as original");
    else
      printf("\nReverse digit number is not same as original");

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter a number 56892

Reverse digit number: 29865
Reverse digit number is not same as original

Press any key to continue.....
*/
/*Output 2:
Enter a number 32123

Reverse digit number: 32123
Reverse digit number is same as original

Press any key to continue.....
*/

