#include "main.h"

/**
 * get_size - Calculates size to cast argument
 * @format: Formatted string that prints arguments
 * @g: List of arguments.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *g)
{
	int curr_g = *g + 1;
	int size = 0;

	if (format[curr_g] == 'l')
		size = S_LONG;
	else if (format[curr_g] == 'h')
		size = S_SHORT;

	if (size == 0)
		*g = curr_g - 1;
	else
		*g = curr_g;

	return (size);
}

