/*PROG46 - Program to draw histogram of occurences of array elements*/
/*Authors: Asmit De, Shinjini Basu    Date: 12.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50],hist[50],n,max,i,j,k;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr[i]); }

    max=arr[0];
    for(i=0;i<=n-1;i++)
       if(max<arr[i]) max=arr[i];

    for(i=0;i<=max;i++)
    {
       k=0;
       for(j=0;j<=n-1;j++)
	  if(arr[j]==i) k++;

       hist[i]=k;
    }

    printf("\nHistogram of array elements:");
    for(i=0;i<=max;i++)
    {
       printf("\n%d - ",i);
       for(j=1;j<=hist[i];j++)
	  printf("#");
    }

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 21
Enter #1 2
Enter #2 5
Enter #3 4
Enter #4 3
Enter #5 2
Enter #6 2
Enter #7 4
Enter #8 5
Enter #9 9
Enter #10 3
Enter #11 7
Enter #12 1
Enter #13 5
Enter #14 2
Enter #15 3
Enter #16 2
Enter #17 8
Enter #18 7
Enter #19 2
Enter #20 4
Enter #21 3

Histogram of array elements:
0 -
1 - #
2 - ######
3 - ####
4 - ###
5 - ###
6 -
7 - ##
8 - #
9 - #

Press any key to continue.....
*/