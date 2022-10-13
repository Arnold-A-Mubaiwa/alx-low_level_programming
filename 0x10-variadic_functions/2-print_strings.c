#include "variadic_functions.h"
/**
*print_strings - function that prints the numbers
*@separator: string that separates the numbers
*@n: number of integers to be printed
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list ap;

va_start(ap, n);
for (i = 0; i < n ; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
