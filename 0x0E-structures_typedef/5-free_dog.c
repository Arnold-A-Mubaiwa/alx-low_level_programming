#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- frees memory allocated in dog
 *@d: dog_t
 *Return:void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free((*d).owner);
free((*d).name);
free(d);
}
}
