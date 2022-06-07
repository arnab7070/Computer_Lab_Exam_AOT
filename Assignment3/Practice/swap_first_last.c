#include<stdio.h>
int no_of_digits(int n){
    int count = 0;
    while (n>0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[no_of_digits(n)]; //making an array
    int pos = no_of_digits(n);
    int duplicate = n;
    // inserting every element in the array
    while (duplicate>0)
    {
        int temp = duplicate%10;
        arr[pos-1] = temp;
        pos--;
        duplicate /= 10;
    }
    //swapping
    int temp = arr[no_of_digits(n)-1];
    arr[no_of_digits(n)-1] = arr[0];
    arr[0] = temp; 
    //new number formation
    int new_number = 0;
    for(int i = 0; i < no_of_digits(n); i++){
        new_number = new_number*10 + arr[i];
    }
    //output
    printf("The new number is now : %d\n",new_number);  
    return 0;
}