#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
int main(void)
{
	int x = 48;
	int y = 48;
	int z = 48;
	int i = 48;
	/* char alphabet[] = "abcdefghijklmnopqrstuvwxyz";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 and {0-9} 48-57
	 * {A-Z} 97-122
	 */
	while (z < 58)
	{
		while (i < 58)
		{
			while (x < 58)
			{
				while (y < 58)
				{
					putchar(z);
					putchar(i);
					putchar(' ');
					putchar(x);
					putchar(y);
					putchar(',');
					putchar(' ');
					y++;
				}
				x++;
				y = 48;
			}
			i++;
			x = 48;	
		}
		z++;
		i = 48;
	}
	putchar('\n');
	return (0);
}
