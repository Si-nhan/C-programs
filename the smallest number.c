#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int has_different_digits(int num) {
    int digits[10] = {0};
    while (num > 0) {
        int digit = num % 10;
        if (digits[digit]) {
            return 0;
        }
        digits[digit] = 1;
        num /= 10;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int num = 1;
    while (1) {
        if (sum_of_digits(num) == n && has_different_digits(num)) {
            printf("The smallest number with different digits that add up to %d is: %d\n", n, num);
            break;
        }
        num++;
    }

    return 0;
}
