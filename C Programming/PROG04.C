/*PROG04 - Program to find area & perimeter of rectangle*/
/*Authors: Asmit De, Shinjini Basu   Date: 03.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    int len,br,area,perimeter;
    clrscr();

    printf("\nEnter length of rectangle ");
    scanf("%d",&len);
    printf("\nEnter breadth of rectangle ");
    scanf("%d",&br);

    area=len*br;
    perimeter=2*(len+br);

    printf("\nArea of rectangle = %d sq. units",area);
    printf("\nPerimeter of rectangle = %d units",perimeter);

    printf("\n\n\n\nPress any key to continue......");
    getch();
    return 0;
}