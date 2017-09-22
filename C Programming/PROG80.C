#include<stdio.h>
#include<conio.h>
#include<math.h>
void QRoots(float a,float b,float c,float *r1,float *r2)
{
    if(b*b>=4.0*a*c)
    {
       *r1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
       *r2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
    }
    else
    {
       printf("\nThe roots are imaginary... press any key to exit");
       getch(); exit();
    }
}

void main()
{
    float a,b,c,*root1,*root2;
    clrscr();

    printf("Equation syntax: ax^2 + bx + c = 0");
    printf("\nEnter the values of a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    QRoots(a,b,c,root1,root2);
    printf("\nRoots of the equation %fx^2 + %fx + %f = 0 are %f and %f",a,b,c,*root1,*root2);
    getch();
}