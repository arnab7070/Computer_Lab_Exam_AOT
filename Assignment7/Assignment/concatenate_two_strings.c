//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter two strings = \n");
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("New String = %s",s1);
    return 0;
}
