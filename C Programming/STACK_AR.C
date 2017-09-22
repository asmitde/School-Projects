/*PROG - Stack using array*/
/*Author: Asmit De    Date:19.07.2009*/

#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[MAX],top=-1;

void push(int x)
{
    if(top==MAX-1) { printf("\nStack overflow"); return; }
    stack[++top]=x;
    return;
}

int pop()
{
    if(top<0) { printf("\nStack underflow"); return NULL; }
    return stack[top--];
}

void main()
{
    int p;
    clrscr();
    push(9);
    push(12);
    printf("\n%d",pop());
    printf("\n%d",pop());
    p=pop();
    if(!(p==NULL)) printf("\n%d",p);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:

12
9
Stack underflow

Press any key to continue.....
*/