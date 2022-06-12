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
    //now we are making an array of same size 
    int copyarr[n];
    int *starPtr = arr;
    int *endPtr = &arr[n-1];
    int *starPtrCopyarr = copyarr;
    while (starPtr<=endPtr)
    {
        *starPtrCopyarr = *starPtr;
        starPtr++;
        starPtrCopyarr++;
    }
    starPtrCopyarr = copyarr;

    printf("Values of Copy Array: ");
    
    //Use this method to print array using pointer
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",*starPtrCopyarr);
    //     starPtrCopyarr++;
    // }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",copyarr[i]);
    }
    
    return 0;
}