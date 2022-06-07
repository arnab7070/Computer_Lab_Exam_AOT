#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Natural Numbers till %d\n", n);
    for(int i = 1; i <= n; i++){
        printf("%d ",i);
    }
    printf("\n");
    //for calculating sum
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("The sum of all numbers till %d: %d\n",n,sum);
    return 0;
}