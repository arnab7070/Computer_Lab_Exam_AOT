#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i = 2; i <= n; i++){
        int flag = 1;
        if(n%i==0){
            for(int j = 2; j <= sqrt(i); j++){
                if(i%j==0){
                    flag = 0;
                }
            }
            if(flag==1){
                printf("%d ",i);
            }
        }
    }
    return 0;
}