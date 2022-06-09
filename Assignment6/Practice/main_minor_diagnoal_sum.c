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

    int main_diagonal_sum = 0, minor_diagonal_sum = 0;
    for(int i  = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j){
                main_diagonal_sum += arr[i][j];
            }
            if(i+j==n-1){
                minor_diagonal_sum += arr[i][j];
            }
        }
    }
    printf("The sum of main diagonal elements is = %d\n",main_diagonal_sum);
    printf("The sum of minor diagonal elements is = %d\n",minor_diagonal_sum);
    return 0;
}