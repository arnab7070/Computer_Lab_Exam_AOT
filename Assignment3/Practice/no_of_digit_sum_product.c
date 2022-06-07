#include<stdio.h>
void no_of_digits_sum_product(int n){
    int count = 0;
    int sum = 0;
    int product = 1;
    while (n>0)
    {
        int temp = n%10;
        sum += temp;
        product *= temp;
        count++;
        n /= 10;
    }
    printf("Total number of digits: %d\n",count);
    printf("Total sum of digits: %d\n",sum);
    printf("Total product of digits: %d\n",product);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    no_of_digits_sum_product(n);
    return 0;
}