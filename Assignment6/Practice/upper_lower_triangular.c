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
    printf("The possible lower triangular matrix will be\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j>i){
                printf("0 ");
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("The possible upper triangular matrix will be\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j<i){
                printf("0 ");
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}