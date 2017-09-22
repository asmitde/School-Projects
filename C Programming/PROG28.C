/*PROG28 - Program to generate Armstrong numbers between 1 & 1000*/
/*Authors: Asmit De, Shinjini Basu    Date: 22.08.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i=1,n,d,s;
    clrscr();

    printf("Armstrong Numbers between 1 & 1000 are:\n\n");
    while(i<=1000)
    {
	s=0; n=i;
	while(n!=0)
	{
	    d=n%10; /*Extracting last digit of n*/
	    s=s+(d*d*d); /*Adding extracted digit^3 to s*/
	    n=n/10; /*Int-dividing by 10 to remove last digit of n*/
	}
	if(s==i) printf("%d  ",i);
	i++;
    }

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Armstrong Numbers between 1 & 1000 are:

1  153  370  371  407

Press any key to continue.....
*/