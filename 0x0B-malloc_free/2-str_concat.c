#include "holberton.h"

/**
  *str_concat-cat 2 strings
  *@s1: char
  *@s2: char
  *Return: char
  */


char *str_concat(char *s1, char *s2)
{
unsigned int length1;
unsigned int length2;
unsigned int i, j, k;
char *ar;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (length1 = 0; s1[length1] != '\0'; length1++)
;
for (length2 = 0; s2[length2] != '\0'; length2++)
;
length2++;

ar = malloc((length1 * sizeof(char)) + (length2 *sizeof(char)));

if (ar == NULL)
{
free(ar);
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
ar[i] = s1[i];

for (j = i, k = 0; s2[k] != '\0'; j++, k++)
ar[j] = s2[k];


ar[j] = '\0';

return (ar);

}
