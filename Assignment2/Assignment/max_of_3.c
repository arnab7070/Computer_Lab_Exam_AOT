#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max = a>b ? (a>c ? a : c) : (b>c ? b : c); //one liner ternary 
    printf("Max is = %d", max);
    return 0;
}