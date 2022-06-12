//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h> 
void count(int *a,int *b,int n)
{ 
  int i,c,j;
  for(i=0; i<n; i++)
  {
    c=1;
    if(a[i]!=-1)
	{
	  for(j=i+1; j<n; j++) 
    {
       if(a[i]==a[j])
      {
		    c++;
		    a[j]=-1;
	    }
    }
     b[i]=c;
	}          
  }
  for(i=0; i<n; i++)
    {         
      if(a[i]!=-1)
       {
      	printf("Frequency of %d is %d. \n",a[i],b[i]); 
		  }          
    }      
 } 
int main()
{
  int a[100],b[100],i,n;   
  printf("Enter size of the array : ");
  scanf("%d", &n); 
  printf("Enter elements in array :\n ");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }    
  count(a,b,n);          
	return 0;
}