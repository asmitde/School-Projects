#include<stdio.h>
#include<conio.h>

void exchange(char *str1,char *str2)
{
    char *t;
    while(*t++ = *str1++);
    while(*str1++ = *str2++);
    while(*str2++ = *t++);
}

void main()
{
   char str1[80],str2[80];
   clrscr();

   printf("Enter 1st string: "); gets(str1);
   printf("Enter 2st string: "); gets(str2);
   exchange(str1,str2);
   printf("\nString 1: %s\nString 2: %s",str1,str2);
   getch();
}