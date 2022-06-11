//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];  
  int i,n,c=0;
  printf("Enter  the string : ");
  gets(s);
  n=strlen(s);
  for(i=0;s[i];i++)  
  {
  	if(s[i]==s[n-i-1])
  	c++;
  }
  if(c==i)
    printf("string is palindrome");
  else
    printf("string is not palindrome");  
  return 0;
}
