//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
// #include<stdio.h>
// int main()
// {
// 	int i,c=0;
// 	char s[100];
//     printf("Enter the string = ");
// 	gets(s);
// 	for (i = 0 ; i<100 ; i++)
//     {
// 		c++;
//       if(s[i]=='\0')
// 			  break;
//     }
// 	c=c-1;
// 	printf("Length of %s is %d",s,c);
// 	return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l;
    printf("Enter a string = ");
    gets(s);
    l=strlen(s);
    printf("Length of %s is %d ",s,l);
    return 0;
}
