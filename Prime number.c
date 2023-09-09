#include <stdio.h>
int isPrimeNumber(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (!(n % i))
            return 0;
    return 1;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The sequence of prime numbers from 2 to %d is: \n", n);
	for (int i = 2; i < n; i++)
	   if(isPrimeNumber(i)) 
	      printf(" %d", i);

	printf("\n");
    
	int amount, 
        k = 2, // the number to check if it is a prime number
        j = 0; // the number to count the amount of prime numbers
	printf("Enter the amount of prime numbers: ");
	scanf("%d", &amount);

	printf("The sequence of the first %d prime numbers is: \n", amount);
	while(j < amount)
		if(isPrimeNumber(k)) {
	      printf(" %d",k);
	      k++; j++;
	}
	    else k++;
    return 0;
}
