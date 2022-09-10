#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 0;
	char alphabet[] = "0123456789";

	while (x <= 10)
	{
		putchar(alphabet[x]);
		if (alphabet[x] != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('$');
	putchar('\n');
	return (0);
}
