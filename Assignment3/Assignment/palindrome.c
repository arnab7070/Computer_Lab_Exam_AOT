#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int reversed = 0;
    int original = n;
    while(n>0){
        int temp = n%10;
        reversed = reversed*10 + temp;
        n /= 10;
    }
    if(original==reversed){
        printf("The given number is a palindrome\n");
    }
    else{
        printf("The given number is not a palindrome\n");
    }
    return 0;
}