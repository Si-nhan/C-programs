#include <stdio.h>
main()
{
	int a[10][10], i, j, min;
	printf("Enter a 5x5 array: \n");
	for (i = 0; i < 5; i++)
	    for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
			
	for (i = 0; i < 5; i++) 
	    for (j = 0; j < 5; j++) 
			if (a[i][i] < a[i][j]) {
				a[i][i] += a[i][j];
				a[i][j] = a[i][i] - a[i][j];
				a[i][i] -= a[i][j];
	    }	
	printf("The arranged array: \n");
	for (i = 0; i < 5; i++) {
	    for (j = 0; j < 5; j++)
			printf(" %d", a[i][j]);
			printf("\n");
	}
}
