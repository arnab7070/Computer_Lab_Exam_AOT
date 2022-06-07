#include<stdio.h>
int main()
{
    int n,sum_pos = 0, sum_neg = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            sum_pos += arr[i];
        }
        else{
            sum_neg += arr[i];
        }
    }
    printf("The sum of all positive elements present in the array is = %d\n",sum_pos);
    printf("The sum of all negative elements present in the array is = %d\n",sum_neg);
    return 0;
}