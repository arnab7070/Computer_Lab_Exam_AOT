#include<stdio.h>
int biggerOfTwo(int *a,int *b){
    return *a > *b ? *a : *b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("The bigger of two values: %d",biggerOfTwo(&a,&b));
    return 0;
}