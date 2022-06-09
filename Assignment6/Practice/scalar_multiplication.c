#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&column);

    int arr[row][column];

    //input numbers in array
    printf("Enter the elements in the array\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int scalar_value;
    printf("Now enter the scaler value to multiply: ");
    scanf("%d",&scalar_value);

    //calculating the scalar multiplication as a matrix form
    int multiplication[row][column];
    printf("The scalar multiplication of the array will be\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            multiplication[i][j] = arr[i][j]*scalar_value;
            printf("%d ",multiplication[i][j]);
        }
        printf("\n");
    }
    return 0;
}