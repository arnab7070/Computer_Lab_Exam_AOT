#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factors of %d\n",n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            printf("%d ",i);
        }
    }
    
    return 0;
}