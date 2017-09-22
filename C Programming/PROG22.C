/*PROG22 - Program to determine character type using Functions*/
/*Authors: Asmit De, Shinjini Basu    Date: .08.2008*/

#include <stdio.h>
#include <conio.h>

void CharType(char x);
void main()
{
    char c;
    clrscr();

    printf("\nEnter a character "); scanf("%c",&c);
    CharType(c);

    puts("\n\nPress any key to continue....."); getch();
}
void CharType(char x)
{
    if((x>=65 && x<=90)||(x>=97 && x<=122))
      printf("\nAn Alphabet");
    else if(x>=48 && x<=57)
	   printf("\nA Digit");
	 else printf("\nSpecial Character");
}
/*Output 1:
Enter a character A

An Alphabet

Press any key to continue.....
*/
/*Output 2:
Enter a character b

An Alphabet

Press any key to continue.....
*/
/*Output 3:
Enter a character 5

A Digit

Press any key to continue.....
*/
/*Output 3:
Enter a character @

Special Character

Press any key to continue.....
*/