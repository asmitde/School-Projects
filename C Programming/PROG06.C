/*PROG06*/
/*Program to calculate cost of white-washing a room*/
/*Authors: Asmit De, Shinjini Basu   Date: 03.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    int len,br,ht,areatot,x,costtot;

    clrscr();

    printf("\nEnter length of room in metres ");
    scanf("%d",&len);
    printf("\nEnter breadth of room in metres ");
    scanf("%d",&br);
    printf("\nEnter height of room in metres ");
    scanf("%d",&ht);
    printf("\nEnter white-washing cost rate (Rs/sq.m) ");
    scanf("%d",&x);

    areatot=2*(len+br)*ht+(len*br);
    costtot=x*areatot;

    printf("\nTotal cost of white-washing is Rs %d",costtot);

    printf("\n\n\n\nPress any key to continue......");
    getch();
    return 0;
}