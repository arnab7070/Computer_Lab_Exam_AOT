//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>  
#include <string.h>     
int main()  
{  
  char str[50]; 
  printf (" Enter the string: ");  
  gets(str);    
  printf (" \n Before reversing the string: %s \n", str);   
   int i, len, temp;  
  len = strlen(str);   
  for (i = 0; i < len/2; i++)  
  {  
      temp = str[i];  
      str[i] = str[len-i-1];  
      str[len-i-1] = temp;  
  }  
  printf (" After reversing the string: %s", str); 
  return 0; 
} 
 