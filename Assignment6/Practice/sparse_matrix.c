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
    int zeroCount = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(arr[i][j]==0){
                zeroCount++;
            }
        }
         
    }
    if(zeroCount > ((row*column)/2)){
        printf("It's a sparse matrix.\n");
    }
    else{
        printf("It's not a sparse matrix.\n");
    }
    return 0;
}