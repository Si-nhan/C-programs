#include <stdio.h>
#include <math.h>
int main() {
    int num, i, a = 0;
    printf("Enter the number that you need to know its binary value: ");
    scanf("%d", &num);

    for (i = 0; num >= pow(2,i); i++);
    for (int k = 0, n = num; k < i; k++)
        if (n & 1) {
           a += pow(10,k);
           n >>= 1;
    }
    else 
         n >>= 1;
    printf("The binary value of %d is: %d\n", num, a);
    return 0;
}
