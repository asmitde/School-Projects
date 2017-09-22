/*PROG44 - Program to merge two sorted arrays to form another sorted array*/
/*Authors: Asmit De, Shinjini Basu    Date: 11.09.2008*/

#include <stdio.h>
#include <conio.h>

void ASSort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<=n-2;i++)
    {
       for(j=i+1;j<=n-1;j++)
	  if(arr[i]>arr[j])
	  {  t=arr[i]; arr[i]=arr[j]; arr[j]=t; }
    }
}

void main()
{
    int arr1[50],arr2[50],arrm[100],n1,n2,i,j=0,k=0,l=0;
    clrscr();

    printf("Array 1:\nHow many numbers will you enter? (<=50) "); scanf("%d",&n1);
    for(i=0;i<=n1-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr1[i]); }
    ASSort(arr1,n1);
    printf("\nArray 2:\nHow many numbers will you enter? (<=50) "); scanf("%d",&n2);
    for(i=0;i<=n2-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr2[i]); }
    ASSort(arr2,n2);

    while(j<=n1-1 && k<=n2-1)
    {
	if(arr1[j]<arr2[k])
	{
	  arrm[l]=arr1[j];
	  j++;
	}
	else if(arr1[j]>arr2[k])
	{
	  arrm[l]=arr2[k];
	  k++;
	}
	l++;
    }
    if(j>=n1)
      for(i=k;i<=n2-1;i++)
      {   arrm[l]=arr2[i]; l++; }
    else
      for(i=j;i<=n1-1;i++)
      {   arrm[l]=arr1[i]; l++; }

    printf("\nMerged Array:");
    for(i=0;i<=n1+n2-1;i++)
       printf("\n#%d: %d",i+1,arrm[i]);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Array 1:
How many numbers will you enter? (<=50) 3
Enter #1 18
Enter #2 2
Enter #3 48

Array 2:
How many numbers will you enter? (<=50) 5
Enter #1 49
Enter #2 60
Enter #3 30
Enter #4 52
Enter #5 15

Merged Array:
#1: 2
#2: 15
#3: 18
#4: 30
#5: 48
#6: 49
#7: 52
#8: 60

Press any key to continue.....
*/