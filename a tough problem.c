#include <stdio.h>
#include <math.h>
/*Input: a positive integer
  Output: a number with no repeated digit and the sum of its digits is the input*/
int digitSum(int n)
{
	int sum = 0;
   while (n > 0) {
      int unit = n % 10;
      sum += unit;
      n /= 10;
   }
   return sum;
}
int noRepeatedDigit(int n)
{
   int digit_arr[10] = {0}, unit;
   while (n > 0) {
      unit = n % 10;
      if (digit_arr[unit] == 1)
         return 0;
      digit_arr[unit] = 1;
      n /= 10;
   }
   return 1;
}
int outPut(int n) 
{
   int i = 1;
   while ((digitSum(i) != n) || (!noRepeatedDigit(i))) {
      i++;
   }
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


