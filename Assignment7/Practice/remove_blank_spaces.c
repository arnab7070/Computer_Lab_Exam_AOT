//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h> 
#include <string.h> 
int main()  
{  
  int i, len = 0,j;  
  char str[50]; 
  printf ("Enter the string: ");  
  gets(str);    
  len = strlen(str);   
  for(i = 0; i < len; i++){  
    if(str[i] == ' '){  
      for(j=i;j<len;j++){  
      str[j]=str[j+1];  
    }  
    len--;  
    }  
  }  
  printf("String after removing all the blank spaces : %s", str);  
  return 0;  
}  
