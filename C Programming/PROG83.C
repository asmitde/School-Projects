#include<stdio.h>
#include<conio.h>

int find(char *str, char letter)
{
    int i,count=0;
    for(i=0;*(str+i)!='\0';i++)
       if(*(str+i)==letter) count++;
    return count;
}

void main()
{
    char str[80],letter;
    clrscr();

    printf("Enter a string: "); gets(str);
    printf("Enter the character you wish to count: "); scanf("%c",&letter);
    printf("\nThe number of occurences of %c in the string is %d",letter,find(str,letter));
    puts("\n\nPress any key"); getch();
}

/*Output:
Enter a string: This is a sample string
Enter the character you wish to count: s

The number of occurences of s in the string is 4

Press any key
*/