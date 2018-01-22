#include "austin.h"
/**
* output should be 0
*/
int _isalpha(int c);
int main(void)
{
	int r;

    	r = _isalpha('H');
    	_putchar(r + '0');
    	r = _isalpha('o');
    	_putchar(r + '0');
    	r = _isalpha(108);
    	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
    	_putchar('\n');
	return (0);
}

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else if(c >= 65 && c <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

