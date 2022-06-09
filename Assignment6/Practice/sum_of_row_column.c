#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&column);

    int arr[row][column];

    printf("Enter the elements in the array\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sumOfRowElements,sumOfColumnElements;
    printf("Sum of all rows are as follows......\n");
    for(int i = 0; i < row; i++){
        sumOfRowElements = 0;
        for(int j = 0; j < column; j++){
            sumOfRowElements += arr[i][j];
        }
        printf("Sum of No. %d row is = %d\n",(i+1),sumOfRowElements);
    }
    printf("\nSum of all columns are as follows......\n");
    for(int i = 0; i < column; i++){
        sumOfColumnElements = 0;
        for(int j = 0; j < row; j++){
            sumOfColumnElements += arr[j][i];
        }
        printf("Sum of No. %d column is = %d\n",(i+1),sumOfColumnElements);
    }
    return 0;
}