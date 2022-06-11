//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
#include <string.h>
int main() {
  char s1[100];
  char s2[100];
  printf("Enter two strings = \n");
  gets(s1);
  gets(s2);
  int result;
  result = strcmp(s1, s2);
  if(result==0)
  printf("Both strings are same");
  else
  printf("Strings are different");
  return 0;
}
