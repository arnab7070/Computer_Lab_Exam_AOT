#include<stdio.h>
int main()
{
    int n = 4;
    int pos = 0;
    int count = 65;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (2*n - 1); j++){
            if((j>=0 && j <= i)){ 
                printf("%c ",count);
                count++;
                if(j == n){
                count--;
                }
            }
            else if((j <= (2*n-1) && j >= (2*n-i))){
                count--;
                printf("%c ",count);
            }
            else{
                printf("  ");
            }
            pos++;
        }
        printf("\n");
    }
    return 0;
}