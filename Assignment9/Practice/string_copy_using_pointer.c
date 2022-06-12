#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%s",str);
    char copystr[1000];
    char *startptr = str;
    char *endptr = &str[strlen(str)-1];
    char *startptrOfCopystr = copystr;
    while (startptr<=endptr)
    {
        *startptrOfCopystr = *startptr;
        startptr++;
        startptrOfCopystr++;
    }
    printf("The copied string is: %s",copystr);
    return 0;
}