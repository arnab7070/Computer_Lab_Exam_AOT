//ignore the warnings during compilation 
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
    int sum[row][column];
    int *startptr = sum; //stores the matrix starting address
    int *startarr = arr;
    int *startbrr = brr;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++){
            *startptr = *startarr + *startbrr;
            startarr++;
            startbrr++;
            startptr++;
        }
    }
    printf("The sum of these 2 matrices is\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}