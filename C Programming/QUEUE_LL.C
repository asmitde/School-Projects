/*PROG - Program to implement a queue using a lilked list*/
/*Author: Asmit De, Shinjini Basu    Date: 05.01.2010*/

#include <stdio.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next,*prev;
}NODE;

NODE *f=NULL,*r=NULL,*s,*temp;

void store(int x)
{
    temp=(NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {  printf("\nMemory / Queue overflow"); return; }

    if(r==NULL)
    {
      f=temp;
      f->data=x;
      f->next=NULL;
      r=f;
      return;
    }

    temp->data=x;
    temp->next=r;
    temp->prev=NULL;
    temp->next->prev=temp;
    r=temp;
}

int retrieve()
{
    int value;
    if(f==NULL)
    {
      printf("\nEmpty Queue");
      f=r=NULL;
      return NULL;
    }

    temp=f;
    value=temp->data;
    f=temp->prev;
    free(temp);
    return value;
}

void main()
{
    int p;
    clrscr();

    store(5);
    store(10);
    store(15);
    printf("\nRetrieved value = %d",retrieve());
    printf("\nRetrieved value = %d",retrieve());
    printf("\nRetrieved value = %d",retrieve());
    p=retrieve();
    if(!(p==NULL)) printf("\nRetrieved value = %d",p);

    puts("\n\nPress any key to continue....."); getch();
}

/*Output:
Retrieved value = 5
Retrieved value = 10
Retrieved value = 15
Empty Queue

Press any key to continue.....
*/