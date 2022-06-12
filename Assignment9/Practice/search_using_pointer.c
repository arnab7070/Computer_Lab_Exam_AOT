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
    int key;
    printf("Enter the element you want to search: ");
    scanf("%d",&key);

    int *start = arr;
    int *end = &arr[n-1];

    while (start <= end)
    {
        if(*start == key){
            printf("The element is present in the array\n");
            return 0;
        }
        start++; //increment of start pointer
    }
    printf("The element is absent in the array\n");
    return 0;
}