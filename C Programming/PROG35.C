/*PROG35 - Program to calculate sum of a series*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float x,sum=1,num,den,x_gp,f=1; int n,i;
    clrscr();

    printf("Enter the value of x ");scanf("%f",&x);
    printf("Enter the number of terms of the series to be calculated "); scanf("%d",&n);
    x_gp=-x;

    for(i=1;i<=n-1;i++)
    {
       num=3*i*x_gp;
       x_gp=x_gp*x*x*x*(-1);
       den=(i+8)*f;
       f=f*(2*i+1)*2*i;
       sum=sum+num/den;
    }

    printf("\nThe sum of series till %d terms is %f ",n,sum);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Enter the value of x 5
Enter the number of terms of the series to be calculated 15

The sum of series till 15 terms is 1.537763

Press any key to continue.....
*/