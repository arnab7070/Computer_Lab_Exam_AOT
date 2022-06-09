#include<stdio.h>
int main()
{
    int row1,column1,row2,column2;
    printf("Enter the number of rows of first array: ");
    scanf("%d",&row1);
    printf("Enter the number of columns of first array: ");
    scanf("%d",&column1);

    printf("Enter the number of rows of second array: ");
    scanf("%d",&row2);
    printf("Enter the number of columns of second array: ");
    scanf("%d",&column2);

    if(column1 != row2){
        printf("Matrix multiplication is not possible!!!\n");
        return 0;
    }
    else{
        int arr[row1][column1];
        int brr[row2][column2];
        //input numbers in first array
        printf("Enter the elements in the first array\n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column1; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        //input numbers in second array
        printf("Enter the elements in the second array\n");
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < column2; j++){
                scanf("%d",&brr[i][j]);
            }
        }
        //matrix multiplication
        int multiplication[row1][column2];
        printf("The multiplication of these two array will be\n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                //initializing array element with zero
                multiplication[i][j] = 0;
                for (int k = 0; k < column1; k++)
                {
                    multiplication[i][j] += (arr[i][k] * brr[k][j]);
                }
                printf("%d ",multiplication[i][j]);                
            }
            printf("\n");
        }

    }
    return 0;
}