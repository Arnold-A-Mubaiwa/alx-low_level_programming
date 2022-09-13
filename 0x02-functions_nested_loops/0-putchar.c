#include <stdio.h>

/**
 * main - main entry of a program
 *
 * Return: return 0 (zero)
 */
void _putchar(char charcters[])
{
	int i =  0;
	while (i < sizeof(charcters))
	{
		putchar(charcters[i];
		i++;
	}
}
int main(void)
{
	int x = 48;
	int y;
	/* char alphabet[] = "abcdefghijklmnopqrstuvwxyz";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 and {0-9} 48-57
	 * {A-Z} 97-12
	 */
	_putchar();
	putchar('\n');
	return (0);
}
