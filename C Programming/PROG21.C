/*PROG21 - Program to change case using Functions*/
/*Authors: Asmit De, Shinjini Basu    Date: 06.08.2008*/

#include <stdio.h>
#include <conio.h>

char ChangeCase(char x);
void main()
{
    char c,f;
    clrscr();

    printf("\nEnter a character "); fflush(stdin); scanf("%c",&c);

    f=ChangeCase(c);
    printf("\n\nEntered character: %c\nCase changed character: %c",c,f);

    puts("\n\n\nPress any key to continue....."); getch();
}
char ChangeCase(char x)
{
    if(x>=65 && x<=90)
      x=x+32;
    else if(x>=97 && x<=122)
	   x=x-32;
	 else {printf("\nInvalid Data"); getch(); exit();}

    return x;
}
/*Output 1:
Enter a character A

Entered character: A
Case changed character: a

Press any key to continue.....
*/
/*Output 2:
Enter a character b

Entered character: b
Case changed character: B

Press any key to continue.....
*/