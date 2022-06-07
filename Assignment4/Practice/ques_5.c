#include<stdio.h>
int main()
{
    int n = 4;
    int count;
    for (int i = 1; i <= n; i++)
    {
        if(i%2 == 0){
            count = 0;
        }
        else{
            count = 1;
        }
        for (int j = 1; j <= i; j++)
        {    
            printf("%d ",count);
            if(count==1){
                count = 0;
            }
            else{
                count = 1;
            }

        }
        printf("\n");
        
    }
    return 0;
}