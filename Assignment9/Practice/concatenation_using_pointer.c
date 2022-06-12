#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    printf("Enter the string: ");
    scanf("%s",&str1);
    char str2[1000];
    printf("Enter the second string: ");
    scanf("%s",&str2);

    char *endPtrStr1 = &str1[strlen(str1)]; //end+1 th address
    char *startPtrStr2 = str2;
    char *endPtrStr2 = &str2[strlen(str2)-1]; 

    while (startPtrStr2<=endPtrStr2)
    {
        *endPtrStr1 = *startPtrStr2;
        endPtrStr1++;
        startPtrStr2++;
    }
    printf("The new concatenated string is: %s",str1);
    return 0;
}