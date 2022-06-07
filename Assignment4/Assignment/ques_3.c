#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        int count = i;
        for (int j = 1; j <= n; j++)
        {
            if(i+j>n){
                printf("%2d ",count);
                count++;
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
        
    }
    return 0;
}