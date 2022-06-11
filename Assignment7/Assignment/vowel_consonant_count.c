//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int v=0,c=0;
    printf("Enter the string = ");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if((s[i]>=65 && s[i]<=90) ||(s[i]>=97 && s[i]<=122))
            c++;
    }
    printf("Vowels = %d and Consonants = %d",v,c);
    return 0;
}
