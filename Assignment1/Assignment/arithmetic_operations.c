#include<stdio.h>
int main()
{
    int a,b;
    //input two numbers
    scanf("%d%d",&a,&b);
    //sum
    printf("%d\n",a+b);
    //substract
    printf("%d\n",a>b ? a-b : b-a);
    //multiplication
    printf("%d\n",a*b);
    //division
    printf("%.2f\n",(float)a/b); //%.2f for upto 2 decimal numbers
    //modulo
    printf("%d\n",a%b);

    return 0;
}