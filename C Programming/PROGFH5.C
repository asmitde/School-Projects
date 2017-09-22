/*PROGFH5 - Program to create a binary file*/
/*Authors: Asmit De, Shinjini Basu    Date: 16.11.2009*/

#include <stdio.h>
#include <conio.h>

struct data { char country[20]; long int population; };

void main()
{
    struct data list; FILE *fp; int more;
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile3.txt","wb");
    if(fp==NULL)
    { printf("\nFile opening error.....press any key to exit"); exit(); }

    while(1)
    {
	fflush(stdin);
	printf("Enter name of country: "); gets(list.country);
	printf("Enter population of country: "); scanf("%ld",&list.population);
	fwrite(&list,sizeof(list),1,fp);
	printf("Enter 1 for more data, 0 to end file: "); scanf("%d",&more);
	if(more==0) break;
    }
    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter name of country: China
Enter population of country: 1330044544
Enter 1 for more data, 0 to end file: 1
Enter name of country: India
Enter population of country: 1147995904
Enter 1 for more data, 0 to end file: 1
Enter name of country: United States
Enter population of country: 303824640
Enter 1 for more data, 0 to end file: 1
Enter name of country: Brazil
Enter population of country: 196342592
Enter 1 for more data, 0 to end file: 0


Press any key to continue.....
*/