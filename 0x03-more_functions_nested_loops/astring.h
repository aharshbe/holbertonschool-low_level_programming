#include "_putchar.h"
#include <string.h>
void astring(char *string)
{
    int i;
    /* get the size of the array*/
    int size = strlen(string);

    /* iterate through and print each element*/
    for(i = 0; i < size; i++)
    {
        /* check for null terminator */
        if(string[i] != '\0')
        {
            _putchar(string[i]);
        }
    }
    _putchar('\n');
}
