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
    printf("All the armstrong numbers between 1 to %d\n",n);
    for(int i = 1; i <= n; i++){
        int armstrong = 0;
        int store = i;
        int duplicate = i;
        while (duplicate>0)
        {
            int temp = duplicate%10;
            armstrong += pow(temp,no_of_digits(store));
            duplicate /= 10;
        }
        if(armstrong == store){
            printf("%d ",i);
        }
    }
    return 0;
}