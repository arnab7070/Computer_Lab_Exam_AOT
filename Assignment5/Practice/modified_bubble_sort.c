#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //modified bubble sort
    for (int i = 0; i < n-1; i++)
    {
        int swapped = 0;
        
        for(int j = 0; j < n-i-1; j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = 1;
            }
        }
        //checking if swapped changed or not
        if(swapped == 0){
            break;
        }
    }
    printf("Bubble sorting is in progress...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}