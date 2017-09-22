/*PROGFH1 - Program to create a text file*/
/*Authors: Asmit De, Shinjini Basu    Date: 15.11.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    int age, more=1; char name[20];
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile1.txt","w");
    if(fp==NULL)
    { printf("\nFile opening error.....press any key to exit"); exit(); }

    while(more)
    {
	fflush(stdin);
	printf("\nEnter name: "); gets(name);
	printf("Enter age: "); scanf("%d",&age);
	fprintf(fp,"%s %d\n",name,age);
	printf("\nEnter 1 for more data, 0 to exit: "); scanf("%d",&more);
    }
    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter name: Asmit De
Enter age: 18

Enter 1 for more data, 0 to exit: 1

Enter name: Mouktik Sarkar
Enter age: 17

Enter 1 for more data, 0 to exit: 1

Enter name: Arkadev Roy
Enter age: 19

Enter 1 for more data, 0 to exit: 0


Press any key to continue.....
*/
/*File Output:
Asmit De 18
Mouktik Sarkar 17
Arkadev Roy 19
*/