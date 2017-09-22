/*PROG30 - Program to calculate Simple Interest*/
/*Authors: Asmit De, Shinjini Basu    Date: 28.08.2008*/

#include <stdio.h>
#include <conio.h>

float Simple_Interest(float p,float r,float t)
{    return p*r*t/100.0; }

void main()
{
    float prin,roi,tm,si; int flag=0; char ch;
    clrscr();

    do
    {
      ch=0;
      do
      {
	 if(flag!=1)
	    printf("\n\nEnter principal(Rs) ");
	 else
	    printf("\nInvalid Data: Negative values not allowed\nEnter principal (Rs) ");
	 
	 scanf("%f",&prin); if(prin==0) exit(); /*Terminates if Principal=0*/
	 flag=1;
      }while(prin<0); flag=0;

      do
      {
	 if(flag!=1)
	    printf("\nEnter rate of interest(p/c p.a.) ");
	 else
	    printf("\nInvalid Data: Negative values not allowed\nEnter rate of interest(p/c p.a.) ");
	 
         scanf("%f",&roi);
	 flag=1;
      }while(roi<0); flag=0;

      do
      {
	 if(flag!=1)
	    printf("\nEnter time(yrs) ");
	 else
	    printf("\nInvalid Data: Negative values not allowed\nEnter time(yrs) ");
	 
         scanf("%f",&tm);
	 flag=1;
      }while(tm<0);flag=0;

      si=Simple_Interest(prin,roi,tm);
      printf("\n\nSimple Interest: Rs %0.2f",si);

      printf("\n\n\Press 'C' to calculate again or any other key to exit... ");
      fflush(stdin); ch=getche();
    }while(ch=='C' || ch=='c');
}
/*Output:
Enter principal(Rs) 5000

Enter rate of interest(p/c p.a.) 5.8

Enter time(yrs) 10

Simple Interest: Rs 2900.00

Press 'C' to calculate again or any other key to exit... c

Enter principal(Rs) -4035.68

Invalid Data: Negative values not allowed
Enter principal (Rs) 4035.68

Enter rate of interest(p/c p.a.) -4.1

Invalid Data: Negative values not allowed
Enter rate of interest(p/c p.a.) 4.1

Enter time(yrs) -5.5

Invalid Data: Negative values not allowed
Enter time(yrs) 5.5

Simple Interest: Rs 910.05

Press 'C' to calculate again or any other key to exit...
*/