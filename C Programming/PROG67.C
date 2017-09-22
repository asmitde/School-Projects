/*PROG67 - Program to replace 'Calcutta' with 'Kolkata' in an array*/
/*Authors: Asmit De, Shinjini Basu    Date: 29.01.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char Cities[10][10],Replace[10]="Kolkata"; int i;
    clrscr();

    for(i=0;i<=9;i++)
    {   printf("Enter Cities[%d]: ",i+1); gets(Cities[i]); }

    for(i=0;i<=9;i++)
       if(!strcmp(Cities[i],"Calcutta"))
	 strcpy(Cities[i],Replace);

    printf("\nArray Cities:");
    for(i=0;i<=9;i++)
       printf("\nElement[%d]: %s",i+1,Cities[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter Cities[1]: Mumbai
Enter Cities[2]: Bangalore
Enter Cities[3]: Calcutta
Enter Cities[4]: Mumbai
Enter Cities[5]: Calcutta
Enter Cities[6]: Delhi
Enter Cities[7]: Chennai
Enter Cities[8]: Calcutta
Enter Cities[9]: Bangalore
Enter Cities[10]: Calcutta

Array Cities:
Element[1]: Mumbai
Element[2]: Bangalore
Element[3]: Kolkata
Element[4]: Mumbai
Element[5]: Kolkata
Element[6]: Delhi
Element[7]: Chennai
Element[8]: Kolkata
Element[9]: Bangalore
Element[10]: Kolkata

Press any key to continue.....
*/