#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 25;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (x >= 0)
	{
		putchar(alphabet[x]);
		x--;
	}
	putchar('\n');
	return (0);
}
