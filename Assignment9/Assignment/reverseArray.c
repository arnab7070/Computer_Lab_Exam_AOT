#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int *ptr = arr; //starting address of array
    int *endptr = &arr[size-1]; //ending address of the array
    //reverse the array using pointer
    for (int i = 0; i < size/2; i++)
    {
        int temp = *ptr;
        *ptr = *endptr;
        *endptr = temp;
        ptr++;
        endptr--;
    }
    //output the result
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}