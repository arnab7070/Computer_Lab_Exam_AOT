#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int max = INT_MIN;
    int min = INT_MAX;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        //finding maximum
        if(arr[i]>max){
            max = arr[i];
        }
        //finding minimum
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum element in the array is = %d\n",max);
    printf("Minimum element in the array is = %d\n",min);
    return 0;
}