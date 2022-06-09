#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements in the array\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i][i] != 1){
            check = 0;
            break;
        } 
    }
    if(check){
        printf("It's an identity matrix.\n");
    }
    else{
        printf("It's not an identity matrix.\n");
    }
    return 0;
}