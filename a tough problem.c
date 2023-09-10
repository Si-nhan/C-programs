#include <stdio.h>
#include <math.h>
/*Input: a positive integer
  Output: a number with no repeated digit and the sum of its digits is the input*/
int digitSum(int n)
{
	int sum = 0;
   while (n > 0) {
      int digit = n % 10;
      sum += digit;
      n /= 10;
   }
   return sum;
}
int differentDigit(int n)
{
   int digit_arr[10] = {0}, digit;
   while (n > 0) {
      digit = n % 10;
      if (digit_arr[digit])
         return 0;
      digit_arr[digit] = 1;
      n /= 10;
   }
   return 1;
}
int outPut(int n) 
{
   int i = 1,
       condition = (digitSum(i) == n) && (differentDigit(i));
   while (!condition) 
      i++;
   return i;
}
int main()
{
    int n;
    printf("The sequence of inputs: \n");
    for (n = 10; n <= 45; n++)
      printf(" %d", n);

    printf("\n");

    printf("The sequence of outputs: \n");
    for (n = 10; n <= 45; n++)
      printf(" %d", outPut(n));
    return 0;
}


