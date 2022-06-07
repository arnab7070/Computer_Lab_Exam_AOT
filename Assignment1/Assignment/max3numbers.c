#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("Max is %d",a);
        }
        else{
            printf("Max is %d",c);
            
        }
    }
    else{
        if(c>b){
            printf("Max is %d",c);
        }
        else{
            printf("Max is %d",b);
        }
        
    }
    return 0;
}