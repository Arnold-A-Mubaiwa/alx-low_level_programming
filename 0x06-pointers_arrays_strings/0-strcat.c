#include <stdio.h>
#include <string.h>

/**
 * _strcat - concates 2 strings together
 * @dest: is the initial value
 * @src: is the second value
 * Return: returning the array dest concated
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int length = strlen(dest);

	for (x = 0; x < strlen(src); x++)
		dest[length + x] = src[x];

	return (dest);
}
