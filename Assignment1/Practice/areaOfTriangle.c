#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    //enter three sides of a triangle
    scanf("%d%d%d",&a,&b,&c);
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is = %.2f\n",area);
    return 0;
}