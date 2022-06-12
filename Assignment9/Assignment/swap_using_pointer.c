#include<stdio.h>
void swapUsingPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Values before swapping: a = %d & b = %d\n",a,b);
    swapUsingPointer(&a,&b);
    printf("Values after swapping: a = %d & b = %d\n",a,b);
    return 0;
}