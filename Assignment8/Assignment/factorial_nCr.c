//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  return f;
}
int main()
{
	int n,r,ncr,f; 
  printf("Enter a number n : ");
  scanf("%d",&n);
 	printf("Enter a number r : ");
  scanf("%d",&r);
  f=fact(n);
  ncr=fact(n)/(fact(r)*fact(n-r));
  printf("Factorial of number %d is %d.\n",n,f);
  printf("Value of %dC%d = %d.\n",n,r,ncr);
  return 0;
}

