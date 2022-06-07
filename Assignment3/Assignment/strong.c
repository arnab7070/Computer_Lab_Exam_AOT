#include<stdio.h>
int factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int original = n;
    int strong = 0;
    while (n>0)
    {
        int temp = n%10;
        strong += factorial(temp);
        n /= 10;
    }
    if(original == strong){
        printf("The given number is a strong number\n");
    } 
    else{
        printf("The given number is not a prime number\n");
    }
    return 0;
}