#include <stdio.h>
int GCD(int n1, int n2){
    if (n2 != 0)
        return GCD(n2, n1 % n2);
    else
        return n1;
}
int main() {
    int key;
    printf("Press 1 for GCD of two numbers & press 2 for GCD of three numbers: ");
    scanf("%d",&key);
    switch (key)
    {
    case 1:{
        int n1, n2;
        printf("Enter two positive integers: ");
        scanf("%d %d", &n1, &n2);
        printf("G.C.D of %d and %d is %d.", n1, n2, GCD(n1, n2));
        break;
    }
    case 2:{
        int x, y, z;
        printf("Enter three positive integers: ");
        scanf("%d %d %d", &x, &y, &z);
        printf("G.C.D of %d, %d & %d is %d.", x, y, z, GCD(x, GCD(y, z)));
        break;
    }
    default:
        printf("Please enter correct input\n");
        break;
    }
    return 0;
}
