#include <stdio.h>
int isPrimeNumber(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (!(n % i))
            return 0;
    return 1;
}
main()
{
	int a[10][10], i, j;
	printf("Enter a 5x5 array: \n");
	for(i = 0; i < 5; i++)
	    for(j = 0; j < 5; j++)
			scanf(" %d", &a[i][j]);

	printf("The list of prime numbers in the array:\n");
	for(i = 0; i < 5; i++)
	    for(j = 0; j < 5; j++)
	  	  if(isPrimeNumber(a[i][j])) 
	      	printf("The number %d at the row %d and the column %d \n", a[i][j], i, j);
}
	      
