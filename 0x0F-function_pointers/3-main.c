#include "3-calc.h"

/**
  * main - check the code
  * @argc: first integer value
  * @argv: character array
  *
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
int val;

if (argc - 1 > 3 || argc - 1 < 3)
{
printf("Error\n");
exit(98);
}
if ((strcmp(argv[2], "+") == 0) || (strcmp(argv[2], "-") == 0) ||
(strcmp(argv[2], "*") == 0) ||
(strcmp(argv[2], "/") == 0) ||
(strcmp(argv[2], "%") == 0))
{
if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0)) &&
atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}

val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", val);
return (0);
}
else
{
printf("Error\n");
exit(99);
}
}
