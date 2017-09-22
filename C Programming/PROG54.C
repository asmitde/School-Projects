/*PROG54 - Program to multiply two matrices*/
/*Authors: Asmit De, Shinjini Basu    Date: 12.09.2008*/

#include <stdio.h>
#include <conio.h>

void MatProd(int A[50][50],int B[50][50],int C[50][50],int p,int q,int r)
{
    int i,j,k,s;
    for(i=0;i<=p-1;i++)
       for(j=0;j<=r-1;j++)
       {
	  s=0;
	  for(k=0;k<=q-1;k++)
	     s=s+A[i][k]*B[k][j];
	  C[i][j]=s;
       }
}

void main()
{
    int A[50][50],B[50][50],C[50][50],p,q,r,i,j,k;
    clrscr();

    printf("A[p][q] X B[q][r] = C[p][r]");
    printf("\nEnter the values of p, q and r (p,q,r<=50) ");
    scanf("%d%d%d",&p,&q,&r);

    printf("\nMatrix A:\n");
    for(i=0;i<=p-1;i++)
       for(j=0;j<=q-1;j++)
       {  printf("Enter element[%d][%d] ",i+1,j+1); scanf("%d",&A[i][j]); }

    printf("\nMatrix B:\n");
    for(i=0;i<=q-1;i++)
       for(j=0;j<=r-1;j++)
       {  printf("Enter element[%d][%d] ",i+1,j+1); scanf("%d",&B[i][j]); }

    printf("\nMatrix A:\n");
    for(i=0;i<=p-1;i++)
    {
       for(j=0;j<=q-1;j++)
	  printf("%d ",A[i][j]);
       printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i=0;i<=q-1;i++)
    {
       for(j=0;j<=r-1;j++)
	  printf("%d ",B[i][j]);
       printf("\n");
    }

    MatProd(A,B,C,p,q,r);

    printf("\nMatrix C = A X B:\n");
    for(i=0;i<=p-1;i++)
    {
       for(j=0;j<=r-1;j++)
	  printf("%d ",C[i][j]);
       printf("\n");
    }

    puts("\nPress any key to continue....."); getch();
}

/*Output:
A[p][q] X B[q][r] = C[p][r]
Enter the values of p, q and r (p,q,r<=50) 3 4 2

Matrix A:
Enter element[1][1] 4
Enter element[1][2] 2
Enter element[1][3] 6
Enter element[1][4] 0
Enter element[2][1] 1
Enter element[2][2] 3
Enter element[2][3] 7
Enter element[2][4] 8
Enter element[3][1] 2
Enter element[3][2] 5
Enter element[3][3] 9
Enter element[3][4] 3

Matrix B:
Enter element[1][1] 1
Enter element[1][2] 8
Enter element[2][1] 7
Enter element[2][2] 2
Enter element[3][1] 3
Enter element[3][2] 6
Enter element[4][1] 5
Enter element[4][2] 4

Matrix A:
4 2 6 0
1 3 7 8
2 5 9 3

Matrix B:
1 8
7 2
3 6
5 4

Matrix C = A X B:
36 72
83 88
79 92

Press any key to continue.....
*/