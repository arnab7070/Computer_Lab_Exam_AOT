//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
void matrixAdd(int a[][100], int b[][100], int sum[][100],int r, int c)
{
    int i, j;
    // Iterate over each matrix elements 
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // sum[i][j] = a[i][j] + b[i][j]
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }
}
void matrixPrint(int sum[][100],int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            // *(*(sum + i) + j) is equal to sum[i][j]
            printf("%d   ", *(*(sum + i) + j));
        }
        printf("\n");
    }
}
int main()
{
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
    matrixAdd(a,b,sum,r,c);
    printf("\nSum of first and second matrix: \n");
    matrixPrint(sum,r,c);
    return 0;
}
