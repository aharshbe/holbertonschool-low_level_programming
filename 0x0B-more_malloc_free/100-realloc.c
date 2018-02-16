#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - Short description, single line
* @ptr: Description of parameter size
* @old_size: Description of parameter size
* @new_size: Description of parameter size
* Return: 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int old_size_i = old_size, new_size_i = new_size, i = 0;
	int actual_s = new_size - old_size;

	char *new_p;
	char *ptr_p = ptr;

	if (new_size_i == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size_i == old_size_i)
		return (ptr);

	if (ptr == NULL)
		return(malloc(sizeof(char) * new_size_i));

	new_p = malloc(sizeof(char) * new_size_i);

	if (new_p == NULL)
		return (NULL);

	while (i < actual_s)
	{
		new_p[i] = ptr_p[i];
		i++;
	}
	free(ptr);
	return (new_p);
}
