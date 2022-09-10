#include <stdio.h>

/**
 * main - main is the entry point of the program
 *
 * Return: returns 0 (zero)
 */
int main(void)
{
	char alphabet[]= "abcdefghijklmnopqrstuvwxyz";
	int x = 0;
	while(x <= 26)
	{
		putchar(alphabet[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
