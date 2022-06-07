#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d ",count);
            count++;
        }
        printf("\n");
        
    }
    return 0;
}