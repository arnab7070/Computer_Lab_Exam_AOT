#include<stdio.h>
#include<math.h>
//using switch case
float equationSolver(int x, int n){
    float ans;
    switch (n)
    {
    case 1:
        ans = (1 + x*x);
        break;
    case 2:
        ans = 1 + (x/n);
        break;
    case 3:
        ans = 1 + (2*x);
        break;
    default:
        ans = 1 + n*x;
        break;
    }
    return ans;

}
//using if-else
float equationSolver2(int x, int n){
    float ans;
    if(n==1){
        ans = (1 + x*x);
    }
    else if(n==2){
        ans = 1 + (x/n);
    }
    else if(n==3){
        ans = 1 + (2*x);
    }
    else{
        ans = 1 + n*x;
    }
    return ans;
}
int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    printf("The answer will be using switch case = %.2f\n",equationSolver(x,n));
    printf("The answer will be using if else = %.2f\n",equationSolver2(x,n));
    return 0;
}