#include "holberton.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: char
  * @accept: char
  * Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int si;
unsigned int ai;
unsigned int not = 0;
unsigned int length = 0;


for (si = 0; s[si] != '\0'; si++)
{
	for (ai = 0; accept[ai] != '\0'; ai++)
	{
		if (s[si] == accept[ai])
		{
			length++;
			not = 0;
			break;
		}
		else
		{
			not++;
			if (accept[not] == '\0')
				return (length);

		}



	}

}

return (length);



}


