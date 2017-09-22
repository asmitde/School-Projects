/*PROG68 - Program to print age of a person from an array*/
/*Authors: Asmit De, Shinjini Basu    Date: 29.01.2009*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char Citizens[10][20],Check[20]; int Age[10],i,flag=0;
    clrscr();

    for(i=0;i<=9;i++)
    {
	printf("Enter name %d: ",i+1); gets(Citizens[i]);
	printf("Enter age: "); scanf("%d",&Age[i]);
	fflush(stdin);
    }

    printf("\nEnter name to search "); gets(Check);
    for(i=0;i<=9;i++)
       if(!strcmp(Citizens[i],Check))
       {
	  printf("\nName of citizen: %s\tAge: %d",Citizens[i],Age[i]);
	  flag=1;
       }
    if(!flag) printf("\nName is not in the list");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output 1:
Enter name 1: Dinesh
Enter age: 26
Enter name 2: Ramesh
Enter age: 31
Enter name 3: Pranesh
Enter age: 22
Enter name 4: Suresh
Enter age: 46
Enter name 5: Gyanesh
Enter age: 55
Enter name 6: Mahesh
Enter age: 49
Enter name 7: Bhupesh
Enter age: 52
Enter name 8: Akhilesh
Enter age: 21
Enter name 9: Bhabesh
Enter age: 56
Enter name 10: Nikhilesh
Enter age: 24

Enter name to search Akhilesh

Name of citizen: Akhilesh       Age: 21

Press any key to continue.....
*/
/*Output 2:
Enter name 1: Dinesh
Enter age: 26
Enter name 2: Ramesh
Enter age: 31
Enter name 3: Pranesh
Enter age: 22
Enter name 4: Suresh
Enter age: 46
Enter name 5: Gyanesh
Enter age: 55
Enter name 6: Mahesh
Enter age: 49
Enter name 7: Bhupesh
Enter age: 52
Enter name 8: Akhilesh
Enter age: 21
Enter name 9: Bhabesh
Enter age: 56
Enter name 10: Nikhilesh
Enter age: 24

Enter name to search Yogesh

Name is not in the list

Press any key to continue.....
*/