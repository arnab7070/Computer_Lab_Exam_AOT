#include<stdio.h>

//left rotate
void rotateByOneLeft(int arr[],int n)
{
    int first = arr[0];
    //Store first element of array 
    for(int i=0; i<n-1; i++)
    {
        //Move each array element to its left
        arr[i] = arr[i + 1];
    }
    //Copies the first element of array to last 
    arr[n-1] = first;
}
//right rotate
void rotateByOneRight(int arr[],int n)
{
    int last = arr[n - 1];
    for(int i=n-1; i>0; i--)
    {
        arr[i] = arr[i - 1];
    }
    //Copy last element of array to first 
    arr[0] = last;
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
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
    int key;
    printf("Press 1 for left rotate & press 2 for right rotate: ");
    scanf("%d",&key);
    switch (key)
    {
    case 1:
        int rotateLeft;
        printf("Enter number of times to left rotate: ");
        scanf("%d",&rotateLeft);

        /* Actual rotation */
        rotateLeft = rotateLeft % n;
        printf("Array after left rotation: \n");
        for (int i = 1; i <= rotateLeft; i++)
        {
            rotateByOneLeft(arr,n);
        }
        printArray(arr, n);
        break;
    
    case 2:
        int rotateRight;
        printf("Enter number of times to right rotate: ");
        scanf("%d",&rotateRight);

        /* Actual rotation */
        rotateRight = rotateRight % n;
        printf("Array after right rotation: \n");
        for (int i = 1; i <= rotateRight; i++)
        {
            rotateByOneRight(arr,n);
        }
        printArray(arr, n);
        break;
    }
    
    return 0;
}