#include "holberton.h"

/**
* _islower  - checks if c is lowercase
*@c: int
* Return: Always 1 is lowercase, 0 is anything else
*/

int _islower(int c)
{
char alower;

	for (alower = 'a'; alower <= 'z'; alower++)
	{
		if (c == alower)
			return (1);
	}
return (0);
}
