#include <stdio.h>
#include <math.h>
int main() {
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits, // The amount of digits in the input
        amount = 0; // The amount of the 1 bit in the input

    for (digits = 0; num >= pow(2,digits); digits++);
    
    for(int k = 0; k < digits; k++) {
        if(num & 1)  amount++;
            num >>= 1;
    }
    printf("The amount of the 1 bit in the input is: %d\n", amount);
    return 0;
}