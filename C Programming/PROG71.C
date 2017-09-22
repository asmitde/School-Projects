/*PROG71 - Program to create a student information structure*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.02.2009*/

#include <stdio.h>
#include <conio.h>

struct student
{
    unsigned long int ID;
    char Name[20],Sec;
    int Class,JoinYear;
};

void Info(struct student arr[],int n)
{
    unsigned long int sid; int i,flag=0;

    printf("\nEnter ID to search: "); scanf("%lu",&sid);
    for(i=0;i<=n-1;i++)
       if(arr[i].ID==sid)
       {
	  flag=1;
	  printf("\nStudent Information");
	  printf("\nID\t\t: %lu",arr[i].ID);
	  printf("\nName\t\t: %s",arr[i].Name);
	  printf("\nClass\t\t: %d",arr[i].Class);
	  printf("\nSection\t\t: %c",arr[i].Sec);
	  printf("\nJoin Year\t   : %d",arr[i].JoinYear);
	  break;
       }
    if(!flag) printf("ID is not present in the list");
}

void main()
{
    struct student arr[100];
    int n,i; unsigned long int sid;
    clrscr();

    printf("Enter the number of students (<=100) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("\nStudent Information #%d:",i+1);
	printf("\nID\t: "); scanf("%lu",&arr[i].ID); fflush(stdin);
	printf("Name\t: "); gets(arr[i].Name);
	printf("Class\t: "); scanf("%d",&arr[i].Class); fflush(stdin);
	printf("Section\t: "); scanf("%c",&arr[i].Sec);
	printf("Join Year\t: "); scanf("%d",&arr[i].JoinYear); fflush(stdin);
    }

    Info(arr,n);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter the number of students (<=100) 4

Student Information #1:
ID      : 950133
Name    : Asmit De
Class   : 11
Section : E
Join Year       : 1995

Student Information #2:
ID      : 950001
Name    : Mouktik Sarkar
Class   : 10
Section : A
Join Year       : 1995

Student Information #3:
ID      : 940002
Name    : Shinjini Basu
Class   : 12
Section : C
Join Year       : 1994

Student Information #4:
ID      : 960003
Name    : Arkadev Roy
Class   : 9
Section : D
Join Year       : 1996

Enter ID to search: 950001

Student Information
ID              : 950001
Name            : Mouktik Sarkar
Class           : 10
Section         : A
Join Year       : 1995

Press any key to continue.....
*/