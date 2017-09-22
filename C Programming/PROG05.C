/*PROG05*/
/*Program to calculate area of square from coordinates*/
/*Authors: Asmit De, Shinjini Basu   Date: 03.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    int x1,y1,x2,y2,area;

    clrscr();

    printf("\nEnter x1 ");
    scanf("%d",&x1);
    printf("\nEnter y1 ");
    scanf("%d",&y1);
    printf("\nEnter x2 ");
    scanf("%d",&x2);
    printf("\nEnter y2 ");
    scanf("%d",&y2);

    area=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    printf("\nArea of square = %d sq. units",area);

    printf("\n\n\n\nPress any key to continue......");
    getch();
    return 0;
}