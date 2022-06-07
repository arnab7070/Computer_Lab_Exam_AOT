#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before swapping: a->%d, b->%d\n",a,b);
    //using 3rd variable
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a->%d, b->%d\n",a,b);
    //without 3rd variable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Again by swapping: a->%d, b->%d\n",a,b);
    return 0;
}