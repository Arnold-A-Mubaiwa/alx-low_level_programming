
#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 0;
	char alphabet[] = "0123456789abcdef";

	while (x < 16)
	{
		putchar(alphabet[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
