#include<stdio.h>
int main()
{
    //For user defined row input
    // int n;
    // printf("Enter thee value of n: ");
    // scanf("%d",&n);

    int n = 4; // n is here initialized as per question
    for (int i = 1; i <= n; i++)
    {
        int count = 64+i;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",count);
            count++;
        }
        printf("\n");
        
    }
    
    return 0;
}