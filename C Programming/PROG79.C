#include<stdio.h>
#include<conio.h>

void main()
{
    float salary,*p_salary,**pp_salary;
    clrscr();

    p_salary=&salary;
    pp_salary=&p_salary;

    printf("Entar salary :"); scanf("%f",&salary);
    printf("\nAddress of salary: %u,\tValue: %0.2f",&salary,**pp_salary);
    printf("\nAddress of p_salary: %u,\tValue: %u",&p_salary,*pp_salary);
    printf("\nAddress of pp_salary: %u,\tValue: %u",&pp_salary,pp_salary);

    getch();
}

/*Output:
Entar salary :40000

Address of salary: 65522,       Value: 40000.00
Address of p_salary: 65520,     Value: 65522
Address of pp_salary: 65518,    Value: 65520
*/