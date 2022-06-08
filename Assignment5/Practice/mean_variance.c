#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Now enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //arithmetic mean
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The arithmetic mean = %.2f\n",sum/n);
    //variance
    float result = 0;
    for (int i = 0; i < n; i++)
    {
        result += pow((arr[i]-(sum/n)),2);
    }
    printf("The variance = %.2f\n",result/n);
    printf("The standard deviation is = %.2f",sqrt(result/n));
    return 0;
}