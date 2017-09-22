/*PROG42 - Program to bubble-sort array elements in descending order*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.09.2008*/

#include <stdio.h>
#include <conio.h>

void BSort(int num[],int n)
{
   int j,k,t;
   for(j=0;j<=n-2;j++)
   {
      for(k=0;k<=n-2;k++)
	 if(num[k]<num[k+1])
	 {  t=num[k]; num[k]=num[k+1]; num[k+1]=t; } /*Swapping elements*/
   }
}

void main()
{
    int num[50],n,i;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&num[i]); } /*Entering Data in array*/

    BSort(num,n);

    printf("\nSorted Order:");
    for(i=0;i<=n-1;i++)
       printf("\n#%d: %d",i+1,num[i]);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 5
Enter #1 56
Enter #2 78
Enter #3 45
Enter #4 12
Enter #5 92

Sorted Order:
#1: 92
#2: 78
#3: 56
#4: 45
#5: 12

Press any key to continue.....
*/