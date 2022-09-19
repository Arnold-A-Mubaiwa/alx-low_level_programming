#include <string.h>
#include <stdio.h>
/**
 * print_rev - reverses a string
 *
 * @s: is the string
 */

void print_rev(char *s)
{
	int x;

	for (x = strlen(s)-1; x >= 0; x--)
	{
		putchar(s[x]);
	}
	printf("\n");
}
