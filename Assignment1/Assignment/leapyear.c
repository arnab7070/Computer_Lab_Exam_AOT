//code to check a leap year
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d", &year);
    if(year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("Yes, %d is a leap year.", year);
            }
            else{
                printf("No, %d is not a leap year.", year);
            }
        }
        else{
                printf("Yes, %d is a leap year.", year);
        }
    }
    else
    {
        printf("No, %d is not a leap year.", year);
    }
    return 0;
}