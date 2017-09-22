#include <stdio.h>
#include <conio.h>
float floor(int n)
{
    float ft=n;
    return ft;
}
float ceiling(float n,float f)
{
    if(n>f)
      return f+1.0;
    else
      return f;
}
void main()
{   clrscr();
    float n,f,c;
    scanf("%f",&n);
    f=floor(n);
    printf("\nfloor=%f",f);
    c=ceiling(n,f);
    printf("\nceiling=%f",c);
    getch();
}