#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&column);

    int arr[row][column];
    int brr[row][column];

    //input numbers in first array
    printf("Enter the elements in the first array\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //input numbers in second array
    printf("Enter the elements in the second array\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    //calculating sum and output the sum as a matrix form
    int sum[row][column];
    printf("The sum of these two array will be\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum[i][j] = arr[i][j] + brr[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}