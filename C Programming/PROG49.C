/*PROG49 - Program to check row of zeroes in a matrix*/
/*Authors: Asmit De, Shinjini Basu    Date: 04.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50][50],i,j,m,n,flag,e=0;
    clrscr();

    printf("Enter the value of m & n for mXn matrix (m,n<=50) ");
    scanf("%d%d",&m,&n);

    for(i=0;i<=m-1;i++)
       for(j=0;j<=n-1;j++)
       {  printf("Enter element[%d][%d] ",i+1,j+1); scanf("%d",&arr[i][j]); }

    printf("\nMatrix:\n");
    for(i=0;i<=m-1;i++)
    {
       for(j=0;j<=n-1;j++)
	  printf("%d ",arr[i][j]);
       printf("\n");
    }

    for(i=0;i<=m-1;i++)
    {
       flag=0;
       for(j=0;j<=n-1;j++)
	  if(arr[i][j]!=0)
	  {  flag=1; break; }
       if(!flag) { printf("\nRow[%d] has all elements 0",i+1); e=1; }
    }
    if(!e) printf("\nNo row has all elements 0");

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Enter the value of m & n for mXn matrix (m,n<=50) 4 3
Enter element[1][1] 5
Enter element[1][2] 8
Enter element[1][3] 7
Enter element[2][1] 0
Enter element[2][2] 0
Enter element[2][3] 0
Enter element[3][1] 5
Enter element[3][2] 3
Enter element[3][3] 4
Enter element[4][1] 6
Enter element[4][2] 6
Enter element[4][3] 9

Matrix:
5 8 7
0 0 0
5 3 4
6 6 9

Row[2] has all elements 0

Press any key to continue.....
*/