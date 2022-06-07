#include<stdio.h>
int main()
{
    int basic_salary;
    scanf("%d",&basic_salary);
    float gross_salary = basic_salary + 0.74*basic_salary + 0.15*basic_salary;
    printf("Gross Salary = %.2f",gross_salary);
    return 0;
}