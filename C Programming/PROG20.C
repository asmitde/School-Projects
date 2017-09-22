/*PROG20 - Program to Issue Comprehensive Policy*/
/*Authors: Asmit De, Shinjini Basu   Date:24.07.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int age,acr,man; float pre; long int val;
    clrscr();

    printf("\nEnter your age (in years) "); scanf("%d",&age);
    printf("\nEnter the price of your car (in Rs) "); scanf("%ld",&val);
    printf("\nIs your car manufactured in India? (Enter 1 for yes/Enter 2 for no) "); scanf("%d",&man);
    printf("\nHow many years ago did you last have an accident? "); scanf("%d",&acr);

    if(age>=20 && man==1 && (acr>4 || acr==0))
    {
      pre=0.2*val/100.0;
      printf("\n\nComprehensive Policy is issued. Premium=Rs %f",pre);
    }
    if(age>=20 && man==2 && (acr>4 || acr==0))
    {
      pre=0.3*val/100.0;
      printf("\n\nComprehensive Policy is issued. Policy holder to pay the first Rs 200/-. Premium=Rs %f",pre);
    }
    if(age<20 && man==2 && (acr>4 || acr==0))
    {
      pre=0.2*val/100.0;
      printf("\n\nComprehensive Policy is issued. Policy holder to pay the first Rs 100/-. Premium=Rs %f",pre);
    }
    if(acr<=4 && acr!=0)
      printf("\n\nNo Comprehensive Policy can be issued.");

    printf("\n\n\n\nPress any key to continue......."); getch();
}
/*Output 1:
Enter your age (in years) 35
Enter the price of your car (in Rs) 420000
Is your car manufactured in India? (Enter 1 for yes/Enter 2 for no) 1
How many years ago did you last have an accident? 6

Comprehensive Policy is issued. Premium=Rs 840.000000

Press any key to continue.......
*/
/*Output 2:
Enter your age (in years) 20
Enter the price of your car (in Rs) 500000
Is your car manufactured in India? (Enter 1 for yes/Enter 2 for no) 2
How many years ago did you last have an accident? 5

Comprehensive Policy is issued. Policy holder to pay the first Rs 200/-. Premium
=Rs 1500.000000

Press any key to continue.......
*/
/*Output 3:
Enter your age (in years) 19
Enter the price of your car (in Rs) 340000
Is your car manufactured in India? (Enter 1 for yes/Enter 2 for no) 2
How many years ago did you last have an accident? 9

Comprehensive Policy is issued. Policy holder to pay the first Rs 100/-. Premium
=Rs 680.000000

Press any key to continue.......
*/
/*Output 4:
Enter your age (in years) 29
Enter the price of your car (in Rs) 440000
Is your car manufactured in India? (Enter 1 for yes/Enter 2 for no) 2
How many years ago did you last have an accident? 0

Comprehensive Policy is issued. Policy holder to pay the first Rs 200/-. Premium
=Rs 1320.000000

Press any key to continue.......
*/
/*Output 5:
Enter your age (in years) 42
Enter the price of your car (in Rs) 540000
Is your car manufactured in India? (Enter 1 for yes/Enter 2 for no) 1
How many years ago did you last have an accident? 4

No Comprehensive Policy can be issued.

Press any key to continue.......
*/