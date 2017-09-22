/*PROG14 - Program to interchange contents of 2 variables w/o using 3rd variable*/
/*Authors: Asmit De, Shinjini Basu   Date:10.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    int a,b;
    clrscr();

    printf("\nEnter 1st number(a) ");
    scanf("%d",&a);
    printf("\nEnter 2nd number(b) ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n\nInterchanged contents:");
    printf("\n\na=%d\nb=%d",a,b);

    printf("\n\n\n\nPress any key to continue......");
    getch();
    return 0;
}