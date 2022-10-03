#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: int
 * @argv: char*
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int x;

for (x = 0; x <= (argc - 1); x++)
printf("%s\n", argv[x]);


return (0);
}
