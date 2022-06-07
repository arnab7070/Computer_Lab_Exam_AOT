#include<stdio.h>
int main()
{
    int n = 4; 
    for (int i = 1; i <= n; i++)
    {
        int count = 64+n+1-i;
        for (int j = 1; j <= n; j++)
        {
            if(i+j>=(2*i)){
                printf("%c ",count);
                count--;
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