/*PROG - Linked List*/
/*Author: Asmit De    Date: 18.07.2009*/

#include<stdio.h>
#include<conio.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *start,*list;

void create();
void display();
void addbegin();
void addafter();
void delbegin();
void delafter();

void main()
{
    char ch;
    do
    {
	clrscr();
	printf("\nMENU");
	printf("\n\nKey\tFunction");
	printf("\n1\tCreate list");
	printf("\n2\tDisplay list");
	printf("\n3\tAdd node at beginning of list");
	printf("\n4\tAdd node after a given node");
	printf("\n5\tDelete node at beginning of list");
	printf("\n6\tDelete node after a given node");
	printf("\n7\tExit");
	printf("\n\nEnter your choice... "); ch=getch();
	switch(ch)
	{
	    case '1': clrscr();
		    printf("\nCreating the list...");
		    start=(NODE*)malloc(sizeof(NODE));
		    list=start;
		    create();
		    printf("\nList created successfully.....press any key"); getch(); break;
	    case '2': display(); break;
	    case '3': addbegin(); break;
	    case '4': addafter(); break;
	    case '5': delbegin(); break;
	    case '6': delafter(); break;
	    case '7': exit();
	    default: printf("\nInvalid choice.....press any key"); getch();
	}
    }while(1);
}

void create()
{
    int more;
    printf("\nEnter data: "); scanf("%d",&list->data);
    printf("\nEnter <1> for next data, <0> to end list: "); scanf("%d",&more);
    if(more==1)
    {
      list->next=(NODE*)malloc(sizeof(NODE));
      list=list->next;
      create();
    }
    else list->next=NULL;
}

void display()
{
    int count=0;
    clrscr();
    list=start;
    printf("\n\nDisplaying list...");
    do
    {
      printf("\n%d",list->data);
      count++;
      if(list->next==NULL) break;
      list=list->next;
    }while(1);
    printf("\nTotal no. of nodes=%d",count);
    puts("\n\nPress any key....."); getch();
}

void addbegin()
{
    NODE *temp;
    clrscr();
    printf("\n\nCreating node at beginning of list...");
    temp=(NODE*)malloc(sizeof(NODE));
    temp->next=start;
    start=temp;
    printf("\nEnter data: "); scanf("%d",&start->data);
    puts("\nNode added successfuly.....press any key"); getch();
}

void addafter()
{
    int pos; NODE *temp;
    clrscr();
    list=start;
    printf("\n\nCreating node in the middle of list...");
    printf("\nEnter node after which to add new node: "); scanf("%d",&pos);
    while(--pos) list=list->next;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->next=list->next;
    list->next=temp;
    printf("\nEnter data: "); scanf("%d",&temp->data);
    puts("\nNode added successfuly.....press any key"); getch();
}

void delbegin()
{
    NODE *temp;
    clrscr();
    printf("\n\nDeleting node at beginning of list...");
    temp=start;
    start=start->next;
    free(temp);
    puts("\nNode deleted successfuly.....press any key"); getch();
}

void delafter()
{
    int pos; NODE *temp;
    clrscr();
    list=start;
    printf("\n\nDeleting node in the middle of list...");
    printf("\nEnter node after which to delete node: "); scanf("%d",&pos);
    while(--pos) list=list->next;
    temp=list->next;
    list->next=temp->next;
    free(temp);
    puts("\nNode deleted successfuly.....press any key"); getch();
}