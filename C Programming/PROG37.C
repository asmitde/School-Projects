/*PROG37 - Program to calculate average of 10 numbers entered in an array*/
/*Authors: Asmit De, Shinjini Basu    Date: 11.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int num[10],i,sum=0;
    clrscr();

    for(i=0;i<=9;i++)
    {
       printf("Enter #%d ",i+1);
       scanf("%d",&num[i]);
    }
    
    for(i=0;i<=9;i++)
       sum=sum+num[i];

    printf("\nAverage of the numbers entered= %0.1f",sum/10.0);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Enter #1 7
Enter #2 16
Enter #3 23
Enter #4 31
Enter #5 44
Enter #6 56
Enter #7 68
Enter #8 72
Enter #9 89
Enter #10 95

Average of the numbers entered= 50.1

Press any key to continue.....
*/