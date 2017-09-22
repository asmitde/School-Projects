/*PROG - Queue using array*/
/*Author: Asmit De    Date:19.07.2009*/

#include<stdio.h>
#include<conio.h>
#define MAX 10

int queue[MAX],f=-1,r=-1;

void store(int x)
{
    if(r==MAX-1) { printf("\nQueue overflow"); return; }
    queue[++r]=x;
}

int retrive()
{
    if(f==r) { printf("\nEmpty queue"); f=r=-1; return NULL; }
    return queue[++f];
}

void main()
{
    int p;
    clrscr();
    store(9);
    store(12);
    store(15);
    printf("\n%d",retrive());
    printf("\n%d",retrive());
    printf("\n%d",retrive());
    p=retrive();
    if(!(p==NULL)) printf("\n%d",p);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:

9
12
15
Empty queue

Press any key to continue.....
*/