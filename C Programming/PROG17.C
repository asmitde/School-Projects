/*PROG17 - Program to calculate simultaneous equations*/
/*Authors: Asmit De, Shinjini Basu   Date:18.07.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float a1,b1,c1,a2,b2,c2,flag;
    clrscr();

    printf("\nEquation Format:\na1 * x + b1 * y + c1 = 0\na2 * x + b2 * y + c2 = 0");
    printf("\n\nEnter a1 "); scanf("%f",&a1);
    printf("\nEnter b1 "); scanf("%f",&b1);
    printf("\nEnter c1 "); scanf("%f",&c1);
    printf("\n\nEnter a2 "); scanf("%f",&a2);
    printf("\nEnter b2 "); scanf("%f",&b2);
    printf("\nEnter c2 "); scanf("%f",&c2);

    (a1*b2-a2*b1==0)?(puts("\nLines are parallel")):(flag=1);

    if(flag==1)
      printf("\nx=%f\ny=%f",(b1*c2-b2*c1)/(a1*b2-a2*b1),(c1*a2-c2*a1)/(a1*b2-a2*b1));

    printf("\n\n\n\nPress any key to continue......."); getch();
}
/*Output 1:
Equation Format:
a1 * x + b1 * y + c1 = 0
a2 * x + b2 * y + c2 = 0

Enter a1 2
Enter b1 3
Enter c1 -1

Enter a2 4
Enter b2 5
Enter c2 3

x=-7.000000
y=5.000000

Press any key to continue.......
*/
/*Output 2:
Equation Format:
a1 * x + b1 * y + c1 = 0
a2 * x + b2 * y + c2 = 0

Enter a1 2
Enter b1 -4
Enter c1 1

Enter a2 6
Enter b2 -12
Enter c2 -5

Lines are parallel

Press any key to continue.......
*/