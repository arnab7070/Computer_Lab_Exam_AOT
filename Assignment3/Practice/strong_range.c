#include<stdio.h>
int factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}
int strongCheck(int n){
    int strong = 0, check = 0;
    int duplicate = n;      
    while(duplicate>0){
        int temp = duplicate%10;
        strong += factorial(temp);
        duplicate /= 10;
    }
    if(strong == n){
        check = 1;
    }
    else{
        check = 0;
    }
    return check;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("All strong numbers in between 1 and %d:\n",n);
    for(int i = 1; i <= n; i++){
        if(strongCheck(i)){
            printf("%d ",i);
        }
    }
    return 0;
}