/*PROG38 - Program to print set of numbers in an array in reverse order*/
/*Authors: Asmit De, Shinjini Basu    Date: 11.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,num[50],t,i;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&num[i]); } /*Entering Data in array*/

    for(i=0;i<=(n-1)/2;i++)
    {  t=num[i]; num[i]=num[n-1-i]; num[n-1-i]=t; } /*Swapping array elements*/

    printf("\nReversed order:");
    for(i=0;i<=n-1;i++)
       printf("\n#%d: %d",i+1,num[i]);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 9
Enter #1 7
Enter #2 15
Enter #3 23
Enter #4 31
Enter #5 44
Enter #6 56
Enter #7 68
Enter #8 71
Enter #9 89

Reversed order:
#1: 89
#2: 71
#3: 68
#4: 56
#5: 44
#6: 31
#7: 23
#8: 15
#9: 7

Press any key to continue.....
*/