#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int evenSum = 0, oddSum = 0;
    printf("All even numbers between 1 & %d\n",n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            printf("%d ",i);
            evenSum += i;
        }
    }
    printf("\nSum of all even numbers = %d\n",evenSum);
    printf("All odd numbers between 1 & %d\n",n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1){
            printf("%d ",i);
            oddSum += i;
        }
    }
    printf("\nSum of all odd numbers = %d\n",oddSum);
    return 0;
}