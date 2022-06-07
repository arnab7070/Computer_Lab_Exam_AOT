#include<stdio.h>
int main()
{
    printf("Enter 2 numbers two find LCM & GCD: ");
    int a,b;
    scanf("%d%d",&a,&b);
    int max = a>b ? a : b;
    int GCD = 1;
    for(int i = 1; i <= max; i++){
        if(a%i==0&&b%i==0){
            GCD = i;
        }
    }
    int LCM = 1;
    printf("GCD of %d & %d = %d\n",a,b,GCD);
    for(int i = 1; i <= (a*b); i++){
        if(i%a==0&&i%b==0){
            LCM = i;
            break;
        }
    }
    printf("LCM of %d & %d = %d\n",a,b,LCM);
    return 0;
}