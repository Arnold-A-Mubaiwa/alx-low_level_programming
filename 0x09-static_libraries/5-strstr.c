#include "holberton.h"
/**
  * _strstr- located a substring
  * @haystack:char
  * @needle:char
  * Return:char
  */
char *_strstr(char *haystack, char *needle)
{
char *neelength = needle;
char *haynull = haystack;
int length = 0, count = 0, ni;

while (*neelength)
{
	length++;
	neelength++;
}
if (length == 0)
	return (haystack);
while (*haynull)
	haynull++;
while (*haystack)
{
	if (*haystack == needle[0])
	{
		count++;
		haystack++;
		for (ni = 1; needle[ni] != '\0'; ni++)
		{
			if (*haystack == needle[ni])
			{
				count++;
				haystack++;
				if (count == length)
					return (haystack - length);
			}
			else
			{
				count = 0;
				break;
			}
		}
	}
	else
		haystack++;
}
return (haynull);
}
