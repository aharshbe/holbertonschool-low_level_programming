#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format - Struct format
 *
 * @type: The data type
 * @p: The function associated
 */
typedef struct format
{
	char type;
	void (*p)(va_list);
} form;

#endif
