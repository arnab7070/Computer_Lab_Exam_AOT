//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
void merge(int a[], int beg, int mid, int end)    
{    
  int i, j, k;  
  int n1 = mid+1-beg;    
  int n2 = end-mid;          
  int LeftArray[100], RightArray[100]; //temporary arrays        
  for (int i = 0; i < n1; i++)    
  LeftArray[i] = a[beg + i];    
  for (int j = 0; j < n2; j++)    
  RightArray[j] = a[mid + 1 + j];          
  i = 0; /* initial index of first sub-array */  
  j = 0; /* initial index of second sub-array */   
  k = beg;  /* initial index of merged sub-array */       
  while (i < n1 && j < n2)    
  {    
    if(LeftArray[i] <= RightArray[j])    
    {    
        a[k++] = LeftArray[i++];       
    }    
    else    
    {    
        a[k++] = RightArray[j++];       
    }        
  }    
  while (i<n1)    
  {    
    a[k++] = LeftArray[i++];       
  }          
  while (j<n2)    
  {    
    a[k++] = RightArray[j++];        
  }    
} 
void mergeSort(int a[], int beg, int end)  
{  
  if (beg < end)   
  {  
    int mid = (beg + end) / 2;  
    mergeSort(a, beg, mid);  
    mergeSort(a, mid + 1, end);  
    merge(a, beg, mid, end);  
  }  
}  
int main()
{
  int a[1000],i,n,sum;   
  printf("Enter size of the array : ");
  scanf("%d", &n); 
  printf("Enter elements in array :-\n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  } 
  printf("The elements before sorting are :-\n");
  for(i=0; i<n; i++)
  {
    printf("%d  ", a[i]);
  } 
  mergeSort(a, 0, n - 1); 
  printf("\nThe elements after sorting are :-\n");
  for(i=0; i<n; i++)
  {
    printf("%d  ", a[i]);
  }
  return 0;   
}
