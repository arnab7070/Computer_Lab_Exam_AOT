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
    //we are sorting the array
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //assigning negative values to duplicate elements
    for(int i = 0; i < n; i++){
        if(arr[i]==arr[i+1]){
            arr[i] = -1;
        }
    }
    //removing duplicates
    for(int i = 0; i < n; i++){
        if(arr[i]==-1){
            for(int j = i; j < n-1; j++){
                arr[j] = arr[j+1];
            }
            n--; //decreasing the size of the array
        }
    }
    //printing the array
    printf("The array after removing all the duplicates\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}