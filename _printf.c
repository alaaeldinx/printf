#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: format string to be processed
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
			count += _handle(format[++i], args);
	}

	va_end(args);
	return (count);
}
