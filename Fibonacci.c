#include <stdio.h>
#include <math.h>
int Fibonacci(int n)
{
	if ((n == 0) || (n == 1))
		return 1;
	else 
		return Fibonacci(n-1) + Fibonacci(n-2);
}
main()
{
	int num, i;
	printf("Enter the number n: ");
	scanf("%d", &num);

	printf("The sequence of the first %d Fibonacci numbers is: \n", num);
	for (i = 0; i < num; i++)
		printf(" %d", Fibonacci(i));
}
