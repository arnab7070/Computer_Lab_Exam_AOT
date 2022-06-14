#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        printf("%d is positive.\n",n);
        break;
    case 0:
        switch (n<0)
        {
        case 1:
            printf("%d is negative.\n",n);
            break;
        
        case 0:
            printf("%d is zero.\n",n);
        }
    }
    return 0;
}
