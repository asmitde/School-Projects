/*PROGFH4 - Program to read from file*/
/*Authors: Asmit De, Shinjini Basu    Date: 16.11.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp; char name[20];
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile2.txt","r");
    if(fp==NULL)
    { printf("\nFile opening error.....press any key to exit"); exit(); }

    while(fgets(name,20,fp)!=NULL) puts(name);
    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Asmit De

Mouktik Sarkar

Arkadev Roy



Press any key to continue.....
*/