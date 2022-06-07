#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the power factor: ");
    scanf("%d",&x);
    int power = 1;
    for(int i = 1; i <= x; i++){
        power *= n;
    }
    printf("Value of %d to the power %d = %d\n",n,x,power);
    return 0;
}