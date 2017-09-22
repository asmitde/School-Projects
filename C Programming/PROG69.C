/*PROG69 - Program to arrange a list of names in descending alphabetical order*/
/*Authors: Asmit De, Shinjini Basu    Date: 18.01.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char Names[12][20],temp[20]; int i,j;
    clrscr();

    for(i=0;i<=11;i++)
    {   printf("Enter name %d: ",i+1); gets(Names[i]); }

    for(i=0;i<=10;i++)
       for(j=i+1;j<=11;j++)
	  if(strcmp(Names[i],Names[j])<0)
	  {
	     strcpy(temp,Names[i]);
	     strcpy(Names[i],Names[j]);
	     strcpy(Names[j],temp);
	  }

    printf("\nSorted array:");
    for(i=0;i<=11;i++)
       printf("\n%s",Names[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter name 1: Asmit
Enter name 2: Mouktik
Enter name 3: Arkadev
Enter name 4: Shayan
Enter name 5: Bipasha
Enter name 6: Kaustav
Enter name 7: Anurup
Enter name 8: Shinjini
Enter name 9: Ritika
Enter name 10: Ratul
Enter name 11: Debarpan
Enter name 12: Indrayudh

Sorted array:
Shinjini
Shayan
Ritika
Ratul
Mouktik
Kaustav
Indrayudh
Debarpan
Bipasha
Asmit
Arkadev
Anurup

Press any key to continue.....
*/