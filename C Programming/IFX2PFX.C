/*PROG - Program to convert infix to postfix*/
/*Author: Asmit De   Date: 30.07.2009*/

#include<stdio.h>
#include<conio.h>
#define MAX 10

char stack[MAX]; int top=-1;

void push(char x)
{
    if(top==MAX-1) { printf("\nStack overflow"); return; }
    stack[++top]=x;
    return;
}

char pop()
{
    if(top<0) { printf("\nStack underflow"); return NULL; }
    return stack[top--];
}

void main()
{
    char c,infix[20],postfix[20]; int i=0,p=0;
//    clrscr();

    printf("Enter infix expression: "); gets(infix);

    while((c=infix[i++])!='\0')
    {
		switch(c)
		{
			case '^':
			case '(':
				push(c);
				if(c=='^') postfix[p++]=' ';
				break;
			case ')':
				while(stack[top]!='(')
					postfix[p++]=pop();
				pop();
				break;
			case '/':
			case '*':
				while(!(stack[top]=='+' || stack[top]=='-' || stack[top]=='(' || top<0))
					postfix[p++]=pop();
				push(c);
				postfix[p++]=' ';
				break;
			case '+':
			case '-':
				while(!(stack[top]=='(' || top<0))
					postfix[p++]=pop();
				push(c);
				postfix[p++]=' ';
				break;
			default:
				postfix[p++]=c;
		}
    }
    
	while(top>=0)
		postfix[p++]=pop();
    postfix[p]='\0';
    
	printf("\n\nPostfix expresssion: %s",postfix);

    printf("\n\nPress any key to continue....."); getch();

}