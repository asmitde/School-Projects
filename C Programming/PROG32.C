/*PROG32 - Program to check if a number is prime*/
/*Authors: Asmit De, Shinjini Basu    Date: 29.08.2008*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num,i,flag=0;
    clrscr();

    printf("\nEnter a number "); scanf("%d",&num);

    for(i=2;i<=sqrt(num);i++)
       if(num%i==0) flag=1;

    if(flag==0)
      printf("\n\n%d is a prime number",num);
    else
      printf("\n\n%d is a composite number",num);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter a number 31

31 is a prime number

Press any key to continue.....
*/
/*Output 2:
Enter a number 35

35 is a composite number

Press any key to continue.....
*/