#include<stdio.h>
int main()
{
    int n = 3;
    for (int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++){
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}