#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main -add positive numbers
 * @argc: int
 * @argv: char *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

for (i = 1; i <= (argc - 1); i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}


if (argc > 1)
{
for (i = 1; i <= (argc - 1); i++)
{
sum = sum + atoi(argv[i]);

}
printf("%d\n", sum);
}

if (argc == 1)
printf("0\n");

return (0);

}
