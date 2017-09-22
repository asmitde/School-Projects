/*PROG65 - Program to copy a string to all positions of a 2-D array*/
/*Authors: Asmit De, Shinjini Basu    Date: .09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char Repeat[10][10],Insert[10]; int i;
    clrscr();

    printf("Enter a string: "); gets(Insert);
    for(i=0;i<=9;i++)
       strcpy(Repeat[i],Insert);

    printf("\nArray:");
    for(i=0;i<=9;i++)
       printf("\nElement[%d]: %s",i,Repeat[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter a string: Asmit

Array:
Element[0]: Asmit
Element[1]: Asmit
Element[2]: Asmit
Element[3]: Asmit
Element[4]: Asmit
Element[5]: Asmit
Element[6]: Asmit
Element[7]: Asmit
Element[8]: Asmit
Element[9]: Asmit

Press any key to continue.....
*/