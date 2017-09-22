/*PROG24 - Program to round off a double number to different places of decimal*/
/*Authors: Asmit De, Shinjini Basu    Date: 08.08.2008*/

#include <stdio.h>
#include <conio.h>

double floor(double n)
{
    int fl=n;
    if(n>=0 || n==fl)
      return fl;
    else
      return fl-1;
}

double Round_to_Int(double in)
{   return floor(in+0.5);}

double Round_to_Tenths(double tn)
{   return floor(tn*10.0+0.5)/10.0;}

double Round_to_Hundredths(double hu)
{   return floor(hu*100.0+0.5)/100.0;}

void main()
{
    double num,i,t,h;
    clrscr();

    printf("\nEnter a number "); scanf("%lf",&num);
    i=Round_to_Int(num);
    t=Round_to_Tenths(num);
    h=Round_to_Hundredths(num);

    printf("\nRound off value to nearest integer = %lf",i);
    printf("\nRound off value to a single decimal place = %lf",t);
    printf("\nRound off value to two decimal places = %lf",h);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
Enter a number 25.6382

Round off value to nearest integer = 26.000000
Round off value to a single decimal place = 25.600000
Round off value to two decimal places = 25.640000

Press any key to continue.....
*/
/*Output 2:
Enter a number -25.6382

Round off value to nearest integer = -26.000000
Round off value to a single decimal place = -25.600000
Round off value to two decimal places = -25.640000

Press any key to continue.....
*/