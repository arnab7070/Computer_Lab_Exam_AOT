#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%s", &str);
    int length = strlen(str);
    int pos = 0;
    int arr[length];
    //placing hashes for same characters & storing the occuring of characters in array
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '#')
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '#';
            }
        }

        arr[pos] = count;
        pos++;
    }

    //calculating the minimum & maximum count value
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < pos; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    //calculating how many times max & min count is occuring
    int min_count = 0;
    int max_count = 0;
    for (int i = 0; i < pos; i++)
    {
        if (min == arr[i])
        {
            min_count++;
        }
        if (max == arr[i])
        {
            max_count++;
        }
    }

    // removing the hashes
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '#')
        {
            for (int j = i; j < length - 1; j++)
            {
                str[j] = str[j + 1];
            }
            length--; // decreasing the length of string
            i--; // for cross checking of string
        }
    }

    printf("Minimum occuring characters: ");
    int i = 0;
    while (min_count != 0)
    {
        if (arr[i] == min)
        {
            printf("%c ", str[i]);
            min_count--;
        }
        i++;
    }
    printf("\n");
    int k = 0;
    printf("Maximum occuring characters: ");
    while (max_count != 0)
    {
        if (arr[k] == max)
        {
            printf("%c ", str[k]);
            max_count--;
        }
        k++;
    }
    return 0;
}