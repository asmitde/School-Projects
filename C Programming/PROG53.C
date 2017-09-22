/*PROG53 - Program to check if a square matrix is upper diagonal*/
/*Authors: Asmit De, Shinjini Basu    Date: 11.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50][50],i,j,n,flag=0;
    clrscr();

    printf("Enter the value of n for nXn matrix (n<=50) ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
       for(j=0;j<=n-1;j++)
       {  printf("Enter element[%d][%d] ",i+1,j+1); scanf("%d",&arr[i][j]); }

    printf("\nMatrix:\n");
    for(i=0;i<=n-1;i++)
    {
       for(j=0;j<=n-1;j++)
	  printf("%d ",arr[i][j]);
       printf("\n");
    }

    for(i=0;i<=n-1;i++)
       for(j=0;j<=n-1;j++)
	  if((i>j && arr[i][j]!=0) || (i<=j && arr[i][j]==0))
	  {  flag=1; break; }

    if(!flag)
      printf("\nMatrix is Upper Diagonal");
    else
      printf("\nMatrix is not Upper Diagonal");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output 1:
Enter the value of n for nXn matrix (n<=50) 3
Enter element[1][1] 4
Enter element[1][2] 3
Enter element[1][3] 2
Enter element[2][1] 0
Enter element[2][2] 8
Enter element[2][3] 5
Enter element[3][1] 0
Enter element[3][2] 0
Enter element[3][3] 3

Matrix:
4 3 2
0 8 5
0 0 3

Matrix is Upper Diagonal

Press any key to continue.....
*/
/*Output 2:
Enter the value of n for nXn matrix (n<=50) 4
Enter element[1][1] 5
Enter element[1][2] 2
Enter element[1][3] 0
Enter element[1][4] 1
Enter element[2][1] 0
Enter element[2][2] 2
Enter element[2][3] 3
Enter element[2][4] 9
Enter element[3][1] 0
Enter element[3][2] 0
Enter element[3][3] 4
Enter element[3][4] 4
Enter element[4][1] 0
Enter element[4][2] 0
Enter element[4][3] 0
Enter element[4][4] 3

Matrix:
5 2 0 1
0 2 3 9
0 0 4 4
0 0 0 3

Matrix is not Upper Diagonal

Press any key to continue.....
*/