#include<stdio.h>
#include<math.h>
int factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}
int main()
{
    int x,n;
    printf("Enter the value of x ans n: ");
    scanf("%d%d",&x,&n); 
    float ans = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==1){
            ans += (pow(x,count))/factorial(count);
        }
        else{
            ans -= (pow(x,count))/factorial(count);
        }
        count += 2;
    }
    printf("The answer of the given cos series is = %.3f",ans);
    return 0;
}