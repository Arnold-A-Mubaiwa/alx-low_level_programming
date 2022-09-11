
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

	while (x < 58)
	{
		y = x+1;

		while (y < 58)
		{
			z = y+1;
			while (z < 58)
			{

				if (y == z || x == z || x ==y)
				{
					y++;
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
					z++;
				}
			}
			y++;
		}
		x++;
	}
	return (0);
}
