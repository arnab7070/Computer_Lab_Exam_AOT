#include<stdio.h>
#include<math.h>
int no_of_digits(int n){
    int count = 0;
    while (n>0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int original = n;
    int armstrong = 0;
    while (n>0)
    {
        int temp = n%10;
        armstrong += pow(temp,no_of_digits(original));
        n /= 10;
    }
    
    if(armstrong == original){
        printf("The given number is an armstrong number");
    }
    else{
        printf("The given number is not an armstrong number");
    }
    return 0;
}