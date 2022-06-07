#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f%f",&a,&b);
    float ans;
    switch (op)
    {
    case '+':
        ans = a+b;
        printf("%.2f + %.2f = %.2f",a,b,ans);
        break;
    case '-':
        ans = a>b ? a-b : b-a;
        printf("|%.2f - %.2f| = %.2f",a,b,ans);
        break;
    case '*':
        ans = a*b;
        printf("%.2f * %.2f = %.2f",a,b,ans);
        break;
    case '/':
        ans = a/b;
        printf("%.2f / %.2f = %.2f",a,b,ans);
        break;
    }
    return 0;
}