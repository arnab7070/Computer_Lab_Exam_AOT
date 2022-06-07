#include<stdio.h>
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int a,b;
    printf("Enter the starting range of fibonacci: ");
    scanf("%d",&a);
    printf("Enter the ending range of fibonacci: ");
    scanf("%d",&b);
    printf("Fibonacci series between %d & %d\n",a,b);
    int count = 0;
    while(fibonacci(count)<=b){
        if(fibonacci(count)>=a){
            printf("%d ",fibonacci(count));
        }
        count++;
    }
    
    return 0;
}