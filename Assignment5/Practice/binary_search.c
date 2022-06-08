#include<stdio.h>
int binary_search(int arr[], int key, int start, int end){
    while (start<=end)
    {
        int mid = (start+end)/2;

        if(arr[mid] == key){
            return key;
        }
        else if(key>arr[mid]){
            return binary_search(arr,key,mid+1,end);
        }
        else if(key<arr[mid]){
            return binary_search(arr,key,start,mid-1);
        }
    }          
    
    return -1;    
        
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
    //sorting the array
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
    int key;
    printf("Enter the value you want to search: ");
    scanf("%d",&key);
    //binary search
    int check = binary_search(arr, key, 0, n-1);
    if(check == -1){
        printf("The element is not present in the array\n");
    }

    else{
        printf("%d is present in the array\n",check);
    }
    
    return 0;
}