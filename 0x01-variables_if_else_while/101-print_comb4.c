
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
	/* char alphabet[] = "abcdefghijklmnopqrstuvwxyz";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 and {0-9} 48-57
	 * {A-Z} 97-122
	 */

	while (x < 58)
	{
		y = 48;

		while (y < 58)
		{
			if (x == y)
			{
				y++;
				continue;
			}
			else
			{
				z = 48;
				while (z < 58)
				{

					if (y == z || x == z)
					{
						z++;
						continue;
					}
					else
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if ((x == 55) && (y == 56) && (z == 57))
						{
							putchar('\n');
							return (0);
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					z++;
				}
			}
			y++;
		}
		x++;
	}
	return (0);
}
