// Y = 1 + 2^2/2! + 3^2/3! ...... n^2/n!
#include<stdio.h>
#include<math.h>
int factorial(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
    
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    float ans = 0;
    for(int i = 1; i <= n; i++){
        ans += pow(i,2)/factorial(i);
    }
    printf("The value of the series will be = %.2f",ans);
    return 0;
}