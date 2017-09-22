/*PROG12 - Program to calculate actual mass of an atom from atomic weight*/
/*Authors: Asmit De, Shinjini Basu   Date:10.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    float am,aw;
    float amu=1.6603E-24;
    clrscr();

    printf("\nEnter atomic weight ");
    scanf("%f",&aw);

    am=aw*amu;

    printf("\n\nActual mass of atom = %e gm",am);

    printf("\n\n\n\nPress any key to continue......");
    getch();
    return 0;
}