#include <stdio.h>
/**
 * swap_int - swap a and b
 * @a: to swap with b
 * @b: to swap with a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
