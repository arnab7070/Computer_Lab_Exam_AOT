#include<stdio.h>
int main()
{
    //For user defined row input
    // int n;
    // printf("Enter thee value of n: ");
    // scanf("%d",&n);
    int n = 4; // n is here initialized as per question
    int count = 64+n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i+j>=(2*i)){
                printf("%c ",count);
            }
            else{
                printf("  ");
            }

        }
        count--;
        printf("\n");
        
    }
    return 0;
}