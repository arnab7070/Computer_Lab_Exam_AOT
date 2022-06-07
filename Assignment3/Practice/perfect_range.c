#include<stdio.h>
int perfectCheck(int n){

    int perfect = 0;
    int check = 0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
            perfect += i;
        }
        if(perfect == n){
            check = 1;
        }
        else{
            check = 0;
        }
    }
    return check;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("All perfect numbers in between 1 and %d:\n",n);
    for(int i = 1; i <= n; i++){
        if(perfectCheck(i)){
            printf("%d ",i);
        }
    }
    return 0;
}