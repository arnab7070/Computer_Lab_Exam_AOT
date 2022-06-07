#include<stdio.h>
int main()
{
    int n = 4;
    int count = 10;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+1-i; j++){
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}