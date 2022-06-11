//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
// #include<stdio.h>
// #include<stringh>
// int main()
// {
//     char str[100];
//     int i;
//     printf("\nEnter any string : ");
//     gets(str);
//     printf("\nThe input String is :  %s \n",str);
//     for(i=0;i<=strlen(str);i++)
//     {
//       if(str[i]>=97&&str[i]<=122)
//               str[i]=str[i]-32;
//       else if(str[i]>=65&&str[i]<=90)
//               str[i]=str[i]+32;
//     }
//     printf("\nThe Converted String is :  %s \n",str);
//  return 0;
// }
#include <stdio.h> 
#include <string.h>
#include <ctype.h> 
int main()  
{  
  int i, len = 0,j;  
  char str[50]; 
  printf ("Enter the string: ");  
  gets(str);    
  len = strlen(str);   
  for(i = 0; i < len; i++){  
    str[i]=islower(str[i])? toupper(str[i]) : tolower(str[i]);
  }  
  printf("String after interchanging lowercase with uppercase and vice versa : %s", str);  
  return 0;  
}  
