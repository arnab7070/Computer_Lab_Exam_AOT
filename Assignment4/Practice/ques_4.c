#include<stdio.h>
int main()
{
    int n = 4, pos = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= (2*n-1); j++){
            if(j == n || (j >= n-pos && j <= n) || (j >= n && j <= n+pos)){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        pos++;
        printf("\n");
    }
    return 0;
}