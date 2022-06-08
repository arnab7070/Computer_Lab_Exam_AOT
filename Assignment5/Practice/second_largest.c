#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int max = INT_MIN;
    int sec_largest = INT_MIN;
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
    }
    //finding second largest element in array
    for (int i = 0; i < n; i++)
    {
        //finding second largest
        if(arr[i]>sec_largest && arr[i]<max){
            sec_largest = arr[i];
        }
    }
    printf("Second largest element in the array is = %d\n",sec_largest);
    return 0;
}