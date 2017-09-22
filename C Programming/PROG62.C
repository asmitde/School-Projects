/*PROG62 - Program to check whether a string is palindrome or not*/
/*Authors: Asmit De, Shinjini Basu    Date: .09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char str[10]; int i,l=0,len,flag=0;
    clrscr();

    printf("Enter a word "); gets(str);
    while(str[l++]); len=l-1;

    for(i=0;i<=len/2-1;i++)
       if(str[i]!=str[len-i-1]) flag=1;

    if(!flag) printf("\nIt is a palindrome");
    else printf("\nIt is not a palindrome");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output 1:
Enter a word MALAYALAM

It is a palindrome

Press any key to continue.....
*/
/*Output 2:
Enter a word ASMIT

It is not a palindrome

Press any key to continue.....
*/