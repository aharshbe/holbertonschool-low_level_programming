char *_memset(char *s, char b, unsigned int n)
{
	(void)n;
	s[0] = b;
	return (s);
}