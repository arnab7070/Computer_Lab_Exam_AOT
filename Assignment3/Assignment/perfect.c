#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int perfect = 0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
            perfect += i;
        }
    }
    if(perfect==n){
        printf("Yes, %d is a perfect number\n",n);
    }
    else{
        printf("No, %d is not a prime number\n",n);
    }
    return 0;
}