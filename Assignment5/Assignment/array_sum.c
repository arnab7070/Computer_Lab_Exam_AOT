#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i]; //we are parallelly adding elements of the array
    }
    printf("The sum of all element present in the array is = %d",sum);
    return 0;
}