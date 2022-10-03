#include "holberton.h"

/**
* _isalpha - checks c for alphabet character
* @c : int
* Return: 1 if lowercase, 0 if upper
*/

int _isalpha(int c)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
	if (c == lower)
		return (1);
}

for (upper = 'A'; upper <= 'Z'; upper++)
{
	if (c == upper)
		return (1);
}
	return (0);
}

