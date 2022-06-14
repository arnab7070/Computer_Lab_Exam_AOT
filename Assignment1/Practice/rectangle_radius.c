#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,r;
    scanf("%d%d%d",&l,&b,&r);
    printf("Area of the rectangle: %d\n",l*b);
    printf("Perimeter of the rectangle: %d\n",2*(l+b));
    printf("Area of the cicle: %d\n",3.14*r*r);
    printf("Circumference of the circle: %f\n",2*3.14*r);
    return 0;
}
