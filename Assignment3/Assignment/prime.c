#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int flag = 1;
    if(n == 1 || n == 0){
        printf("The number is not prime\n");
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("The number is prime\n");
    }
    else{
        printf("The number is not prime\n");
    }
    return 0;
}