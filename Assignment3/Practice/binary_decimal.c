#include<stdio.h>
#include<math.h>
int binaryToDecimal(int n){
    int decimal = 0, powerFactor = 0;

    while (n>0)
    {
        int temp = n%10;
        decimal += (temp*pow(2,powerFactor));
        n /= 10;
        powerFactor++;
    }
    return decimal;
}

void decimalToBinary(int n){
 
    int binary[100];
    int pos = 0;
    while (n>0)
    {
        int temp = n%2;
        binary[pos] = temp;
        n /= 2;
        pos++;
    }
    
    for(int i = 0; i < pos; i++){
        printf("%d",binary[i]);
    }
    
}
int main()
{
    int binary,decimal;
    printf("Enter the binary number: ");
    scanf("%d",&binary);
    printf("The decimal conversion of %d = %d\n",binary,binaryToDecimal(binary));

    printf("Enter the decimal number: ");
    scanf("%d",&decimal);
    printf("The binary conversion of %d = ",decimal);
    decimalToBinary(decimal);
    return 0;
}