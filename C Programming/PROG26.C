/*PROG26 - Program to calculate X^Y using while*/
/*Authors: Asmit De, Shinjini Basu    Date: 14.08.2008*/

#include <stdio.h>
#include <conio.h>

float Power(float i,int j)
{
    float result=1;
    while(j>=1)
    {
	result=result*i;
	j--;
    }
    return result;
}

void main()
{
    float x,r; int y;
    clrscr();

    printf("\nEnter the values of X & Y for calculation of X^Y "); scanf("%f %d",&x,&y);
    r=Power(x,y);
    printf("\nThe value of X^Y is %f",r);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter the values of X & Y for calculation of X^Y 2 6

The value of X^Y is 64.000000

Press any key to continue.....
*/
/*Output 2:
Enter the values of X & Y for calculation of X^Y 2.5 6

The value of X^Y is 244.140625

Press any key to continue.....
*/