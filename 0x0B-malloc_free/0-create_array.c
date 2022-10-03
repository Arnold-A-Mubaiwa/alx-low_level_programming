#include "holberton.h"
/**
 *create_array- created an aray of chars
 *@size: unsigned int
 *@c: char
 *Return: char*
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size <= 0)
return (NULL);
else
{
a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);
}

for (i = 0; i < size; i++)
a[i] = c;

return (a);

}
