/*PROG64 - Program to print names whose ages re more than or equal to 50*/
/*Authors: Asmit De, Shinjini Basu    Date: .09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char names[50][10]; int age[50],n,i;
    clrscr();

    printf("Enter the number of names (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	fflush(stdin);
	printf("Enter name %d: ",i+1); gets(names[i]);
	printf("Enter age "); scanf("%d",&age[i]);
    }

    printf("\nNames whose age is greater or equal to 50:");
    for(i=0;i<=n-1;i++)
       if(age[i]>=50) printf("\n%s",names[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter the number of names (<=50) 6
Enter name 1: Asmit
Enter age 17
Enter name 2: Mouktik
Enter age 50
Enter name 3: Arkadev
Enter age 25
Enter name 4: Abhijoy
Enter age 55
Enter name 5: Shinjini
Enter age 18
Enter name 6: Ritika
Enter age 52

Names whose age is greater or equal to 50:
Mouktik
Abhijoy
Ritika

Press any key to continue.....
*/