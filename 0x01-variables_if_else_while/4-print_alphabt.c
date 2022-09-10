#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return; returns 0 (zero)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x <= 25)
	{
		if (alphabet[x] == 'q' || alphabet[x] == 'e')
		{
			x++;
			continue;
		}
		else
		{
			putchar(alphabet[x]);
			x++;
		}
	}
	putchar('\n');

	return (0);

}
