/*PROG34 - Program to calculate sine series*/
/*Authors: Asmit De, Shinjini Basu    Date: 04.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,sn=-1; double x,sum,ti;
    clrscr();

    printf("Enter the value of x (in radians) "); scanf("%lf",&x);
    printf("Enter the value of n (n=no. of terms in series) "); scanf("%d",&n);
    ti=sum=x;

    for(i=3;i<=n*2;i+=2)
    {
       ti=ti*(x*x)/(i*(i-1));
       sum=sum+(ti*sn);
       sn=sn*(-1);
    }

    printf("\nsin(%lf)=%lf",x,sum);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter the value of x (in radians) 2.094395
Enter the value of n (n=no. of terms in series) 15

sin(2.094395)=0.866025

Press any key to continue.....
*/
/*Output 2:
Enter the value of x (in radians) 4.712388
Enter the value of n (n=no. of terms in series) 20

sin(4.712388)=-1.000000

Press any key to continue.....
*/
/*Output 3:
Enter the value of x (in radians) 0
Enter the value of n (n=no. of terms in series) 5

sin(0.000000)=0.000000

Press any key to continue.....
*/