/*PROG40 - Program to calculate mean & standard deviation*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.09.2008*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

float Mean(int num[],int n)
{
    float s_M=0; int j;
    for(j=0;j<=n-1;j++)
       s_M=s_M+num[j];

    return s_M/n;
}

float StdDiv(int num[],int n,float mean)
{
    int j,s_SD=0;
    for(j=0;j<=n-1;j++)
       s_SD=s_SD+(mean-num[j])*(mean-num[j]);

    return sqrt(1.0/n*s_SD);
}

void main()
{
    int num[50],n,i; float mn,sd;
    clrscr();

    printf("How many numbers will you enter? (<=50) "); scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {  printf("Enter #%d ",i+1); scanf("%d",&num[i]); } /*Entering Data in array*/

    mn=Mean(num,n);
    sd=StdDiv(num,n,mn);

    printf("\nMean = %f\nStandard Deviation = %f",mn,sd);

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
How many numbers will you enter? (<=50) 5
Enter #1 7
Enter #2 15
Enter #3 34
Enter #4 48
Enter #5 56

Mean = 32.000000
Standard Deviation = 18.708286

Press any key to continue.....
*/