#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter the values of a,b,c: ");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    //ax^2 + bx + c = 0
    float D = pow(b,2)-4*a*c;
    if(D==0){
        printf("Roots are real and equal...\n");
        printf("Root 1 = Root 2 = %f\n",(-b/(2*a)));
    }
    else if(D>0){
        printf("Roots are real and unequal...\n");
        float root1 = (-b/(2*a))+(sqrt(D)/(2*a));
        float root2 = (-b/(2*a))-(sqrt(D)/(2*a));
        printf("Root 1 = %f, Root2 = %f\n",root1,root2);
    }
    else{
        printf("Roots are imaginary...\n");
        float real = (-b/(2*a));
        float imaginary = (sqrt(-D)/(2*a));
        printf("Root 1 = %f + %f*i\n",real,imaginary);
        printf("Root 1 = %f - %f*i\n",real,imaginary);
    }
    return 0;
}