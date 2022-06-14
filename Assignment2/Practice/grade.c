#include<stdio.h>
int main()
{
    int result;
    scanf("%d",&result);
    if(result>=90&&result<=100){
        printf("Grade = O");
    }
    else if(result>=80){
        printf("Grade = E");
    }
    else if(result>=70){
        printf("Grade = A");
    }
    else if(result>=60){
        printf("Grade = B");
    }
    else if(result>=50){
        printf("Grade = C");
    }
    else if(result>=40){
        printf("Grade = D");
    }
    else if(result>=0){
        printf("Grade = F(FAILED)");
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}
