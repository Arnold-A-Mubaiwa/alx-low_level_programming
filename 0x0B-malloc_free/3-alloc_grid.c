#include "holberton.h"
#include <limits.h>
#include <stdio.h>

/**
 *alloc_grid - returns a pointer to 2D array
 *@width:int
 *@height:int
 *Return:int **
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j, x, y;


if (width <= 0 || height <= 0)
return (NULL);

ar = malloc(height * sizeof(int *));

if (ar == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
ar[i] = malloc(width * sizeof(int));

if (ar[i] == NULL)
{
for (x = 0; x < i; x++)
free(ar[x]);

free(ar);

return (NULL);
}
}

for (y = 0; y < height; y++)
{
for (j = 0; j < width; j++)
ar[y][j] = 0;
}
return (ar);
}
