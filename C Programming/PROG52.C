/*PROG52 - Program to check if a square matrix is Unitary*/
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
	  if((i==j && arr[i][j]!=1) || (i!=j && arr[i][j]!=0))
	  {  flag=1; break; }

    if(!flag)
      printf("\nMatrix is Unitary Square Matrix");
    else
      printf("\nMatrix is not Unitary Square Matrix");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output 1:
Enter the value of n for nXn matrix (n<=50) 3
Enter element[1][1] 1
Enter element[1][2] 0
Enter element[1][3] 0
Enter element[2][1] 0
Enter element[2][2] 1
Enter element[2][3] 0
Enter element[3][1] 0
Enter element[3][2] 0
Enter element[3][3] 1

Matrix:
1 0 0
0 1 0
0 0 1

Matrix is Unitary Square Matrix

Press any key to continue.....
*/
/*Output 2:
Enter the value of n for nXn matrix (n<=50) 3
Enter element[1][1] 1
Enter element[1][2] 0
Enter element[1][3] 2
Enter element[2][1] 0
Enter element[2][2] 3
Enter element[2][3] 4
Enter element[3][1] 0
Enter element[3][2] 0
Enter element[3][3] 1

Matrix:
1 0 2
0 3 4
0 0 1

Matrix is not Unitary Square Matrix

Press any key to continue.....
*/