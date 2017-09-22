/*PROG63 - Program to search a name with the starting character among an array of names*/
/*Authors: Asmit De, Shinjini Basu    Date: .09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    char names[50][10],s; int i,n;
    clrscr();

    printf("Enter the number of names (<=50) "); scanf("%d",&n); fflush(stdin);
    for(i=0;i<=n-1;i++)
    {   printf("Enter name %d ",i+1); gets(names[i]); }

    printf("\nEnter starting character "); scanf("%c",&s);

    printf("\nNames starting with %c:",s);
    for(i=0;i<=n-1;i++)
       if(names[i][0]==s) printf("\n%s",names[i]);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter the number of names (<=50) 10
Enter name 1 Sachin
Enter name 2 Sourav
Enter name 3 Yuvraj
Enter name 4 Laxman
Enter name 5 Sewag
Enter name 6 Chopra
Enter name 7 Srinath
Enter name 8 Balaji
Enter name 9 Dhoni
Enter name 10 Irfan

Enter starting character S

Names starting with S:
Sachin
Sourav
Sewag
Srinath

Press any key to continue.....
*/