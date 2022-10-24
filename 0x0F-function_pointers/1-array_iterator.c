#include "function_pointers.h"

/**
 *array_iterator - point of entry
 *@array: array to iterate
 *@size: size of array
 *@action:pointer to the function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
