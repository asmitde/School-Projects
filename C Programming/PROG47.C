/*PROG47 - Program to insert an element in k-th position of array*/
/*Authors: Asmit De, Shinjini Basu    Date: 18.09.2008*/

#include <stdio.h>
#include <conio.h>

void Insert(int arr[],int n,int k,int num)
{
    int i;
    for(i=n-1;i>=k+1;i--)
       arr[i+1]=arr[i];

    arr[k-1]=num;
}

void main()
{
    int arr[50],n,k,num,i;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&arr[i]); }

    printf("\nIn which position do you want to insert an element? ");
    scanf("%d",&k);

    printf("Enter number to insert "); scanf("%d",&num);
    Insert(arr,n,k,num);

    printf("\nNew Array:");
    for(i=0;i<=n;i++)
       printf("\n#%d: %d",i+1,arr[i]);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 7
Enter #1 12
Enter #2 45
Enter #3 62
Enter #4 15
Enter #5 37
Enter #6 81
Enter #7 92

In which position do you want to insert an element? 5
Enter number to insert 100

New Array:
#1: 12
#2: 45
#3: 62
#4: 15
#5: 100
#6: 81
#7: 92
#8: 92

Press any key to continue.....
*/