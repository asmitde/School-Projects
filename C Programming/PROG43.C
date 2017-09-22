/*PROG43 - Program to Binary-search array elements*/
/*Authors: Asmit De, Shinjini Basu    Date: 11.09.2008*/

#include <stdio.h>
#include <conio.h>

BSearch(int arr[],int n,int num)
{
    int low=0,high=n,mid;
    while(low<=high)
    {
	mid=(high+low)/2;
	if(arr[mid]==num) return 1;
	if(arr[mid]<num)
	  low=mid+1;
	else
	  high=mid-1;
    }
    return 0;
}

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
    int arr[50],n,i,s,num;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr[i]); }

    printf("\nEnter number to search "); scanf("%d",&num);
    ASSort(arr,n);
    s=BSearch(arr,n,num);

    if(s==1)
      printf("\n%d is present in array.",num);
    else
      printf("\n%d is not present in array.",num);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output 1:
How many numbers will you enter? (<=50) 5
Enter #1 56
Enter #2 78
Enter #3 45
Enter #4 12
Enter #5 92

Enter number to search 12

12 is present in array.

Press any key to continue.....
*/
/*Output 2:
How many numbers will you enter? (<=50) 5
Enter #1 56
Enter #2 78
Enter #3 45
Enter #4 12
Enter #5 92

Enter number to search 25

25 is not present in array.

Press any key to continue.....
*/