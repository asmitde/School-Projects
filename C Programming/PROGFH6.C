/*PROGFH6 - Program to read a binary file*/
/*Authors: Asmit De, Shinjini Basu    Date: 16.11.2009*/

#include <stdio.h>
#include <conio.h>

struct data { char country[20]; long int population; };

void main()
{
    struct data list; FILE *fp;
    clrscr();

    fp=fopen("H:\\XIE2008\\myfile3.txt","rb");
    if(fp==NULL)
    { printf("\nFile opening error.....press any key to exit"); exit(); }

    while(fread(&list,sizeof(list),1,fp))
    {
	if(list.population>100000)
	  printf("\nCountry: %s, Population: %ld",list.country,list.population);
    }
    fclose(fp);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Country: China, Population: 1330044544
Country: India, Population: 1147995904
Country: United States, Population: 303824640
Country: Brazil, Population: 196342592

Press any key to continue.....
*/