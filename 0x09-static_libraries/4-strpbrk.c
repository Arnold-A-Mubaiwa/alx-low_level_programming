#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk-searches string for set of bytes
 *@s: char
 *@accept: char
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
int x;

for (; *s; s++)
{
	for (x = 0; accept[x] != '\0'; x++)
	{
		if (*s == accept[x])
			return (s);


	}
}
return (NULL);


}

