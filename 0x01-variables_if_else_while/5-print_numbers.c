#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
