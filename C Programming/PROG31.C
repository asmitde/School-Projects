/*PROG31 - Program to check if a number is a factorial number*/
/*Authors: Asmit De, Shinjini Basu    Date: 29.08.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    long int num,n,d=1;
    clrscr();

    printf("\nEnter a number "); scanf("%ld",&num);

    for(n=num;n>1;n=n/d++)
    {
       if(n%d!=0)
       {  printf("\n\n%ld is not a factorial number",num); break;}

       if(n/d==1)
       {  printf("\n\n%ld is a factorial number",num); break;}
    }

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter a number 720

720 is a factorial number

Press any key to continue.....
*/
/*Output 2:
Enter a number 25

25 is not a factorial number

Press any key to continue.....
*/