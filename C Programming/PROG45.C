/*PROG45 - Program to find minimum value in an array*/
/*Authors: Asmit De, Shinjini Basu    Date: 12.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50],i,min,n;
    clrscr();
    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {   printf("Enter #%d ",i+1); scanf("%d",&arr[i]); }

    min=arr[0];
    for(i=0;i<=n-1;i++)
       if(min>arr[i]) min=arr[i];

    printf("\nThe minimum value entered in array is %d",min);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
How many numbers will you enter? (<=50) 6
Enter #1 20
Enter #2 45
Enter #3 10
Enter #4 56
Enter #5 39
Enter #6 55

The minimum value entered in array is 10

Press any key to continue.....
*/