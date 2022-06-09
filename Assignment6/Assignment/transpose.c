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

    int transpose[column][row];
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    
    //output of transpose matrix
    printf("The transpose of the matrix will be\n");
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}