#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - is the begining of the code
 *
 * Returns a 0 (zero) 
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, last_number;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_number = n % 10;

	if (last_number > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_number);
	else if (last_number < 6 && last_number != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_number);
	else 
		printf("Last digit of %d is %d and is 0", n, last_number);

	return (0);
}
