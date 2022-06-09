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
        for(int j = 0; j < n; j++){
            if(arr[i][j] != arr[j][i]){
            check = 0;
            break;
            } 
        }
        if(check == 0){
            break;
        }
    }
    if(check){
        printf("It's a symmetric matrix.\n");
    }
    else{
        printf("It's not a symmetric matrix.\n");
    }
    return 0;
}