#include "main.h"

/**
 * get_width - Calculates width
 * @format: Formatted string that print arguments.
 * @g: List arguments to be printed.
 * @list: list arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *g, va_list list)
{
	int curr_g;
	int width = 0;

	for (curr_g = *g + 1; format[curr_g] != '\0'; curr_g++)
	{
		if (is_digit(format[curr_g]))
		{
			width *= 10;
			width += format[curr_g] - '0';
		}
		else if (format[curr_g] == '*')
		{
			curr_g++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*g = curr_g - 1;

	return (width);
}

