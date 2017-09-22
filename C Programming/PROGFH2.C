/*PROGFH2 - Program to read a text file*/
/*Authors: Asmit De, Shinjini Basu    Date: 16.11.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp; int age; char name[20];
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile1.txt","r");
    if(fp==NULL)
    { printf("\nFile opening error.....press any key to exit"); exit(); }

    while(fscanf(fp,"%s %d",name,&age)!=EOF)
	printf("\nName = %s, Age = %d",name,age);

    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Name = Asmit, Age = 18
Name = Mouktik, Age = 17
Name = Arkadev, Age = 19

Press any key to continue.....
*/