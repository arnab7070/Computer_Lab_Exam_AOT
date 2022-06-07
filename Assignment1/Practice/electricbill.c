#include<stdio.h>
int main()
{
    int prev_reading,curr_reading;
    printf("Enter previous reading: ");
    scanf("%d",&prev_reading);
    printf("Enter current reading: ");
    scanf("%d",&curr_reading);
    int unit_consumed = curr_reading - prev_reading;
    printf("Electricity bill = %.2f",3.75*unit_consumed);
    return 0;
}