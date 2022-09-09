#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * more header files goes on top
 *
 * main- function entry point
 * Return: returns 0 (zero)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
