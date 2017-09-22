/*PROG36 - Program to calculate wolf-rabbit population*/
/*Authors: Asmit De, Shinjini Basu    Date: 05.09.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    const double a=0.01,b=0.005,c=0.00001,d=0.01; double R,W,Rt; int i,k=2;
    clrscr();

    printf("Enter initial number of rabbits and wolves "); scanf("%lf%lf",&R,&W);
    printf("\nDay\tRabbits\tWolves\n1\t%.0lf\t%.0lf",R,W);

    for(i=2;i<=1000;i++)
    {  Rt=R;
       R=(1+a)*R-c*R*W;
       W=(1-b)*W+c*d*Rt*W;
       if(k++!=25) continue;
       printf("\n%d\t%.0lf\t%.0lf",i,R,W); k=1;
    }

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Enter initial number of rabbits and wolves 10000 1000

Day     Rabbits Wolves
1       10000   1000
25      10108   908
50      10451   822
75      11029   745
100     11852   677
125     12945   616
150     14341   562
175     16089   515
200     18249   474
225     20894   439
250     24115   410
275     28019   386
300     32728   367
325     38381   354
350     45129   347
375     53120   346
400     62488   352
425     73311   368
450     85556   396
475     98982   439
500     113001  505
525     126492  600
550     137624  737
575     143876  924
600     142561  1168
625     132140  1455
650     113754  1749
675     91348   1996
700     69611   2155
725     51591   2213
750     38097   2184
775     28566   2095
800     22017   1969
825     17561   1825
850     14536   1676
875     12489   1529
900     11124   1390
925     10251   1259
950     9748    1139
975     9541    1030
1000    9586    930

Press any key to continue.....
*/