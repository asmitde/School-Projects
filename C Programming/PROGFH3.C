/*PROGFH3 - Program to write to a file*/
/*Authors: Asmit De, Shinjini Basu    Date: 16.11.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp; char name[20];
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile2.txt","w");
    if(fp==NULL)
	{ printf("\nFile opening error.....press any key to exit"); exit(); }

    printf("Enter name: ");
    while(strlen(gets(name))>0)
    {
	fputs(name,fp);
	fputs("\n",fp);
	printf("Enter next name (or press Enter to exit): ");
    }
    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter name: Asmit De
Enter next name (or press Enter to exit): Mouktik Sarkar
Enter next name (or press Enter to exit): Arkadev Roy
Enter next name (or press Enter to exit):


Press any key to continue.....
*/
/*File Output:
Asmit De
Mouktik Sarkar
Arkadev Roy
*/