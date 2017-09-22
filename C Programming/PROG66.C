/*PROG66 - Program to copy odd and even days of the week to two seperate arrays*/
/*Authors: Asmit De, Shinjini Basu    Date: 29.01.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char Odd[4][10],Even[3][10]; int i,j,k;
    char Days[7][10]={ "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    clrscr();

    for(i=j=k=0;i<=6;i++)
       if((i+1)%2==0) strcpy(Even[j++],Days[i]);
       else strcpy(Odd[k++],Days[i]);

    printf("Array Odd:");
    for(i=0;i<=3;i++) printf("\n%s",Odd[i]);

    printf("\n\nArray Even:");
    for(i=0;i<=2;i++) printf("\n%s",Even[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Array Odd:
Monday
Wednesday
Friday
Sunday

Array Even:
Tuesday
Thursday
Saturday

Press any key to continue.....
*/