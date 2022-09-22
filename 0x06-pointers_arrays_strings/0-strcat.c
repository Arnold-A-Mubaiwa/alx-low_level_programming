#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int x;
	int length = strlen(dest);

	for (x = 0; x < strlen(src); x++)
		dest[length + x] = src[x];

	return (dest);
}
