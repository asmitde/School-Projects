/*PROG13 - Program to convert decimal to octal & hexadecimal using format specifiers*/
/*Author: Asmit De, Shinjini Basu    Date:10.07.2008*/

#include <stdio.h>
#include <conio.h>

main()
{
    int n;
    clrscr();

    printf("\nEnter a decimal number ");
    scanf("%d",&n);

    printf("\n\nDecimal: %d\nOctal: %o\nHexadecimal: %0x",n,n,n);

    printf("\n\n\n\nPress any key to continue.....");
    getch();
    return 0;
}