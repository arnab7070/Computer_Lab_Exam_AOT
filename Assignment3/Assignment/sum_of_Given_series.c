//Y = 1 + 1/2 + 1/3 + 1/4 + .... + 1/n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    float ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (1.0/i);
    }
    printf("The sum of the given series will be = %.2f",ans);
    
    return 0;
}