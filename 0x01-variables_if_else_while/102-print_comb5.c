

#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 48;
	/* char alphabet[] = "0123456789";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 and {0-9} 48-57
	 * {A-Z} 97-122
	 */

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
