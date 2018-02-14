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
	char *val;
	int s_outer = 0, s_inner = 0, size = 0, argc = 0, argv = 0, i = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	while (s_outer < ac)
	{
		while (av[s_outer][s_inner] != '\0')
		{
			size++;
			s_inner++;
		}
		s_inner = 0;
		s_outer++;
	}
	size += ac;
	val = malloc(size);
	while (argc < ac)
	{
		while (argv < size)
		{
			if (av[argc][argv] == '\0')
			{
				val[i] = '\n';
			}
			else
			{
				val[i] = av[argc][argv];
			}
			argv++;
			i++;
		}
		argc++;
	}
	return (val);
}
