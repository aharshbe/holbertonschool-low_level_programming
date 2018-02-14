#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - Short description, single line
* @ac: Description of parameter s1
* @av: Description of parameter s2
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int s_outer = 0, s_inner = 0, size = 0, i = 0, j = 0, freed = 0;
	char **argv2;

	if (ac == 0)
		return (NULL);
	if(av == NULL)
		return (NULL);

	while (s_outer < ac)
	{
		while(av[s_outer][s_inner] != '\0')
		{
			size++;
			s_inner++;
		}
		s_inner = 0;
		s_outer++;
	}

	argv2 = malloc(ac);
	
	for (i = 0; i < ac; i++)
	{
		argv2[i] = malloc(size * sizeof(char *));
		
		if (argv2[i] == NULL)
		{
			while (freed <= i)
			{
				free(argv2[i]);
				i--;
			}
			free(argv2);
			return (NULL);
		}
	}

	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < 1; j++)
		{
			argv2[i] = av[i];
			printf("%s\n", argv2[i]);
		}
	}

	return (0);
}
