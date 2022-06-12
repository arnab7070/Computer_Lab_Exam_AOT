#include <stdio.h>
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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if( *(arr+i) > *(arr+j))
        {
                int tmp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = tmp;
        }
        }
    }
    printf("The elements in the array after sorting: \n");
    for(int i=0;i<n;i++)
    {
	  printf("%d ",arr[i]);
	}         
    return 0;
}
