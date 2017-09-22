/*PROG23 - Program to find the floor of a number*/
/*Authors: Asmit De, Shinjini Basu    Date: 08.08.2008*/

#include <stdio.h>
#include <conio.h>

float floor(float n)
{
    int fl=n;
    if(n>=0 || n==(float)fl)
      return ((float)fl);
    else
      return ((float)fl-1);
}
void main()
{
    float num,f;
    clrscr();

    printf("\nEnter a number "); scanf("%f",&num);
    f=floor(num);

    printf("\nFloor of %f is %f",num,f);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter a number 4.95

Floor of 4.950000 is 4.000000

Press any key to continue.....
*/
/*Output 2:
Enter a number 7.0

Floor of 7.000000 is 7.000000

Press any key to continue.....
*/
/*Output 3:
Enter a number -2.5

Floor of -2.500000 is -3.000000

Press any key to continue.....
*/
/*Output 4:
Enter a number -5.0

Floor of -5.000000 is -5.000000

Press any key to continue.....
*/