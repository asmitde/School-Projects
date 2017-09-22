/*PROG51 - Program to check if a square matrix is diagonal in nature*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.09.2008*/

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
       {
	  if(i==j) continue;
	  if(arr[i][j]!=0)
	  {  flag=1; break; }
       }

    if(!flag)
      printf("\nMatrix is diagonal in nature");
    else
      printf("\nMatrix is not diagonal in nature");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output 1:
Enter the value of n for nXn matrix (n<=50) 3
Enter element[1][1] 4
Enter element[1][2] 0
Enter element[1][3] 0
Enter element[2][1] 0
Enter element[2][2] 8
Enter element[2][3] 0
Enter element[3][1] 0
Enter element[3][2] 0
Enter element[3][3] 3

Matrix:
4 0 0
0 8 0
0 0 3

Matrix is diagonal in nature

Press any key to continue.....
*/
/*Output 2:
Enter the value of n for nXn matrix (n<=50) 3
Enter element[1][1] 0
Enter element[1][2] 2
Enter element[1][3] 4
Enter element[2][1] 0
Enter element[2][2] 8
Enter element[2][3] 0
Enter element[3][1] 3
Enter element[3][2] 0
Enter element[3][3] 9

Matrix:
0 2 4
0 8 0
3 0 9

Matrix is not diagonal in nature

Press any key to continue.....
*/