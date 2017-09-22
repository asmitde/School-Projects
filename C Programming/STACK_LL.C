/*PROG - Stack using Linked List*/
/*Authors: Asmit De, Shinjini Basu    Date: 15.11.2009*/

#include <stdio.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *top=NULL,*temp;

void push(int num)
{
    if(top==NULL)
    {
      top=(NODE*)malloc(sizeof(NODE));
      top->next=NULL;
      top->data=num;
      return;
    }

    temp=(NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {  printf("\nMemory/Stack overflow"); return; }

    temp->data=num;
    temp->next=top;
    top=temp;
}

int pop()
{
    int value;
    if(top==NULL)
    { printf("\nEmpty Stack"); return NULL; }

    temp=top;
    value=temp->data;
    top=temp->next;
    free(temp);
    return value;
}

void main()
{
    int p;
    clrscr();

    push(9);
    push(19);
    push(29);
    printf("\nPopped value = %d",pop());
    printf("\nPopped value = %d",pop());
    printf("\nPopped value = %d",pop());
    p=pop();
    if(!(p==NULL)) printf("\nPopped value = %d",p);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Popped value = 29
Popped value = 19
Popped value = 9
Empty Stack

Press any key to continue.....
*/