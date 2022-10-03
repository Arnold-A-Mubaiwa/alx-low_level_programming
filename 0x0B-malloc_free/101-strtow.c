#include "holberton.h"
/**
 *strtow-splits a string into word
 *@str: char
 *Return: char
 */
char **strtow(char *str)
{
char **ar;
int i, j, wordcount = 0, word = 0, wordlength = 0, letter, y;
if (str == NULL || str[0] == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
wordcount++;
}}
if (wordcount == 0)
return (NULL);
ar = malloc((wordcount + 1) * sizeof(char *));
if (ar == NULL)
{
return (NULL);	}
for (i = 0; str[i] != '\0' && word < wordcount; i++)
{
if (str[i] != ' ')
{
wordlength = 0;
for (j = i; str[j] != '\0' && str[j] != ' '; j++, wordlength++)
;
ar[word] = malloc((wordlength + 1) * sizeof(char));
if (ar[word] == NULL)
{
for (y = 0; y < word; y++)
free(ar[word]);
free(ar);
return (NULL); }
for (letter = 0; letter < wordlength; letter++, i++)
{
ar[word][letter] = str[i];
}
ar[word][letter] = '\0';
word++;
}}
ar[word] = NULL;
return (ar);
}
