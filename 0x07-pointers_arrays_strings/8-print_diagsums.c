#include "main.h"

/**
*print_diagsums - Prints the sum square matrix diagonals
*@a: The matrix
*@size: How big the matrix is.
*/

void print_diagsums(int *a, int size)
{
	int m, ans1 = 0, ans2 = 0;

	for (m = 0; m < size; m++)
	{
		ans1 += a[m];
		a += size;
	}
	a -= size;

	for (m = 0; m < size; m++)
	{
		ans2 += a[m];
		a -= size;
	}

	printf("%d, %d\n", ans1, ans2);
}
