
#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 48;
	int y;
	/* char alphabet[] = "abcdefghijklmnopqrstuvwxyz";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 and {0-9} 48-57
	 * {A-Z} 97-122
	 */

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (x == 56 && y == 57)
			{
				y++;
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
				y++;
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
