#include <stdio.h>
#include <ctype.h>
/**
 * main - main is the entry point of a program
 *
 * Return: returns 0 (zero)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x;
	int y = 0;

	for (x = 0; x < 2; x++)
	{
		while (y <= 25)
		{
			if (x == 0)
				putchar(toupper(alphabet[y]));
			else
				putchar(toupper(alphabet[y]));
			y++;
		}
		y = 0;
	}
	putchar('\n');

	return (0);
}
