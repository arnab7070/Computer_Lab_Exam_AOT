#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b); //input two number
    switch (a>b)
    {
    case 1:
        printf("Max is = %d\n",a);
        break;
    case 0:
        if(a==b){
            printf("Both are same.\n");
            return 0;
        }
        printf("Max is = %d\n",b);
        break;
    }
    return 0;
}
