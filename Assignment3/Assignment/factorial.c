#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is = %d", n,factorial);
    
    return 0;
}