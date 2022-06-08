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
    printf("Enter the value you want to search: ");
    scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            printf("The %d is found at index %d\n",key,i);
            return 0;
        }
    }
    
    printf("Sorry!! The element is not present in the array.\n");
    return 0;
}