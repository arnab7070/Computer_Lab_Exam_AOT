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
    //first of all we need to sort the array
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
    //now start checking the frequency
    int count = 1, pos = 0;
    int frequency[n]; //initialize an array to store the count values
    int elements [n]; //initialize an array to store distinct elements
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            frequency[pos] = count;
            count = 1;
            elements[pos] = arr[i];
            pos++;
        }
    }
    printf("The frequency of the elements are:\n");
    for(int i = 0; i < pos; i++){
        printf("Element = %d ------> Frequency = %d\n",elements[i],frequency[i]);
    }
    return 0;
}