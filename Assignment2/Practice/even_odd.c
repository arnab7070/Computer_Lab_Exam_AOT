#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n%2)
    {
    case 0:
        printf("Given number is even\n");
        break;
    
    case 1:
        printf("Given number is odd\n");
        break;
    }
    return 0;
}