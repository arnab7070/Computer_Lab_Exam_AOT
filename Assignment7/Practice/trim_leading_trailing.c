//Contributed by Arpan De ---> Github Profile: https://github.com/neo-deus
#include <stdio.h>
void trim(char * str)
{
    int index, i;
    //count leading white spaces
    index = 0;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }
    //Shift all trailing characters to its left
    i = 0;
    while(str[i + index] != '\0')
    {
        str[i] = str[i + index];
        i++;
    }
    str[i] = '\0'; // Terminate string with NULL
    //Trim trailing white spaces
    i = 0;
    index = -1;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index = i;
        }
        i++;
    }
    //Mark the next character to last non white space character as NULL
    str[index + 1] = '\0';
}
int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
    printf("\nString before trimming white space: \n'%s'", str);
    trim(str);
    printf("\n\nString after trimming white space: \n'%s'", str);
    return 0;
}
