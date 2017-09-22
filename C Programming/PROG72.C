/*PROG72 - Program to find the names of students who joined in a particular year and are in a particular class*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.02.2009*/

#include <stdio.h>
#include <conio.h>

struct student
{
    unsigned long int ID;
    char Name[20],Sec;
    int Class,JoinYear;
};

void Find(struct student arr[],int n,int yr,int cl)
{
    int i,flag=0;
    printf("\nStudents who joined in year %d and are in class %d:",yr,cl);
    for(i=0;i<=n-1;i++)
       if(arr[i].JoinYear==yr && arr[i].Class==cl)
       {  printf("\n%s",arr[i].Name); flag=1; }

    if(!flag) printf("\nNo students joined in year %d and are in class %d",yr,cl);
}

void main()
{
    struct student arr[100]; int n,i,yr,cl;
    clrscr();

    printf("Enter the number of students (<=100) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("\nStudent Information #%d:",i+1);
	printf("\nID   \t: "); scanf("%lu",&arr[i].ID); fflush(stdin);
	printf("Name   \t: "); gets(arr[i].Name);
	printf("Class   \t: "); scanf("%d",&arr[i].Class); fflush(stdin);
	printf("Section  : "); scanf("%c",&arr[i].Sec);
	printf("Join Year: "); scanf("%d",&arr[i].JoinYear); fflush(stdin);
    }

    printf("\nEnter year of join and present class: "); scanf("%d%d",&yr,&cl);
    Find(arr,n,yr,cl);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter the number of students (<=100) 4

Student Information #1:
ID       : 950133
Name     : Asmit De
Class    : 11
Section  : E
Join Year: 1995

Student Information #2:
ID       : 950001
Name     : Mouktik Sarkar
Class    : 11
Section  : A
Join Year: 1995

Student Information #3:
ID       : 940002
Name     : Shinjini Basu
Class    : 12
Section  : C
Join Year: 1994

Student Information #4:
ID       : 960001
Name     : Arkadev Roy
Class    : 9
Section  : D
Join Year: 1996

Enter year of join and present class: 1995 11

Students who joined in year 1995 and are in class 11:
Asmit De
Mouktik Sarkar

Press any key to continue.....
*/