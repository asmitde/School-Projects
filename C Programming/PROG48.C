/*PROG48 - Program to delete element from k-th position of an array*/
/*Authors: Asmit De, Shinjini Basu    Date: 12.09.2008*/

#include <stdio.h>
#include <conio.h>

void Delete(int arr[],int n,int k)
{
    int i;
    for(i=k;i<=n-1;i++)
       arr[i-1]=arr[i];

    arr[n-1]=0;
}

void main()
{
    int arr[50],n,k,i;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr[i]); }

    printf("\nEnter the position from which you want to delete an element? ");
    scanf("%d",&k);

    Delete(arr,n,k);

    printf("\nNew Array:");
    for(i=0;i<=n-2;i++)
       printf("\n#%d: %d",i+1,arr[i]);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 7
Enter #1 12
Enter #2 52
Enter #3 78
Enter #4 47
Enter #5 39
Enter #6 24
Enter #7 6

Enter the position from which you want to delete an element? 4

New Array:
#1: 12
#2: 52
#3: 78
#4: 39
#5: 24
#6: 6

Press any key to continue.....
*/