#include<stdio.h>
int main()
{
    int unit;
    scanf("%d",&unit); //input the total unit
    float total_bill = 0;
    if (unit>=0&&unit<=200)
    {
        total_bill += unit*0.50;
    }
    else if(unit>=201&&unit<400){
        total_bill += 100 + (unit-200)*0.65;
    }
    else if(unit>=400&&unit<=600){
        total_bill += 250 + (unit-400)*0.80;
    }
    else{
        total_bill += 425 + (unit-600)*1.25;
    }
    printf("The amount to be paid: %.2f",total_bill);
    return 0;
}
