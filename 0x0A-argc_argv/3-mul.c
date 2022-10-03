#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: int
 * @argv: char*
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x1, x2;
if (argc == 3)
{
x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
printf("%d\n", x1 *x2);
}
else
printf("Error\n");

return (0);
}


